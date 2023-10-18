// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/HipRangeOfMotionResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__HIP_RANGE_OF_MOTION_RESULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__HIP_RANGE_OF_MOTION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/hip_range_of_motion_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_HipRangeOfMotionResult_hy
{
public:
  explicit Init_HipRangeOfMotionResult_hy(::bosdyn_msgs::msg::HipRangeOfMotionResult & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::HipRangeOfMotionResult hy(::bosdyn_msgs::msg::HipRangeOfMotionResult::_hy_type arg)
  {
    msg_.hy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::HipRangeOfMotionResult msg_;
};

class Init_HipRangeOfMotionResult_hx
{
public:
  explicit Init_HipRangeOfMotionResult_hx(::bosdyn_msgs::msg::HipRangeOfMotionResult & msg)
  : msg_(msg)
  {}
  Init_HipRangeOfMotionResult_hy hx(::bosdyn_msgs::msg::HipRangeOfMotionResult::_hx_type arg)
  {
    msg_.hx = std::move(arg);
    return Init_HipRangeOfMotionResult_hy(msg_);
  }

private:
  ::bosdyn_msgs::msg::HipRangeOfMotionResult msg_;
};

class Init_HipRangeOfMotionResult_error
{
public:
  Init_HipRangeOfMotionResult_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HipRangeOfMotionResult_hx error(::bosdyn_msgs::msg::HipRangeOfMotionResult::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_HipRangeOfMotionResult_hx(msg_);
  }

private:
  ::bosdyn_msgs::msg::HipRangeOfMotionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::HipRangeOfMotionResult>()
{
  return bosdyn_msgs::msg::builder::Init_HipRangeOfMotionResult_error();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__HIP_RANGE_OF_MOTION_RESULT__BUILDER_HPP_
