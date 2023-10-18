// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StaircaseProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_PROPERTIES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/staircase_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StaircaseProperties_staircase_is_set
{
public:
  explicit Init_StaircaseProperties_staircase_is_set(::bosdyn_msgs::msg::StaircaseProperties & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StaircaseProperties staircase_is_set(::bosdyn_msgs::msg::StaircaseProperties::_staircase_is_set_type arg)
  {
    msg_.staircase_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseProperties msg_;
};

class Init_StaircaseProperties_staircase
{
public:
  Init_StaircaseProperties_staircase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaircaseProperties_staircase_is_set staircase(::bosdyn_msgs::msg::StaircaseProperties::_staircase_type arg)
  {
    msg_.staircase = std::move(arg);
    return Init_StaircaseProperties_staircase_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StaircaseProperties>()
{
  return bosdyn_msgs::msg::builder::Init_StaircaseProperties_staircase();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_PROPERTIES__BUILDER_HPP_
