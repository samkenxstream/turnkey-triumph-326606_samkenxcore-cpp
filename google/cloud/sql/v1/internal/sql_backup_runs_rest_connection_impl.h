// Copyright 2023 Google LLC
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
// source: google/cloud/sql/v1/cloud_sql_backup_runs.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_BACKUP_RUNS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_BACKUP_RUNS_REST_CONNECTION_IMPL_H

#include "google/cloud/sql/v1/internal/sql_backup_runs_rest_stub.h"
#include "google/cloud/sql/v1/internal/sql_backup_runs_retry_traits.h"
#include "google/cloud/sql/v1/sql_backup_runs_connection.h"
#include "google/cloud/sql/v1/sql_backup_runs_connection_idempotency_policy.h"
#include "google/cloud/sql/v1/sql_backup_runs_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SqlBackupRunsServiceRestConnectionImpl
    : public sql_v1::SqlBackupRunsServiceConnection {
 public:
  ~SqlBackupRunsServiceRestConnectionImpl() override = default;

  SqlBackupRunsServiceRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<sql_v1_internal::SqlBackupRunsServiceRestStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::sql::v1::SqlBackupRunsDeleteRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::BackupRun> Get(
      google::cloud::sql::v1::SqlBackupRunsGetRequest const& request) override;

  StatusOr<google::cloud::sql::v1::Operation> Insert(
      google::cloud::sql::v1::SqlBackupRunsInsertRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::BackupRunsListResponse> List(
      google::cloud::sql::v1::SqlBackupRunsListRequest const& request) override;

 private:
  std::unique_ptr<sql_v1::SqlBackupRunsServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<sql_v1::SqlBackupRunsServiceRetryPolicyOption>()) {
      return options.get<sql_v1::SqlBackupRunsServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<sql_v1::SqlBackupRunsServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<sql_v1::SqlBackupRunsServiceBackoffPolicyOption>()) {
      return options.get<sql_v1::SqlBackupRunsServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<sql_v1::SqlBackupRunsServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<sql_v1::SqlBackupRunsServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            sql_v1::SqlBackupRunsServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<sql_v1::SqlBackupRunsServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<sql_v1::SqlBackupRunsServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<sql_v1_internal::SqlBackupRunsServiceRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_BACKUP_RUNS_REST_CONNECTION_IMPL_H
