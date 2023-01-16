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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#include "google/cloud/vmmigration/vm_migration_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace vmmigration {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VmMigrationClient::VmMigrationClient(
    std::shared_ptr<VmMigrationConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
VmMigrationClient::~VmMigrationClient() = default;

StreamRange<google::cloud::vmmigration::v1::Source>
VmMigrationClient::ListSources(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::ListSourcesRequest request;
  request.set_parent(parent);
  return connection_->ListSources(request);
}

StreamRange<google::cloud::vmmigration::v1::Source>
VmMigrationClient::ListSources(
    google::cloud::vmmigration::v1::ListSourcesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSources(std::move(request));
}

StatusOr<google::cloud::vmmigration::v1::Source> VmMigrationClient::GetSource(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::GetSourceRequest request;
  request.set_name(name);
  return connection_->GetSource(request);
}

StatusOr<google::cloud::vmmigration::v1::Source> VmMigrationClient::GetSource(
    google::cloud::vmmigration::v1::GetSourceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSource(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Source>>
VmMigrationClient::CreateSource(
    std::string const& parent,
    google::cloud::vmmigration::v1::Source const& source,
    std::string const& source_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CreateSourceRequest request;
  request.set_parent(parent);
  *request.mutable_source() = source;
  request.set_source_id(source_id);
  return connection_->CreateSource(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Source>>
VmMigrationClient::CreateSource(
    google::cloud::vmmigration::v1::CreateSourceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSource(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Source>>
VmMigrationClient::UpdateSource(
    google::cloud::vmmigration::v1::Source const& source,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::UpdateSourceRequest request;
  *request.mutable_source() = source;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSource(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Source>>
VmMigrationClient::UpdateSource(
    google::cloud::vmmigration::v1::UpdateSourceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSource(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteSource(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::DeleteSourceRequest request;
  request.set_name(name);
  return connection_->DeleteSource(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteSource(
    google::cloud::vmmigration::v1::DeleteSourceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSource(request);
}

StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
VmMigrationClient::FetchInventory(std::string const& source, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::FetchInventoryRequest request;
  request.set_source(source);
  return connection_->FetchInventory(request);
}

StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
VmMigrationClient::FetchInventory(
    google::cloud::vmmigration::v1::FetchInventoryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchInventory(request);
}

StreamRange<google::cloud::vmmigration::v1::UtilizationReport>
VmMigrationClient::ListUtilizationReports(std::string const& parent,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::ListUtilizationReportsRequest request;
  request.set_parent(parent);
  return connection_->ListUtilizationReports(request);
}

StreamRange<google::cloud::vmmigration::v1::UtilizationReport>
VmMigrationClient::ListUtilizationReports(
    google::cloud::vmmigration::v1::ListUtilizationReportsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListUtilizationReports(std::move(request));
}

StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
VmMigrationClient::GetUtilizationReport(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::GetUtilizationReportRequest request;
  request.set_name(name);
  return connection_->GetUtilizationReport(request);
}

StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
VmMigrationClient::GetUtilizationReport(
    google::cloud::vmmigration::v1::GetUtilizationReportRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetUtilizationReport(request);
}

future<StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>
VmMigrationClient::CreateUtilizationReport(
    std::string const& parent,
    google::cloud::vmmigration::v1::UtilizationReport const& utilization_report,
    std::string const& utilization_report_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CreateUtilizationReportRequest request;
  request.set_parent(parent);
  *request.mutable_utilization_report() = utilization_report;
  request.set_utilization_report_id(utilization_report_id);
  return connection_->CreateUtilizationReport(request);
}

future<StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>
VmMigrationClient::CreateUtilizationReport(
    google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateUtilizationReport(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteUtilizationReport(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::DeleteUtilizationReportRequest request;
  request.set_name(name);
  return connection_->DeleteUtilizationReport(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteUtilizationReport(
    google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteUtilizationReport(request);
}

StreamRange<google::cloud::vmmigration::v1::DatacenterConnector>
VmMigrationClient::ListDatacenterConnectors(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest request;
  request.set_parent(parent);
  return connection_->ListDatacenterConnectors(request);
}

StreamRange<google::cloud::vmmigration::v1::DatacenterConnector>
VmMigrationClient::ListDatacenterConnectors(
    google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDatacenterConnectors(std::move(request));
}

StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
VmMigrationClient::GetDatacenterConnector(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::GetDatacenterConnectorRequest request;
  request.set_name(name);
  return connection_->GetDatacenterConnector(request);
}

StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
VmMigrationClient::GetDatacenterConnector(
    google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDatacenterConnector(request);
}

future<StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>
VmMigrationClient::CreateDatacenterConnector(
    std::string const& parent,
    google::cloud::vmmigration::v1::DatacenterConnector const&
        datacenter_connector,
    std::string const& datacenter_connector_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest request;
  request.set_parent(parent);
  *request.mutable_datacenter_connector() = datacenter_connector;
  request.set_datacenter_connector_id(datacenter_connector_id);
  return connection_->CreateDatacenterConnector(request);
}

future<StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>
VmMigrationClient::CreateDatacenterConnector(
    google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDatacenterConnector(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteDatacenterConnector(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest request;
  request.set_name(name);
  return connection_->DeleteDatacenterConnector(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteDatacenterConnector(
    google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDatacenterConnector(request);
}

future<StatusOr<google::cloud::vmmigration::v1::UpgradeApplianceResponse>>
VmMigrationClient::UpgradeAppliance(
    google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpgradeAppliance(request);
}

future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
VmMigrationClient::CreateMigratingVm(
    std::string const& parent,
    google::cloud::vmmigration::v1::MigratingVm const& migrating_vm,
    std::string const& migrating_vm_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CreateMigratingVmRequest request;
  request.set_parent(parent);
  *request.mutable_migrating_vm() = migrating_vm;
  request.set_migrating_vm_id(migrating_vm_id);
  return connection_->CreateMigratingVm(request);
}

future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
VmMigrationClient::CreateMigratingVm(
    google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMigratingVm(request);
}

StreamRange<google::cloud::vmmigration::v1::MigratingVm>
VmMigrationClient::ListMigratingVms(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::ListMigratingVmsRequest request;
  request.set_parent(parent);
  return connection_->ListMigratingVms(request);
}

StreamRange<google::cloud::vmmigration::v1::MigratingVm>
VmMigrationClient::ListMigratingVms(
    google::cloud::vmmigration::v1::ListMigratingVmsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMigratingVms(std::move(request));
}

StatusOr<google::cloud::vmmigration::v1::MigratingVm>
VmMigrationClient::GetMigratingVm(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::GetMigratingVmRequest request;
  request.set_name(name);
  return connection_->GetMigratingVm(request);
}

StatusOr<google::cloud::vmmigration::v1::MigratingVm>
VmMigrationClient::GetMigratingVm(
    google::cloud::vmmigration::v1::GetMigratingVmRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetMigratingVm(request);
}

future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
VmMigrationClient::UpdateMigratingVm(
    google::cloud::vmmigration::v1::MigratingVm const& migrating_vm,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::UpdateMigratingVmRequest request;
  *request.mutable_migrating_vm() = migrating_vm;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateMigratingVm(request);
}

future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
VmMigrationClient::UpdateMigratingVm(
    google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateMigratingVm(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteMigratingVm(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::DeleteMigratingVmRequest request;
  request.set_name(name);
  return connection_->DeleteMigratingVm(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteMigratingVm(
    google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteMigratingVm(request);
}

future<StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>
VmMigrationClient::StartMigration(std::string const& migrating_vm,
                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::StartMigrationRequest request;
  request.set_migrating_vm(migrating_vm);
  return connection_->StartMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>
VmMigrationClient::StartMigration(
    google::cloud::vmmigration::v1::StartMigrationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::ResumeMigrationResponse>>
VmMigrationClient::ResumeMigration(
    google::cloud::vmmigration::v1::ResumeMigrationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResumeMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::PauseMigrationResponse>>
VmMigrationClient::PauseMigration(
    google::cloud::vmmigration::v1::PauseMigrationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PauseMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>
VmMigrationClient::FinalizeMigration(std::string const& migrating_vm,
                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::FinalizeMigrationRequest request;
  request.set_migrating_vm(migrating_vm);
  return connection_->FinalizeMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>
VmMigrationClient::FinalizeMigration(
    google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FinalizeMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CloneJob>>
VmMigrationClient::CreateCloneJob(
    std::string const& parent,
    google::cloud::vmmigration::v1::CloneJob const& clone_job,
    std::string const& clone_job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CreateCloneJobRequest request;
  request.set_parent(parent);
  *request.mutable_clone_job() = clone_job;
  request.set_clone_job_id(clone_job_id);
  return connection_->CreateCloneJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CloneJob>>
VmMigrationClient::CreateCloneJob(
    google::cloud::vmmigration::v1::CreateCloneJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCloneJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>
VmMigrationClient::CancelCloneJob(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CancelCloneJobRequest request;
  request.set_name(name);
  return connection_->CancelCloneJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>
VmMigrationClient::CancelCloneJob(
    google::cloud::vmmigration::v1::CancelCloneJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelCloneJob(request);
}

StreamRange<google::cloud::vmmigration::v1::CloneJob>
VmMigrationClient::ListCloneJobs(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::ListCloneJobsRequest request;
  request.set_parent(parent);
  return connection_->ListCloneJobs(request);
}

StreamRange<google::cloud::vmmigration::v1::CloneJob>
VmMigrationClient::ListCloneJobs(
    google::cloud::vmmigration::v1::ListCloneJobsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCloneJobs(std::move(request));
}

StatusOr<google::cloud::vmmigration::v1::CloneJob>
VmMigrationClient::GetCloneJob(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::GetCloneJobRequest request;
  request.set_name(name);
  return connection_->GetCloneJob(request);
}

StatusOr<google::cloud::vmmigration::v1::CloneJob>
VmMigrationClient::GetCloneJob(
    google::cloud::vmmigration::v1::GetCloneJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCloneJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CutoverJob>>
VmMigrationClient::CreateCutoverJob(
    std::string const& parent,
    google::cloud::vmmigration::v1::CutoverJob const& cutover_job,
    std::string const& cutover_job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CreateCutoverJobRequest request;
  request.set_parent(parent);
  *request.mutable_cutover_job() = cutover_job;
  request.set_cutover_job_id(cutover_job_id);
  return connection_->CreateCutoverJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CutoverJob>>
VmMigrationClient::CreateCutoverJob(
    google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCutoverJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>
VmMigrationClient::CancelCutoverJob(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CancelCutoverJobRequest request;
  request.set_name(name);
  return connection_->CancelCutoverJob(request);
}

future<StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>
VmMigrationClient::CancelCutoverJob(
    google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelCutoverJob(request);
}

StreamRange<google::cloud::vmmigration::v1::CutoverJob>
VmMigrationClient::ListCutoverJobs(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::ListCutoverJobsRequest request;
  request.set_parent(parent);
  return connection_->ListCutoverJobs(request);
}

StreamRange<google::cloud::vmmigration::v1::CutoverJob>
VmMigrationClient::ListCutoverJobs(
    google::cloud::vmmigration::v1::ListCutoverJobsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCutoverJobs(std::move(request));
}

StatusOr<google::cloud::vmmigration::v1::CutoverJob>
VmMigrationClient::GetCutoverJob(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::GetCutoverJobRequest request;
  request.set_name(name);
  return connection_->GetCutoverJob(request);
}

StatusOr<google::cloud::vmmigration::v1::CutoverJob>
VmMigrationClient::GetCutoverJob(
    google::cloud::vmmigration::v1::GetCutoverJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCutoverJob(request);
}

StreamRange<google::cloud::vmmigration::v1::Group>
VmMigrationClient::ListGroups(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::ListGroupsRequest request;
  request.set_parent(parent);
  return connection_->ListGroups(request);
}

StreamRange<google::cloud::vmmigration::v1::Group>
VmMigrationClient::ListGroups(
    google::cloud::vmmigration::v1::ListGroupsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListGroups(std::move(request));
}

StatusOr<google::cloud::vmmigration::v1::Group> VmMigrationClient::GetGroup(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::GetGroupRequest request;
  request.set_name(name);
  return connection_->GetGroup(request);
}

StatusOr<google::cloud::vmmigration::v1::Group> VmMigrationClient::GetGroup(
    google::cloud::vmmigration::v1::GetGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Group>>
VmMigrationClient::CreateGroup(
    std::string const& parent,
    google::cloud::vmmigration::v1::Group const& group,
    std::string const& group_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CreateGroupRequest request;
  request.set_parent(parent);
  *request.mutable_group() = group;
  request.set_group_id(group_id);
  return connection_->CreateGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Group>>
VmMigrationClient::CreateGroup(
    google::cloud::vmmigration::v1::CreateGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Group>>
VmMigrationClient::UpdateGroup(
    google::cloud::vmmigration::v1::Group const& group,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::UpdateGroupRequest request;
  *request.mutable_group() = group;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::Group>>
VmMigrationClient::UpdateGroup(
    google::cloud::vmmigration::v1::UpdateGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteGroup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::DeleteGroupRequest request;
  request.set_name(name);
  return connection_->DeleteGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteGroup(
    google::cloud::vmmigration::v1::DeleteGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteGroup(request);
}

future<StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>
VmMigrationClient::AddGroupMigration(std::string const& group, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::AddGroupMigrationRequest request;
  request.set_group(group);
  return connection_->AddGroupMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>
VmMigrationClient::AddGroupMigration(
    google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddGroupMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>
VmMigrationClient::RemoveGroupMigration(std::string const& group,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::RemoveGroupMigrationRequest request;
  request.set_group(group);
  return connection_->RemoveGroupMigration(request);
}

future<StatusOr<google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>
VmMigrationClient::RemoveGroupMigration(
    google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveGroupMigration(request);
}

StreamRange<google::cloud::vmmigration::v1::TargetProject>
VmMigrationClient::ListTargetProjects(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::ListTargetProjectsRequest request;
  request.set_parent(parent);
  return connection_->ListTargetProjects(request);
}

StreamRange<google::cloud::vmmigration::v1::TargetProject>
VmMigrationClient::ListTargetProjects(
    google::cloud::vmmigration::v1::ListTargetProjectsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTargetProjects(std::move(request));
}

StatusOr<google::cloud::vmmigration::v1::TargetProject>
VmMigrationClient::GetTargetProject(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::GetTargetProjectRequest request;
  request.set_name(name);
  return connection_->GetTargetProject(request);
}

StatusOr<google::cloud::vmmigration::v1::TargetProject>
VmMigrationClient::GetTargetProject(
    google::cloud::vmmigration::v1::GetTargetProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTargetProject(request);
}

future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
VmMigrationClient::CreateTargetProject(
    std::string const& parent,
    google::cloud::vmmigration::v1::TargetProject const& target_project,
    std::string const& target_project_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::CreateTargetProjectRequest request;
  request.set_parent(parent);
  *request.mutable_target_project() = target_project;
  request.set_target_project_id(target_project_id);
  return connection_->CreateTargetProject(request);
}

future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
VmMigrationClient::CreateTargetProject(
    google::cloud::vmmigration::v1::CreateTargetProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTargetProject(request);
}

future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
VmMigrationClient::UpdateTargetProject(
    google::cloud::vmmigration::v1::TargetProject const& target_project,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::UpdateTargetProjectRequest request;
  *request.mutable_target_project() = target_project;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateTargetProject(request);
}

future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
VmMigrationClient::UpdateTargetProject(
    google::cloud::vmmigration::v1::UpdateTargetProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTargetProject(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteTargetProject(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::DeleteTargetProjectRequest request;
  request.set_name(name);
  return connection_->DeleteTargetProject(request);
}

future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
VmMigrationClient::DeleteTargetProject(
    google::cloud::vmmigration::v1::DeleteTargetProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetProject(request);
}

StreamRange<google::cloud::vmmigration::v1::ReplicationCycle>
VmMigrationClient::ListReplicationCycles(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::ListReplicationCyclesRequest request;
  request.set_parent(parent);
  return connection_->ListReplicationCycles(request);
}

StreamRange<google::cloud::vmmigration::v1::ReplicationCycle>
VmMigrationClient::ListReplicationCycles(
    google::cloud::vmmigration::v1::ListReplicationCyclesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListReplicationCycles(std::move(request));
}

StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>
VmMigrationClient::GetReplicationCycle(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vmmigration::v1::GetReplicationCycleRequest request;
  request.set_name(name);
  return connection_->GetReplicationCycle(request);
}

StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>
VmMigrationClient::GetReplicationCycle(
    google::cloud::vmmigration::v1::GetReplicationCycleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetReplicationCycle(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration
}  // namespace cloud
}  // namespace google
