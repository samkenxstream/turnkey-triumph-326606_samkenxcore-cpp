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
// source: google/cloud/dialogflow/cx/v3/experiment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_EXPERIMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_EXPERIMENTS_CLIENT_H

#include "google/cloud/dialogflow_cx/experiments_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing
/// [Experiments][google.cloud.dialogflow.cx.v3.Experiment].
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ExperimentsClient {
 public:
  explicit ExperimentsClient(std::shared_ptr<ExperimentsConnection> connection,
                             Options opts = {});
  ~ExperimentsClient();

  ///@{
  /// @name Copy and move support
  ExperimentsClient(ExperimentsClient const&) = default;
  ExperimentsClient& operator=(ExperimentsClient const&) = default;
  ExperimentsClient(ExperimentsClient&&) = default;
  ExperimentsClient& operator=(ExperimentsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ExperimentsClient const& a,
                         ExperimentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ExperimentsClient const& a,
                         ExperimentsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of all experiments in the specified
  /// [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param parent  Required. The
  /// [Environment][google.cloud.dialogflow.cx.v3.Environment] to
  ///  list all environments for. Format:
  ///  @code
  ///  projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>
  ///  @endcode
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.ListExperimentsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L405}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Experiment> ListExperiments(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all experiments in the specified
  /// [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::ListExperimentsRequest,google/cloud/dialogflow/cx/v3/experiment.proto#L405}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.ListExperimentsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L405}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Experiment> ListExperiments(
      google::cloud::dialogflow::cx::v3::ListExperimentsRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param name  Required. The name of the
  ///  [Environment][google.cloud.dialogflow.cx.v3.Environment]. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>/experiments/<Experiment ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L441}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> GetExperiment(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::GetExperimentRequest,google/cloud/dialogflow/cx/v3/experiment.proto#L441}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L441}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> GetExperiment(
      google::cloud::dialogflow::cx::v3::GetExperimentRequest const& request,
      Options opts = {});

  ///
  /// Creates an [Experiment][google.cloud.dialogflow.cx.v3.Experiment] in the
  /// specified [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param parent  Required. The [Agent][google.cloud.dialogflow.cx.v3.Agent]
  /// to create an
  ///  [Environment][google.cloud.dialogflow.cx.v3.Environment] for. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>`.
  /// @param experiment  Required. The experiment to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreateExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L456}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> CreateExperiment(
      std::string const& parent,
      google::cloud::dialogflow::cx::v3::Experiment const& experiment,
      Options opts = {});

  ///
  /// Creates an [Experiment][google.cloud.dialogflow.cx.v3.Experiment] in the
  /// specified [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::CreateExperimentRequest,google/cloud/dialogflow/cx/v3/experiment.proto#L456}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreateExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L456}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> CreateExperiment(
      google::cloud::dialogflow::cx::v3::CreateExperimentRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param experiment  Required. The experiment to update.
  /// @param update_mask  Required. The mask to control which fields get
  /// updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.UpdateExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L474}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> UpdateExperiment(
      google::cloud::dialogflow::cx::v3::Experiment const& experiment,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::UpdateExperimentRequest,google/cloud/dialogflow/cx/v3/experiment.proto#L474}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.UpdateExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L474}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> UpdateExperiment(
      google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param name  Required. The name of the
  ///  [Environment][google.cloud.dialogflow.cx.v3.Environment] to delete.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>/experiments/<Experiment ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeleteExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L485}
  ///
  Status DeleteExperiment(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::DeleteExperimentRequest,google/cloud/dialogflow/cx/v3/experiment.proto#L485}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeleteExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L485}
  ///
  Status DeleteExperiment(
      google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const& request,
      Options opts = {});

  ///
  /// Starts the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment]. This rpc only
  /// changes the state of experiment from PENDING to RUNNING.
  ///
  /// @param name  Required. Resource name of the experiment to start.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>/experiments/<Experiment ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.StartExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L500}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StartExperiment(
      std::string const& name, Options opts = {});

  ///
  /// Starts the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment]. This rpc only
  /// changes the state of experiment from PENDING to RUNNING.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::StartExperimentRequest,google/cloud/dialogflow/cx/v3/experiment.proto#L500}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.StartExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L500}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StartExperiment(
      google::cloud::dialogflow::cx::v3::StartExperimentRequest const& request,
      Options opts = {});

  ///
  /// Stops the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment]. This rpc only
  /// changes the state of experiment from RUNNING to DONE.
  ///
  /// @param name  Required. Resource name of the experiment to stop.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>/experiments/<Experiment ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.StopExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L514}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StopExperiment(
      std::string const& name, Options opts = {});

  ///
  /// Stops the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment]. This rpc only
  /// changes the state of experiment from RUNNING to DONE.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::StopExperimentRequest,google/cloud/dialogflow/cx/v3/experiment.proto#L514}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Experiment,google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  /// [google.cloud.dialogflow.cx.v3.StopExperimentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L514}
  /// [google.cloud.dialogflow.cx.v3.Experiment]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StopExperiment(
      google::cloud::dialogflow::cx::v3::StopExperimentRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ExperimentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_EXPERIMENTS_CLIENT_H
