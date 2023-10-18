// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EventSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENT_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENT_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/event_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EventSpec_log_preserve_hint
{
public:
  explicit Init_EventSpec_log_preserve_hint(::bosdyn_msgs::msg::EventSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EventSpec log_preserve_hint(::bosdyn_msgs::msg::EventSpec::_log_preserve_hint_type arg)
  {
    msg_.log_preserve_hint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventSpec msg_;
};

class Init_EventSpec_level_is_set
{
public:
  explicit Init_EventSpec_level_is_set(::bosdyn_msgs::msg::EventSpec & msg)
  : msg_(msg)
  {}
  Init_EventSpec_log_preserve_hint level_is_set(::bosdyn_msgs::msg::EventSpec::_level_is_set_type arg)
  {
    msg_.level_is_set = std::move(arg);
    return Init_EventSpec_log_preserve_hint(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventSpec msg_;
};

class Init_EventSpec_level
{
public:
  explicit Init_EventSpec_level(::bosdyn_msgs::msg::EventSpec & msg)
  : msg_(msg)
  {}
  Init_EventSpec_level_is_set level(::bosdyn_msgs::msg::EventSpec::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_EventSpec_level_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventSpec msg_;
};

class Init_EventSpec_type
{
public:
  explicit Init_EventSpec_type(::bosdyn_msgs::msg::EventSpec & msg)
  : msg_(msg)
  {}
  Init_EventSpec_level type(::bosdyn_msgs::msg::EventSpec::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EventSpec_level(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventSpec msg_;
};

class Init_EventSpec_source
{
public:
  Init_EventSpec_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventSpec_type source(::bosdyn_msgs::msg::EventSpec::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_EventSpec_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::EventSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EventSpec>()
{
  return bosdyn_msgs::msg::builder::Init_EventSpec_source();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENT_SPEC__BUILDER_HPP_
