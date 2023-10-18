// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SE3Covariance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE3_COVARIANCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE3_COVARIANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/se3_covariance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SE3Covariance_matrix_is_set
{
public:
  explicit Init_SE3Covariance_matrix_is_set(::bosdyn_msgs::msg::SE3Covariance & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SE3Covariance matrix_is_set(::bosdyn_msgs::msg::SE3Covariance::_matrix_is_set_type arg)
  {
    msg_.matrix_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3Covariance msg_;
};

class Init_SE3Covariance_matrix
{
public:
  Init_SE3Covariance_matrix()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE3Covariance_matrix_is_set matrix(::bosdyn_msgs::msg::SE3Covariance::_matrix_type arg)
  {
    msg_.matrix = std::move(arg);
    return Init_SE3Covariance_matrix_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3Covariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SE3Covariance>()
{
  return bosdyn_msgs::msg::builder::Init_SE3Covariance_matrix();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE3_COVARIANCE__BUILDER_HPP_
