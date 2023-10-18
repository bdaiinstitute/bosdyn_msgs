// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseUpdateLocalization.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_UPDATE_LOCALIZATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_UPDATE_LOCALIZATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/update_callback_response_update_localization__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdateCallbackResponseUpdateLocalization_change
{
public:
  Init_UpdateCallbackResponseUpdateLocalization_change()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization change(::bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization::_change_type arg)
  {
    msg_.change = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization>()
{
  return bosdyn_msgs::msg::builder::Init_UpdateCallbackResponseUpdateLocalization_change();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_UPDATE_LOCALIZATION__BUILDER_HPP_
