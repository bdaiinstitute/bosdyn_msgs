// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetEstopConfigRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_estop_config_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetEstopConfigRequest_target_config_id
{
public:
  explicit Init_SetEstopConfigRequest_target_config_id(::bosdyn_msgs::msg::SetEstopConfigRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetEstopConfigRequest target_config_id(::bosdyn_msgs::msg::SetEstopConfigRequest::_target_config_id_type arg)
  {
    msg_.target_config_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigRequest msg_;
};

class Init_SetEstopConfigRequest_config_is_set
{
public:
  explicit Init_SetEstopConfigRequest_config_is_set(::bosdyn_msgs::msg::SetEstopConfigRequest & msg)
  : msg_(msg)
  {}
  Init_SetEstopConfigRequest_target_config_id config_is_set(::bosdyn_msgs::msg::SetEstopConfigRequest::_config_is_set_type arg)
  {
    msg_.config_is_set = std::move(arg);
    return Init_SetEstopConfigRequest_target_config_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigRequest msg_;
};

class Init_SetEstopConfigRequest_config
{
public:
  explicit Init_SetEstopConfigRequest_config(::bosdyn_msgs::msg::SetEstopConfigRequest & msg)
  : msg_(msg)
  {}
  Init_SetEstopConfigRequest_config_is_set config(::bosdyn_msgs::msg::SetEstopConfigRequest::_config_type arg)
  {
    msg_.config = std::move(arg);
    return Init_SetEstopConfigRequest_config_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigRequest msg_;
};

class Init_SetEstopConfigRequest_header_is_set
{
public:
  explicit Init_SetEstopConfigRequest_header_is_set(::bosdyn_msgs::msg::SetEstopConfigRequest & msg)
  : msg_(msg)
  {}
  Init_SetEstopConfigRequest_config header_is_set(::bosdyn_msgs::msg::SetEstopConfigRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetEstopConfigRequest_config(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigRequest msg_;
};

class Init_SetEstopConfigRequest_header
{
public:
  Init_SetEstopConfigRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEstopConfigRequest_header_is_set header(::bosdyn_msgs::msg::SetEstopConfigRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetEstopConfigRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetEstopConfigRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetEstopConfigRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetEstopConfigRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_ESTOP_CONFIG_REQUEST__BUILDER_HPP_
