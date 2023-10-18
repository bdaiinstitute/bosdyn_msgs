// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MobilityCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mobility_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityCommandRequest_params_is_set
{
public:
  explicit Init_MobilityCommandRequest_params_is_set(::bosdyn_msgs::msg::MobilityCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MobilityCommandRequest params_is_set(::bosdyn_msgs::msg::MobilityCommandRequest::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequest msg_;
};

class Init_MobilityCommandRequest_params
{
public:
  explicit Init_MobilityCommandRequest_params(::bosdyn_msgs::msg::MobilityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandRequest_params_is_set params(::bosdyn_msgs::msg::MobilityCommandRequest::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_MobilityCommandRequest_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequest msg_;
};

class Init_MobilityCommandRequest_command
{
public:
  Init_MobilityCommandRequest_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityCommandRequest_params command(::bosdyn_msgs::msg::MobilityCommandRequest::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_MobilityCommandRequest_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MobilityCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_MobilityCommandRequest_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST__BUILDER_HPP_
