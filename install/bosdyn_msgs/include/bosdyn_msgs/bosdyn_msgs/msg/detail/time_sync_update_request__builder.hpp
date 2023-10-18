// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncUpdateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/time_sync_update_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeSyncUpdateRequest_clock_identifier
{
public:
  explicit Init_TimeSyncUpdateRequest_clock_identifier(::bosdyn_msgs::msg::TimeSyncUpdateRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TimeSyncUpdateRequest clock_identifier(::bosdyn_msgs::msg::TimeSyncUpdateRequest::_clock_identifier_type arg)
  {
    msg_.clock_identifier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateRequest msg_;
};

class Init_TimeSyncUpdateRequest_previous_round_trip_is_set
{
public:
  explicit Init_TimeSyncUpdateRequest_previous_round_trip_is_set(::bosdyn_msgs::msg::TimeSyncUpdateRequest & msg)
  : msg_(msg)
  {}
  Init_TimeSyncUpdateRequest_clock_identifier previous_round_trip_is_set(::bosdyn_msgs::msg::TimeSyncUpdateRequest::_previous_round_trip_is_set_type arg)
  {
    msg_.previous_round_trip_is_set = std::move(arg);
    return Init_TimeSyncUpdateRequest_clock_identifier(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateRequest msg_;
};

class Init_TimeSyncUpdateRequest_previous_round_trip
{
public:
  explicit Init_TimeSyncUpdateRequest_previous_round_trip(::bosdyn_msgs::msg::TimeSyncUpdateRequest & msg)
  : msg_(msg)
  {}
  Init_TimeSyncUpdateRequest_previous_round_trip_is_set previous_round_trip(::bosdyn_msgs::msg::TimeSyncUpdateRequest::_previous_round_trip_type arg)
  {
    msg_.previous_round_trip = std::move(arg);
    return Init_TimeSyncUpdateRequest_previous_round_trip_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateRequest msg_;
};

class Init_TimeSyncUpdateRequest_header_is_set
{
public:
  explicit Init_TimeSyncUpdateRequest_header_is_set(::bosdyn_msgs::msg::TimeSyncUpdateRequest & msg)
  : msg_(msg)
  {}
  Init_TimeSyncUpdateRequest_previous_round_trip header_is_set(::bosdyn_msgs::msg::TimeSyncUpdateRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TimeSyncUpdateRequest_previous_round_trip(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateRequest msg_;
};

class Init_TimeSyncUpdateRequest_header
{
public:
  Init_TimeSyncUpdateRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeSyncUpdateRequest_header_is_set header(::bosdyn_msgs::msg::TimeSyncUpdateRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TimeSyncUpdateRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TimeSyncUpdateRequest>()
{
  return bosdyn_msgs::msg::builder::Init_TimeSyncUpdateRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_REQUEST__BUILDER_HPP_
