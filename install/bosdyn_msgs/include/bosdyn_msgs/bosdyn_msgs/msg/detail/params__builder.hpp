// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Params.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Params_max_duration_is_set
{
public:
  explicit Init_Params_max_duration_is_set(::bosdyn_msgs::msg::Params & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Params max_duration_is_set(::bosdyn_msgs::msg::Params::_max_duration_is_set_type arg)
  {
    msg_.max_duration_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Params msg_;
};

class Init_Params_max_duration
{
public:
  explicit Init_Params_max_duration(::bosdyn_msgs::msg::Params & msg)
  : msg_(msg)
  {}
  Init_Params_max_duration_is_set max_duration(::bosdyn_msgs::msg::Params::_max_duration_type arg)
  {
    msg_.max_duration = std::move(arg);
    return Init_Params_max_duration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Params msg_;
};

class Init_Params_max_displacement
{
public:
  Init_Params_max_displacement()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Params_max_duration max_displacement(::bosdyn_msgs::msg::Params::_max_displacement_type arg)
  {
    msg_.max_displacement = std::move(arg);
    return Init_Params_max_duration(msg_);
  }

private:
  ::bosdyn_msgs::msg::Params msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Params>()
{
  return bosdyn_msgs::msg::builder::Init_Params_max_displacement();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARAMS__BUILDER_HPP_
