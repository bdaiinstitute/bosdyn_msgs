// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SE2VelocityCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/se2_velocity_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SE2VelocityCommandRequest_slew_rate_limit_is_set
{
public:
  explicit Init_SE2VelocityCommandRequest_slew_rate_limit_is_set(::bosdyn_msgs::msg::SE2VelocityCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SE2VelocityCommandRequest slew_rate_limit_is_set(::bosdyn_msgs::msg::SE2VelocityCommandRequest::_slew_rate_limit_is_set_type arg)
  {
    msg_.slew_rate_limit_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityCommandRequest msg_;
};

class Init_SE2VelocityCommandRequest_slew_rate_limit
{
public:
  explicit Init_SE2VelocityCommandRequest_slew_rate_limit(::bosdyn_msgs::msg::SE2VelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SE2VelocityCommandRequest_slew_rate_limit_is_set slew_rate_limit(::bosdyn_msgs::msg::SE2VelocityCommandRequest::_slew_rate_limit_type arg)
  {
    msg_.slew_rate_limit = std::move(arg);
    return Init_SE2VelocityCommandRequest_slew_rate_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityCommandRequest msg_;
};

class Init_SE2VelocityCommandRequest_velocity_is_set
{
public:
  explicit Init_SE2VelocityCommandRequest_velocity_is_set(::bosdyn_msgs::msg::SE2VelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SE2VelocityCommandRequest_slew_rate_limit velocity_is_set(::bosdyn_msgs::msg::SE2VelocityCommandRequest::_velocity_is_set_type arg)
  {
    msg_.velocity_is_set = std::move(arg);
    return Init_SE2VelocityCommandRequest_slew_rate_limit(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityCommandRequest msg_;
};

class Init_SE2VelocityCommandRequest_velocity
{
public:
  explicit Init_SE2VelocityCommandRequest_velocity(::bosdyn_msgs::msg::SE2VelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SE2VelocityCommandRequest_velocity_is_set velocity(::bosdyn_msgs::msg::SE2VelocityCommandRequest::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SE2VelocityCommandRequest_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityCommandRequest msg_;
};

class Init_SE2VelocityCommandRequest_se2_frame_name
{
public:
  explicit Init_SE2VelocityCommandRequest_se2_frame_name(::bosdyn_msgs::msg::SE2VelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SE2VelocityCommandRequest_velocity se2_frame_name(::bosdyn_msgs::msg::SE2VelocityCommandRequest::_se2_frame_name_type arg)
  {
    msg_.se2_frame_name = std::move(arg);
    return Init_SE2VelocityCommandRequest_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityCommandRequest msg_;
};

class Init_SE2VelocityCommandRequest_end_time_is_set
{
public:
  explicit Init_SE2VelocityCommandRequest_end_time_is_set(::bosdyn_msgs::msg::SE2VelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SE2VelocityCommandRequest_se2_frame_name end_time_is_set(::bosdyn_msgs::msg::SE2VelocityCommandRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_SE2VelocityCommandRequest_se2_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityCommandRequest msg_;
};

class Init_SE2VelocityCommandRequest_end_time
{
public:
  Init_SE2VelocityCommandRequest_end_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE2VelocityCommandRequest_end_time_is_set end_time(::bosdyn_msgs::msg::SE2VelocityCommandRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_SE2VelocityCommandRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2VelocityCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SE2VelocityCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SE2VelocityCommandRequest_end_time();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_VELOCITY_COMMAND_REQUEST__BUILDER_HPP_
