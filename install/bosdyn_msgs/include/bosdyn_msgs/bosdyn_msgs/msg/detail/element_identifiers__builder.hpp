// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ElementIdentifiers.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/element_identifiers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ElementIdentifiers_action_id_is_set
{
public:
  explicit Init_ElementIdentifiers_action_id_is_set(::bosdyn_msgs::msg::ElementIdentifiers & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ElementIdentifiers action_id_is_set(::bosdyn_msgs::msg::ElementIdentifiers::_action_id_is_set_type arg)
  {
    msg_.action_id_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ElementIdentifiers msg_;
};

class Init_ElementIdentifiers_action_id
{
public:
  explicit Init_ElementIdentifiers_action_id(::bosdyn_msgs::msg::ElementIdentifiers & msg)
  : msg_(msg)
  {}
  Init_ElementIdentifiers_action_id_is_set action_id(::bosdyn_msgs::msg::ElementIdentifiers::_action_id_type arg)
  {
    msg_.action_id = std::move(arg);
    return Init_ElementIdentifiers_action_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ElementIdentifiers msg_;
};

class Init_ElementIdentifiers_root_id_is_set
{
public:
  explicit Init_ElementIdentifiers_root_id_is_set(::bosdyn_msgs::msg::ElementIdentifiers & msg)
  : msg_(msg)
  {}
  Init_ElementIdentifiers_action_id root_id_is_set(::bosdyn_msgs::msg::ElementIdentifiers::_root_id_is_set_type arg)
  {
    msg_.root_id_is_set = std::move(arg);
    return Init_ElementIdentifiers_action_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::ElementIdentifiers msg_;
};

class Init_ElementIdentifiers_root_id
{
public:
  Init_ElementIdentifiers_root_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ElementIdentifiers_root_id_is_set root_id(::bosdyn_msgs::msg::ElementIdentifiers::_root_id_type arg)
  {
    msg_.root_id = std::move(arg);
    return Init_ElementIdentifiers_root_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ElementIdentifiers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ElementIdentifiers>()
{
  return bosdyn_msgs::msg::builder::Init_ElementIdentifiers_root_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ELEMENT_IDENTIFIERS__BUILDER_HPP_
