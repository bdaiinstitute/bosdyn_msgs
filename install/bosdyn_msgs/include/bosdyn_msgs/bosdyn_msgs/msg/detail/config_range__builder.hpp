// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ConfigRange.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONFIG_RANGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONFIG_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/config_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ConfigRange_type
{
public:
  explicit Init_ConfigRange_type(::bosdyn_msgs::msg::ConfigRange & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ConfigRange type(::bosdyn_msgs::msg::ConfigRange::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigRange msg_;
};

class Init_ConfigRange_id_end
{
public:
  explicit Init_ConfigRange_id_end(::bosdyn_msgs::msg::ConfigRange & msg)
  : msg_(msg)
  {}
  Init_ConfigRange_type id_end(::bosdyn_msgs::msg::ConfigRange::_id_end_type arg)
  {
    msg_.id_end = std::move(arg);
    return Init_ConfigRange_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigRange msg_;
};

class Init_ConfigRange_id_start
{
public:
  Init_ConfigRange_id_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigRange_id_end id_start(::bosdyn_msgs::msg::ConfigRange::_id_start_type arg)
  {
    msg_.id_start = std::move(arg);
    return Init_ConfigRange_id_end(msg_);
  }

private:
  ::bosdyn_msgs::msg::ConfigRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ConfigRange>()
{
  return bosdyn_msgs::msg::builder::Init_ConfigRange_id_start();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONFIG_RANGE__BUILDER_HPP_
