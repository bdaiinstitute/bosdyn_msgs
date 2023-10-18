// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RemotePointCloudStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REMOTE_POINT_CLOUD_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REMOTE_POINT_CLOUD_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/remote_point_cloud_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RemotePointCloudStatus_has_data
{
public:
  explicit Init_RemotePointCloudStatus_has_data(::bosdyn_msgs::msg::RemotePointCloudStatus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RemotePointCloudStatus has_data(::bosdyn_msgs::msg::RemotePointCloudStatus::_has_data_type arg)
  {
    msg_.has_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemotePointCloudStatus msg_;
};

class Init_RemotePointCloudStatus_exists_in_directory
{
public:
  explicit Init_RemotePointCloudStatus_exists_in_directory(::bosdyn_msgs::msg::RemotePointCloudStatus & msg)
  : msg_(msg)
  {}
  Init_RemotePointCloudStatus_has_data exists_in_directory(::bosdyn_msgs::msg::RemotePointCloudStatus::_exists_in_directory_type arg)
  {
    msg_.exists_in_directory = std::move(arg);
    return Init_RemotePointCloudStatus_has_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemotePointCloudStatus msg_;
};

class Init_RemotePointCloudStatus_service_name
{
public:
  Init_RemotePointCloudStatus_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemotePointCloudStatus_exists_in_directory service_name(::bosdyn_msgs::msg::RemotePointCloudStatus::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_RemotePointCloudStatus_exists_in_directory(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemotePointCloudStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RemotePointCloudStatus>()
{
  return bosdyn_msgs::msg::builder::Init_RemotePointCloudStatus_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REMOTE_POINT_CLOUD_STATUS__BUILDER_HPP_
