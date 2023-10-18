// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetEstopConfigRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_ESTOP_CONFIG_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_ESTOP_CONFIG_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_estop_config_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetEstopConfigRequest_target_config_id
{
public:
  explicit Init_GetEstopConfigRequest_target_config_id(::bosdyn_msgs::msg::GetEstopConfigRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetEstopConfigRequest target_config_id(::bosdyn_msgs::msg::GetEstopConfigRequest::_target_config_id_type arg)
  {
    msg_.target_config_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEstopConfigRequest msg_;
};

class Init_GetEstopConfigRequest_header_is_set
{
public:
  explicit Init_GetEstopConfigRequest_header_is_set(::bosdyn_msgs::msg::GetEstopConfigRequest & msg)
  : msg_(msg)
  {}
  Init_GetEstopConfigRequest_target_config_id header_is_set(::bosdyn_msgs::msg::GetEstopConfigRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetEstopConfigRequest_target_config_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEstopConfigRequest msg_;
};

class Init_GetEstopConfigRequest_header
{
public:
  Init_GetEstopConfigRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEstopConfigRequest_header_is_set header(::bosdyn_msgs::msg::GetEstopConfigRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetEstopConfigRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetEstopConfigRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetEstopConfigRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetEstopConfigRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_ESTOP_CONFIG_REQUEST__BUILDER_HPP_
