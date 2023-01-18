// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/golden_kitchen_sink_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GoldenKitchenSinkConnectionIdempotencyPolicy::~GoldenKitchenSinkConnectionIdempotencyPolicy() = default;

std::unique_ptr<GoldenKitchenSinkConnectionIdempotencyPolicy>
GoldenKitchenSinkConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<GoldenKitchenSinkConnectionIdempotencyPolicy>(*this);
}

Idempotency GoldenKitchenSinkConnectionIdempotencyPolicy::GenerateAccessToken(google::test::admin::database::v1::GenerateAccessTokenRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GoldenKitchenSinkConnectionIdempotencyPolicy::GenerateIdToken(google::test::admin::database::v1::GenerateIdTokenRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GoldenKitchenSinkConnectionIdempotencyPolicy::WriteLogEntries(google::test::admin::database::v1::WriteLogEntriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GoldenKitchenSinkConnectionIdempotencyPolicy::ListLogs(google::test::admin::database::v1::ListLogsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency GoldenKitchenSinkConnectionIdempotencyPolicy::ListServiceAccountKeys(google::test::admin::database::v1::ListServiceAccountKeysRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency GoldenKitchenSinkConnectionIdempotencyPolicy::DoNothing(google::protobuf::Empty const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GoldenKitchenSinkConnectionIdempotencyPolicy::Deprecated2(google::test::admin::database::v1::GenerateAccessTokenRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GoldenKitchenSinkConnectionIdempotencyPolicy::ExplicitRouting1(google::test::admin::database::v1::ExplicitRoutingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GoldenKitchenSinkConnectionIdempotencyPolicy::ExplicitRouting2(google::test::admin::database::v1::ExplicitRoutingRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<GoldenKitchenSinkConnectionIdempotencyPolicy>
    MakeDefaultGoldenKitchenSinkConnectionIdempotencyPolicy() {
  return absl::make_unique<GoldenKitchenSinkConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1
}  // namespace cloud
}  // namespace google
