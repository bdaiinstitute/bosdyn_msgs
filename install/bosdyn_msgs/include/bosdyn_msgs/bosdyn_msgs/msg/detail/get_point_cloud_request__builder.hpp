// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetPointCloudRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_POINT_CLOUD_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_POINT_CLOUD_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_point_cloud_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetPointCloudRequest_point_cloud_requests
{
public:
  explicit Init_GetPointCloudRequest_point_cloud_requests(::bosdyn_msgs::msg::GetPointCloudRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetPointCloudRequest point_cloud_requests(::bosdyn_msgs::msg::GetPointCloudRequest::_point_cloud_requests_type arg)
  {
    msg_.point_cloud_requests = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPointCloudRequest msg_;
};

class Init_GetPointCloudRequest_header_is_set
{
public:
  explicit Init_GetPointCloudRequest_header_is_set(::bosdyn_msgs::msg::GetPointCloudRequest & msg)
  : msg_(msg)
  {}
  Init_GetPointCloudRequest_point_cloud_requests header_is_set(::bosdyn_msgs::msg::GetPointCloudRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetPointCloudRequest_point_cloud_requests(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPointCloudRequest msg_;
};

class Init_GetPointCloudRequest_header
{
public:
  Init_GetPointCloudRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPointCloudRequest_header_is_set header(::bosdyn_msgs::msg::GetPointCloudRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPointCloudRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPointCloudRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetPointCloudRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetPointCloudRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_POINT_CLOUD_REQUEST__BUILDER_HPP_
