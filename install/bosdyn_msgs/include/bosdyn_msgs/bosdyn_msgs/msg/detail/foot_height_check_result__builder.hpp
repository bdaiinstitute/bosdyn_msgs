// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FootHeightCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOOT_HEIGHT_CHECK_RESULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOOT_HEIGHT_CHECK_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/foot_height_check_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FootHeightCheckResult_foot_height_error_from_mean
{
public:
  explicit Init_FootHeightCheckResult_foot_height_error_from_mean(::bosdyn_msgs::msg::FootHeightCheckResult & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FootHeightCheckResult foot_height_error_from_mean(::bosdyn_msgs::msg::FootHeightCheckResult::_foot_height_error_from_mean_type arg)
  {
    msg_.foot_height_error_from_mean = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootHeightCheckResult msg_;
};

class Init_FootHeightCheckResult_status
{
public:
  Init_FootHeightCheckResult_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootHeightCheckResult_foot_height_error_from_mean status(::bosdyn_msgs::msg::FootHeightCheckResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FootHeightCheckResult_foot_height_error_from_mean(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootHeightCheckResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FootHeightCheckResult>()
{
  return bosdyn_msgs::msg::builder::Init_FootHeightCheckResult_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOOT_HEIGHT_CHECK_RESULT__BUILDER_HPP_
