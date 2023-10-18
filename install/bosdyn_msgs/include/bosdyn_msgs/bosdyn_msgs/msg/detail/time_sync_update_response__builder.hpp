// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncUpdateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/time_sync_update_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeSyncUpdateResponse_clock_identifier
{
public:
  explicit Init_TimeSyncUpdateResponse_clock_identifier(::bosdyn_msgs::msg::TimeSyncUpdateResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TimeSyncUpdateResponse clock_identifier(::bosdyn_msgs::msg::TimeSyncUpdateResponse::_clock_identifier_type arg)
  {
    msg_.clock_identifier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateResponse msg_;
};

class Init_TimeSyncUpdateResponse_state_is_set
{
public:
  explicit Init_TimeSyncUpdateResponse_state_is_set(::bosdyn_msgs::msg::TimeSyncUpdateResponse & msg)
  : msg_(msg)
  {}
  Init_TimeSyncUpdateResponse_clock_identifier state_is_set(::bosdyn_msgs::msg::TimeSyncUpdateResponse::_state_is_set_type arg)
  {
    msg_.state_is_set = std::move(arg);
    return Init_TimeSyncUpdateResponse_clock_identifier(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateResponse msg_;
};

class Init_TimeSyncUpdateResponse_state
{
public:
  explicit Init_TimeSyncUpdateResponse_state(::bosdyn_msgs::msg::TimeSyncUpdateResponse & msg)
  : msg_(msg)
  {}
  Init_TimeSyncUpdateResponse_state_is_set state(::bosdyn_msgs::msg::TimeSyncUpdateResponse::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_TimeSyncUpdateResponse_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateResponse msg_;
};

class Init_TimeSyncUpdateResponse_previous_estimate_is_set
{
public:
  explicit Init_TimeSyncUpdateResponse_previous_estimate_is_set(::bosdyn_msgs::msg::TimeSyncUpdateResponse & msg)
  : msg_(msg)
  {}
  Init_TimeSyncUpdateResponse_state previous_estimate_is_set(::bosdyn_msgs::msg::TimeSyncUpdateResponse::_previous_estimate_is_set_type arg)
  {
    msg_.previous_estimate_is_set = std::move(arg);
    return Init_TimeSyncUpdateResponse_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateResponse msg_;
};

class Init_TimeSyncUpdateResponse_previous_estimate
{
public:
  explicit Init_TimeSyncUpdateResponse_previous_estimate(::bosdyn_msgs::msg::TimeSyncUpdateResponse & msg)
  : msg_(msg)
  {}
  Init_TimeSyncUpdateResponse_previous_estimate_is_set previous_estimate(::bosdyn_msgs::msg::TimeSyncUpdateResponse::_previous_estimate_type arg)
  {
    msg_.previous_estimate = std::move(arg);
    return Init_TimeSyncUpdateResponse_previous_estimate_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateResponse msg_;
};

class Init_TimeSyncUpdateResponse_header_is_set
{
public:
  explicit Init_TimeSyncUpdateResponse_header_is_set(::bosdyn_msgs::msg::TimeSyncUpdateResponse & msg)
  : msg_(msg)
  {}
  Init_TimeSyncUpdateResponse_previous_estimate header_is_set(::bosdyn_msgs::msg::TimeSyncUpdateResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TimeSyncUpdateResponse_previous_estimate(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateResponse msg_;
};

class Init_TimeSyncUpdateResponse_header
{
public:
  Init_TimeSyncUpdateResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeSyncUpdateResponse_header_is_set header(::bosdyn_msgs::msg::TimeSyncUpdateResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TimeSyncUpdateResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncUpdateResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TimeSyncUpdateResponse>()
{
  return bosdyn_msgs::msg::builder::Init_TimeSyncUpdateResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_UPDATE_RESPONSE__BUILDER_HPP_
