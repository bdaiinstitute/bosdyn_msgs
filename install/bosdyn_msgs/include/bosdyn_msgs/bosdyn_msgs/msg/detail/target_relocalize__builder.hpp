// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TargetRelocalize.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TARGET_RELOCALIZE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TARGET_RELOCALIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/target_relocalize__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetRelocalize_set_localization_request_is_set
{
public:
  explicit Init_TargetRelocalize_set_localization_request_is_set(::bosdyn_msgs::msg::TargetRelocalize & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TargetRelocalize set_localization_request_is_set(::bosdyn_msgs::msg::TargetRelocalize::_set_localization_request_is_set_type arg)
  {
    msg_.set_localization_request_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetRelocalize msg_;
};

class Init_TargetRelocalize_set_localization_request
{
public:
  Init_TargetRelocalize_set_localization_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetRelocalize_set_localization_request_is_set set_localization_request(::bosdyn_msgs::msg::TargetRelocalize::_set_localization_request_type arg)
  {
    msg_.set_localization_request = std::move(arg);
    return Init_TargetRelocalize_set_localization_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TargetRelocalize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TargetRelocalize>()
{
  return bosdyn_msgs::msg::builder::Init_TargetRelocalize_set_localization_request();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TARGET_RELOCALIZE__BUILDER_HPP_
