// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PointCloudRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/point_cloud_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloudRequest_point_cloud_source_name
{
public:
  Init_PointCloudRequest_point_cloud_source_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::PointCloudRequest point_cloud_source_name(::bosdyn_msgs::msg::PointCloudRequest::_point_cloud_source_name_type arg)
  {
    msg_.point_cloud_source_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PointCloudRequest>()
{
  return bosdyn_msgs::msg::builder::Init_PointCloudRequest_point_cloud_source_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_REQUEST__BUILDER_HPP_
