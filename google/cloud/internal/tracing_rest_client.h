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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_TRACING_REST_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_TRACING_REST_CLIENT_H

#include "google/cloud/internal/rest_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TracingRestClient : public RestClient {
 public:
  explicit TracingRestClient(std::unique_ptr<RestClient> impl);
  ~TracingRestClient() override = default;

  StatusOr<std::unique_ptr<RestResponse>> Delete(
      RestContext& context, RestRequest const& request) override;
  StatusOr<std::unique_ptr<RestResponse>> Get(
      RestContext& context, RestRequest const& request) override;
  StatusOr<std::unique_ptr<RestResponse>> Patch(
      RestContext& context, RestRequest const& request,
      std::vector<absl::Span<char const>> const& payload) override;
  StatusOr<std::unique_ptr<RestResponse>> Post(
      RestContext& context, RestRequest const& request,
      std::vector<absl::Span<char const>> const& payload) override;
  StatusOr<std::unique_ptr<RestResponse>> Post(
      RestContext& context, RestRequest const& request,
      std::vector<std::pair<std::string, std::string>> const& form_data)
      override;
  StatusOr<std::unique_ptr<RestResponse>> Put(
      RestContext& context, RestRequest const& request,
      std::vector<absl::Span<char const>> const& payload) override;

 private:
  std::unique_ptr<RestClient> impl_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/// Decorate a `RestClient` with a tracing wrapper.
std::unique_ptr<RestClient> MakeTracingRestClient(
    std::unique_ptr<RestClient> client);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_TRACING_REST_CLIENT_H
