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
// source: google/cloud/dialogflow/v2/conversation_model.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_MODELS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_MODELS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_es/conversation_models_connection.h"
#include "google/cloud/dialogflow_es/conversation_models_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_es/conversation_models_options.h"
#include "google/cloud/dialogflow_es/internal/conversation_models_retry_traits.h"
#include "google/cloud/dialogflow_es/internal/conversation_models_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConversationModelsConnectionImpl
    : public dialogflow_es::ConversationModelsConnection {
 public:
  ~ConversationModelsConnectionImpl() override = default;

  ConversationModelsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_es_internal::ConversationModelsStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::dialogflow::v2::ConversationModel>>
  CreateConversationModel(
      google::cloud::dialogflow::v2::CreateConversationModelRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationModel>
  GetConversationModel(
      google::cloud::dialogflow::v2::GetConversationModelRequest const& request)
      override;

  StreamRange<google::cloud::dialogflow::v2::ConversationModel>
  ListConversationModels(
      google::cloud::dialogflow::v2::ListConversationModelsRequest request)
      override;

  future<StatusOr<
      google::cloud::dialogflow::v2::DeleteConversationModelOperationMetadata>>
  DeleteConversationModel(
      google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
          request) override;

  future<StatusOr<
      google::cloud::dialogflow::v2::DeployConversationModelOperationMetadata>>
  DeployConversationModel(
      google::cloud::dialogflow::v2::DeployConversationModelRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::v2::
                      UndeployConversationModelOperationMetadata>>
  UndeployConversationModel(
      google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>
  GetConversationModelEvaluation(
      google::cloud::dialogflow::v2::
          GetConversationModelEvaluationRequest const& request) override;

  StreamRange<google::cloud::dialogflow::v2::ConversationModelEvaluation>
  ListConversationModelEvaluations(
      google::cloud::dialogflow::v2::ListConversationModelEvaluationsRequest
          request) override;

  future<StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>>
  CreateConversationModelEvaluation(
      google::cloud::dialogflow::v2::
          CreateConversationModelEvaluationRequest const& request) override;

 private:
  std::unique_ptr<dialogflow_es::ConversationModelsRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::ConversationModelsRetryPolicyOption>()) {
      return options.get<dialogflow_es::ConversationModelsRetryPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_es::ConversationModelsRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::ConversationModelsBackoffPolicyOption>()) {
      return options
          .get<dialogflow_es::ConversationModelsBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_es::ConversationModelsBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<dialogflow_es::ConversationModelsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<dialogflow_es::
                     ConversationModelsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<dialogflow_es::
                   ConversationModelsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<dialogflow_es::
                 ConversationModelsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::ConversationModelsPollingPolicyOption>()) {
      return options
          .get<dialogflow_es::ConversationModelsPollingPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_es::ConversationModelsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_es_internal::ConversationModelsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_MODELS_CONNECTION_IMPL_H
