// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetPointCloudResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_POINT_CLOUD_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_POINT_CLOUD_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_point_cloud_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetPointCloudResponse_point_cloud_responses
{
public:
  explicit Init_GetPointCloudResponse_point_cloud_responses(::bosdyn_msgs::msg::GetPointCloudResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetPointCloudResponse point_cloud_responses(::bosdyn_msgs::msg::GetPointCloudResponse::_point_cloud_responses_type arg)
  {
    msg_.point_cloud_responses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPointCloudResponse msg_;
};

class Init_GetPointCloudResponse_header_is_set
{
public:
  explicit Init_GetPointCloudResponse_header_is_set(::bosdyn_msgs::msg::GetPointCloudResponse & msg)
  : msg_(msg)
  {}
  Init_GetPointCloudResponse_point_cloud_responses header_is_set(::bosdyn_msgs::msg::GetPointCloudResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetPointCloudResponse_point_cloud_responses(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPointCloudResponse msg_;
};

class Init_GetPointCloudResponse_header
{
public:
  Init_GetPointCloudResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPointCloudResponse_header_is_set header(::bosdyn_msgs::msg::GetPointCloudResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPointCloudResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPointCloudResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetPointCloudResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetPointCloudResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_POINT_CLOUD_RESPONSE__BUILDER_HPP_
