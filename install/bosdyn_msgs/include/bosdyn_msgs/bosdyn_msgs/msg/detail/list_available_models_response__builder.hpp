// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListAvailableModelsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_available_models_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListAvailableModelsResponse_status
{
public:
  explicit Init_ListAvailableModelsResponse_status(::bosdyn_msgs::msg::ListAvailableModelsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListAvailableModelsResponse status(::bosdyn_msgs::msg::ListAvailableModelsResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListAvailableModelsResponse msg_;
};

class Init_ListAvailableModelsResponse_models_is_set
{
public:
  explicit Init_ListAvailableModelsResponse_models_is_set(::bosdyn_msgs::msg::ListAvailableModelsResponse & msg)
  : msg_(msg)
  {}
  Init_ListAvailableModelsResponse_status models_is_set(::bosdyn_msgs::msg::ListAvailableModelsResponse::_models_is_set_type arg)
  {
    msg_.models_is_set = std::move(arg);
    return Init_ListAvailableModelsResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListAvailableModelsResponse msg_;
};

class Init_ListAvailableModelsResponse_models
{
public:
  explicit Init_ListAvailableModelsResponse_models(::bosdyn_msgs::msg::ListAvailableModelsResponse & msg)
  : msg_(msg)
  {}
  Init_ListAvailableModelsResponse_models_is_set models(::bosdyn_msgs::msg::ListAvailableModelsResponse::_models_type arg)
  {
    msg_.models = std::move(arg);
    return Init_ListAvailableModelsResponse_models_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListAvailableModelsResponse msg_;
};

class Init_ListAvailableModelsResponse_header_is_set
{
public:
  explicit Init_ListAvailableModelsResponse_header_is_set(::bosdyn_msgs::msg::ListAvailableModelsResponse & msg)
  : msg_(msg)
  {}
  Init_ListAvailableModelsResponse_models header_is_set(::bosdyn_msgs::msg::ListAvailableModelsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListAvailableModelsResponse_models(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListAvailableModelsResponse msg_;
};

class Init_ListAvailableModelsResponse_header
{
public:
  Init_ListAvailableModelsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListAvailableModelsResponse_header_is_set header(::bosdyn_msgs::msg::ListAvailableModelsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListAvailableModelsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListAvailableModelsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListAvailableModelsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListAvailableModelsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_RESPONSE__BUILDER_HPP_
