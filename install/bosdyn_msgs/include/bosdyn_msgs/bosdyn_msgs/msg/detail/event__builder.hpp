// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Event_log_preserve_hint
{
public:
  explicit Init_Event_log_preserve_hint(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Event log_preserve_hint(::bosdyn_msgs::msg::Event::_log_preserve_hint_type arg)
  {
    msg_.log_preserve_hint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_parameters
{
public:
  explicit Init_Event_parameters(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_log_preserve_hint parameters(::bosdyn_msgs::msg::Event::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_Event_log_preserve_hint(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_level
{
public:
  explicit Init_Event_level(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_parameters level(::bosdyn_msgs::msg::Event::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_Event_parameters(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_end_time_is_set
{
public:
  explicit Init_Event_end_time_is_set(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_level end_time_is_set(::bosdyn_msgs::msg::Event::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_Event_level(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_end_time
{
public:
  explicit Init_Event_end_time(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_end_time_is_set end_time(::bosdyn_msgs::msg::Event::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_Event_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_start_time_is_set
{
public:
  explicit Init_Event_start_time_is_set(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_end_time start_time_is_set(::bosdyn_msgs::msg::Event::_start_time_is_set_type arg)
  {
    msg_.start_time_is_set = std::move(arg);
    return Init_Event_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_start_time
{
public:
  explicit Init_Event_start_time(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_start_time_is_set start_time(::bosdyn_msgs::msg::Event::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_Event_start_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_id
{
public:
  explicit Init_Event_id(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_start_time id(::bosdyn_msgs::msg::Event::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Event_start_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_source
{
public:
  explicit Init_Event_source(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_id source(::bosdyn_msgs::msg::Event::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_Event_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_description
{
public:
  explicit Init_Event_description(::bosdyn_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_source description(::bosdyn_msgs::msg::Event::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_Event_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

class Init_Event_type
{
public:
  Init_Event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Event_description type(::bosdyn_msgs::msg::Event::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Event_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::Event msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Event>()
{
  return bosdyn_msgs::msg::builder::Init_Event_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
