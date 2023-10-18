// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordSignalTicksRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_signal_ticks_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordSignalTicksRequest_tick_data
{
public:
  explicit Init_RecordSignalTicksRequest_tick_data(::bosdyn_msgs::msg::RecordSignalTicksRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordSignalTicksRequest tick_data(::bosdyn_msgs::msg::RecordSignalTicksRequest::_tick_data_type arg)
  {
    msg_.tick_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordSignalTicksRequest msg_;
};

class Init_RecordSignalTicksRequest_header_is_set
{
public:
  explicit Init_RecordSignalTicksRequest_header_is_set(::bosdyn_msgs::msg::RecordSignalTicksRequest & msg)
  : msg_(msg)
  {}
  Init_RecordSignalTicksRequest_tick_data header_is_set(::bosdyn_msgs::msg::RecordSignalTicksRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RecordSignalTicksRequest_tick_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordSignalTicksRequest msg_;
};

class Init_RecordSignalTicksRequest_header
{
public:
  Init_RecordSignalTicksRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordSignalTicksRequest_header_is_set header(::bosdyn_msgs::msg::RecordSignalTicksRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RecordSignalTicksRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordSignalTicksRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordSignalTicksRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RecordSignalTicksRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_SIGNAL_TICKS_REQUEST__BUILDER_HPP_
