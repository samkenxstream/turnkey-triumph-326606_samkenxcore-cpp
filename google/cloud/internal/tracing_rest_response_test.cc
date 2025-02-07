// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
#include "google/cloud/internal/tracing_rest_response.h"
#include "google/cloud/internal/rest_opentelemetry.h"
#include "google/cloud/testing_util/mock_http_payload.h"
#include "google/cloud/testing_util/mock_rest_response.h"
#include "google/cloud/testing_util/opentelemetry_matchers.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>
#include <opentelemetry/context/propagation/global_propagator.h>
#include <opentelemetry/trace/semantic_conventions.h>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::google::cloud::testing_util::InstallSpanCatcher;
using ::google::cloud::testing_util::MakeMockHttpPayloadSuccess;
using ::google::cloud::testing_util::MockRestResponse;
using ::google::cloud::testing_util::SpanAttribute;
using ::google::cloud::testing_util::SpanHasAttributes;
using ::google::cloud::testing_util::SpanHasInstrumentationScope;
using ::google::cloud::testing_util::SpanKindIsClient;
using ::google::cloud::testing_util::SpanNamed;
using ::testing::AllOf;
using ::testing::Return;
using ::testing::UnorderedElementsAre;

std::string MockContents() {
  return "The quick brown fox jumps over the lazy dog";
}

TEST(TracingRestResponseTest, Success) {
  namespace sc = ::opentelemetry::trace::SemanticConventions;
  auto span_catcher = InstallSpanCatcher();

  RestRequest request("https://example.com/ignored");
  auto span = MakeSpanHttp(request, "GET");

  auto impl = std::make_unique<MockRestResponse>();
  EXPECT_CALL(*impl, StatusCode).WillRepeatedly(Return(HttpStatusCode::kOk));
  EXPECT_CALL(std::move(*impl), ExtractPayload).WillOnce([] {
    return MakeMockHttpPayloadSuccess(MockContents());
  });

  TracingRestResponse response(std::move(impl), std::move(span));

  auto payload = std::move(response).ExtractPayload();
  auto constexpr kBufferSize = 64;
  std::vector<char> buffer(kBufferSize);
  auto status = payload->Read(absl::Span<char>(buffer.data(), buffer.size()));
  ASSERT_STATUS_OK(status);
  EXPECT_EQ(*status, MockContents().size());
  status = payload->Read(absl::Span<char>(buffer.data(), buffer.size()));
  ASSERT_STATUS_OK(status);
  EXPECT_EQ(*status, 0);

  auto spans = span_catcher->GetSpans();
  auto make_read_event_matcher = [](std::int64_t bs, std::int64_t rs) {
    return AllOf(SpanNamed("Read"), SpanHasInstrumentationScope(),
                 SpanKindIsClient(),
                 SpanHasAttributes(
                     SpanAttribute<std::int32_t>("gcloud.status_code", 0),
                     SpanAttribute<std::int64_t>("read.buffer.size", bs),
                     SpanAttribute<std::int64_t>("read.returned.size", rs)));
  };
  auto const content_size = static_cast<std::int64_t>(MockContents().size());
  EXPECT_THAT(
      spans, UnorderedElementsAre(
                 AllOf(SpanNamed("HTTP/GET"), SpanHasInstrumentationScope(),
                       SpanKindIsClient(),
                       SpanHasAttributes(SpanAttribute<std::string>(
                           sc::kNetTransport, sc::NetTransportValues::kIpTcp))),
                 make_read_event_matcher(kBufferSize, content_size),
                 make_read_event_matcher(kBufferSize, 0)));
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
