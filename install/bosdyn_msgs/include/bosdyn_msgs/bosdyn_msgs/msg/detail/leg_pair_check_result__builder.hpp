// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LegPairCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEG_PAIR_CHECK_RESULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEG_PAIR_CHECK_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/leg_pair_check_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LegPairCheckResult_leg_pair_distance_change
{
public:
  explicit Init_LegPairCheckResult_leg_pair_distance_change(::bosdyn_msgs::msg::LegPairCheckResult & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LegPairCheckResult leg_pair_distance_change(::bosdyn_msgs::msg::LegPairCheckResult::_leg_pair_distance_change_type arg)
  {
    msg_.leg_pair_distance_change = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LegPairCheckResult msg_;
};

class Init_LegPairCheckResult_status
{
public:
  Init_LegPairCheckResult_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegPairCheckResult_leg_pair_distance_change status(::bosdyn_msgs::msg::LegPairCheckResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LegPairCheckResult_leg_pair_distance_change(msg_);
  }

private:
  ::bosdyn_msgs::msg::LegPairCheckResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LegPairCheckResult>()
{
  return bosdyn_msgs::msg::builder::Init_LegPairCheckResult_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEG_PAIR_CHECK_RESULT__BUILDER_HPP_
