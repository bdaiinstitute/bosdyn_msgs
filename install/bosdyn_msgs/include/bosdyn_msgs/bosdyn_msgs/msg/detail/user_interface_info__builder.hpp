// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UserInterfaceInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__USER_INTERFACE_INFO__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__USER_INTERFACE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/user_interface_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UserInterfaceInfo_display_order
{
public:
  explicit Init_UserInterfaceInfo_display_order(::bosdyn_msgs::msg::UserInterfaceInfo & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UserInterfaceInfo display_order(::bosdyn_msgs::msg::UserInterfaceInfo::_display_order_type arg)
  {
    msg_.display_order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UserInterfaceInfo msg_;
};

class Init_UserInterfaceInfo_description
{
public:
  explicit Init_UserInterfaceInfo_description(::bosdyn_msgs::msg::UserInterfaceInfo & msg)
  : msg_(msg)
  {}
  Init_UserInterfaceInfo_display_order description(::bosdyn_msgs::msg::UserInterfaceInfo::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_UserInterfaceInfo_display_order(msg_);
  }

private:
  ::bosdyn_msgs::msg::UserInterfaceInfo msg_;
};

class Init_UserInterfaceInfo_display_name
{
public:
  Init_UserInterfaceInfo_display_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInterfaceInfo_description display_name(::bosdyn_msgs::msg::UserInterfaceInfo::_display_name_type arg)
  {
    msg_.display_name = std::move(arg);
    return Init_UserInterfaceInfo_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::UserInterfaceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UserInterfaceInfo>()
{
  return bosdyn_msgs::msg::builder::Init_UserInterfaceInfo_display_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__USER_INTERFACE_INFO__BUILDER_HPP_
