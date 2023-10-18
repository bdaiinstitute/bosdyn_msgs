// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListAvailableModelsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_available_models_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListAvailableModelsRequest_server_config_is_set
{
public:
  explicit Init_ListAvailableModelsRequest_server_config_is_set(::bosdyn_msgs::msg::ListAvailableModelsRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListAvailableModelsRequest server_config_is_set(::bosdyn_msgs::msg::ListAvailableModelsRequest::_server_config_is_set_type arg)
  {
    msg_.server_config_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListAvailableModelsRequest msg_;
};

class Init_ListAvailableModelsRequest_server_config
{
public:
  explicit Init_ListAvailableModelsRequest_server_config(::bosdyn_msgs::msg::ListAvailableModelsRequest & msg)
  : msg_(msg)
  {}
  Init_ListAvailableModelsRequest_server_config_is_set server_config(::bosdyn_msgs::msg::ListAvailableModelsRequest::_server_config_type arg)
  {
    msg_.server_config = std::move(arg);
    return Init_ListAvailableModelsRequest_server_config_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListAvailableModelsRequest msg_;
};

class Init_ListAvailableModelsRequest_header_is_set
{
public:
  explicit Init_ListAvailableModelsRequest_header_is_set(::bosdyn_msgs::msg::ListAvailableModelsRequest & msg)
  : msg_(msg)
  {}
  Init_ListAvailableModelsRequest_server_config header_is_set(::bosdyn_msgs::msg::ListAvailableModelsRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListAvailableModelsRequest_server_config(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListAvailableModelsRequest msg_;
};

class Init_ListAvailableModelsRequest_header
{
public:
  Init_ListAvailableModelsRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListAvailableModelsRequest_header_is_set header(::bosdyn_msgs::msg::ListAvailableModelsRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListAvailableModelsRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListAvailableModelsRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListAvailableModelsRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ListAvailableModelsRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_REQUEST__BUILDER_HPP_
