// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordSignalTicksResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_RESPONSE_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_RESPONSE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_signal_ticks_response_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordSignalTicksResponseError_index
{
public:
  explicit Init_RecordSignalTicksResponseError_index(::bosdyn_msgs::msg::RecordSignalTicksResponseError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordSignalTicksResponseError index(::bosdyn_msgs::msg::RecordSignalTicksResponseError::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordSignalTicksResponseError msg_;
};

class Init_RecordSignalTicksResponseError_message
{
public:
  explicit Init_RecordSignalTicksResponseError_message(::bosdyn_msgs::msg::RecordSignalTicksResponseError & msg)
  : msg_(msg)
  {}
  Init_RecordSignalTicksResponseError_index message(::bosdyn_msgs::msg::RecordSignalTicksResponseError::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_RecordSignalTicksResponseError_index(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordSignalTicksResponseError msg_;
};

class Init_RecordSignalTicksResponseError_type
{
public:
  Init_RecordSignalTicksResponseError_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordSignalTicksResponseError_message type(::bosdyn_msgs::msg::RecordSignalTicksResponseError::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RecordSignalTicksResponseError_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordSignalTicksResponseError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordSignalTicksResponseError>()
{
  return bosdyn_msgs::msg::builder::Init_RecordSignalTicksResponseError_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_RESPONSE_ERROR__BUILDER_HPP_
