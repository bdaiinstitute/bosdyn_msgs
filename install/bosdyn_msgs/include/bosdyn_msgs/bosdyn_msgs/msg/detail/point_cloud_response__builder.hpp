// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PointCloudResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/point_cloud_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloudResponse_point_cloud_is_set
{
public:
  explicit Init_PointCloudResponse_point_cloud_is_set(::bosdyn_msgs::msg::PointCloudResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PointCloudResponse point_cloud_is_set(::bosdyn_msgs::msg::PointCloudResponse::_point_cloud_is_set_type arg)
  {
    msg_.point_cloud_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudResponse msg_;
};

class Init_PointCloudResponse_point_cloud
{
public:
  explicit Init_PointCloudResponse_point_cloud(::bosdyn_msgs::msg::PointCloudResponse & msg)
  : msg_(msg)
  {}
  Init_PointCloudResponse_point_cloud_is_set point_cloud(::bosdyn_msgs::msg::PointCloudResponse::_point_cloud_type arg)
  {
    msg_.point_cloud = std::move(arg);
    return Init_PointCloudResponse_point_cloud_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudResponse msg_;
};

class Init_PointCloudResponse_status
{
public:
  Init_PointCloudResponse_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloudResponse_point_cloud status(::bosdyn_msgs::msg::PointCloudResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PointCloudResponse_point_cloud(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PointCloudResponse>()
{
  return bosdyn_msgs::msg::builder::Init_PointCloudResponse_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_RESPONSE__BUILDER_HPP_
