// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SignalTick.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_TICK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_TICK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/signal_tick__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SignalTick_data
{
public:
  explicit Init_SignalTick_data(::bosdyn_msgs::msg::SignalTick & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SignalTick data(::bosdyn_msgs::msg::SignalTick::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalTick msg_;
};

class Init_SignalTick_encoding
{
public:
  explicit Init_SignalTick_encoding(::bosdyn_msgs::msg::SignalTick & msg)
  : msg_(msg)
  {}
  Init_SignalTick_data encoding(::bosdyn_msgs::msg::SignalTick::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_SignalTick_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalTick msg_;
};

class Init_SignalTick_schema_id
{
public:
  explicit Init_SignalTick_schema_id(::bosdyn_msgs::msg::SignalTick & msg)
  : msg_(msg)
  {}
  Init_SignalTick_encoding schema_id(::bosdyn_msgs::msg::SignalTick::_schema_id_type arg)
  {
    msg_.schema_id = std::move(arg);
    return Init_SignalTick_encoding(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalTick msg_;
};

class Init_SignalTick_source
{
public:
  explicit Init_SignalTick_source(::bosdyn_msgs::msg::SignalTick & msg)
  : msg_(msg)
  {}
  Init_SignalTick_schema_id source(::bosdyn_msgs::msg::SignalTick::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_SignalTick_schema_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalTick msg_;
};

class Init_SignalTick_timestamp_is_set
{
public:
  explicit Init_SignalTick_timestamp_is_set(::bosdyn_msgs::msg::SignalTick & msg)
  : msg_(msg)
  {}
  Init_SignalTick_source timestamp_is_set(::bosdyn_msgs::msg::SignalTick::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_SignalTick_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalTick msg_;
};

class Init_SignalTick_timestamp
{
public:
  explicit Init_SignalTick_timestamp(::bosdyn_msgs::msg::SignalTick & msg)
  : msg_(msg)
  {}
  Init_SignalTick_timestamp_is_set timestamp(::bosdyn_msgs::msg::SignalTick::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SignalTick_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalTick msg_;
};

class Init_SignalTick_sequence_id
{
public:
  Init_SignalTick_sequence_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalTick_timestamp sequence_id(::bosdyn_msgs::msg::SignalTick::_sequence_id_type arg)
  {
    msg_.sequence_id = std::move(arg);
    return Init_SignalTick_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::SignalTick msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SignalTick>()
{
  return bosdyn_msgs::msg::builder::Init_SignalTick_sequence_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_TICK__BUILDER_HPP_
