// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PointCloudEncodingParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/point_cloud_encoding_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloudEncodingParameters_bytes_per_point
{
public:
  explicit Init_PointCloudEncodingParameters_bytes_per_point(::bosdyn_msgs::msg::PointCloudEncodingParameters & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PointCloudEncodingParameters bytes_per_point(::bosdyn_msgs::msg::PointCloudEncodingParameters::_bytes_per_point_type arg)
  {
    msg_.bytes_per_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudEncodingParameters msg_;
};

class Init_PointCloudEncodingParameters_remapping_constant
{
public:
  explicit Init_PointCloudEncodingParameters_remapping_constant(::bosdyn_msgs::msg::PointCloudEncodingParameters & msg)
  : msg_(msg)
  {}
  Init_PointCloudEncodingParameters_bytes_per_point remapping_constant(::bosdyn_msgs::msg::PointCloudEncodingParameters::_remapping_constant_type arg)
  {
    msg_.remapping_constant = std::move(arg);
    return Init_PointCloudEncodingParameters_bytes_per_point(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudEncodingParameters msg_;
};

class Init_PointCloudEncodingParameters_max_z
{
public:
  explicit Init_PointCloudEncodingParameters_max_z(::bosdyn_msgs::msg::PointCloudEncodingParameters & msg)
  : msg_(msg)
  {}
  Init_PointCloudEncodingParameters_remapping_constant max_z(::bosdyn_msgs::msg::PointCloudEncodingParameters::_max_z_type arg)
  {
    msg_.max_z = std::move(arg);
    return Init_PointCloudEncodingParameters_remapping_constant(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudEncodingParameters msg_;
};

class Init_PointCloudEncodingParameters_max_y
{
public:
  explicit Init_PointCloudEncodingParameters_max_y(::bosdyn_msgs::msg::PointCloudEncodingParameters & msg)
  : msg_(msg)
  {}
  Init_PointCloudEncodingParameters_max_z max_y(::bosdyn_msgs::msg::PointCloudEncodingParameters::_max_y_type arg)
  {
    msg_.max_y = std::move(arg);
    return Init_PointCloudEncodingParameters_max_z(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudEncodingParameters msg_;
};

class Init_PointCloudEncodingParameters_max_x
{
public:
  explicit Init_PointCloudEncodingParameters_max_x(::bosdyn_msgs::msg::PointCloudEncodingParameters & msg)
  : msg_(msg)
  {}
  Init_PointCloudEncodingParameters_max_y max_x(::bosdyn_msgs::msg::PointCloudEncodingParameters::_max_x_type arg)
  {
    msg_.max_x = std::move(arg);
    return Init_PointCloudEncodingParameters_max_y(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudEncodingParameters msg_;
};

class Init_PointCloudEncodingParameters_scale_factor
{
public:
  Init_PointCloudEncodingParameters_scale_factor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloudEncodingParameters_max_x scale_factor(::bosdyn_msgs::msg::PointCloudEncodingParameters::_scale_factor_type arg)
  {
    msg_.scale_factor = std::move(arg);
    return Init_PointCloudEncodingParameters_max_x(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudEncodingParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PointCloudEncodingParameters>()
{
  return bosdyn_msgs::msg::builder::Init_PointCloudEncodingParameters_scale_factor();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_ENCODING_PARAMETERS__BUILDER_HPP_
