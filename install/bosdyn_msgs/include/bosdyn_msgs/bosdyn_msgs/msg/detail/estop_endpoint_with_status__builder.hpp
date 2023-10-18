// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EstopEndpointWithStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/estop_endpoint_with_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EstopEndpointWithStatus_time_since_valid_response_is_set
{
public:
  explicit Init_EstopEndpointWithStatus_time_since_valid_response_is_set(::bosdyn_msgs::msg::EstopEndpointWithStatus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EstopEndpointWithStatus time_since_valid_response_is_set(::bosdyn_msgs::msg::EstopEndpointWithStatus::_time_since_valid_response_is_set_type arg)
  {
    msg_.time_since_valid_response_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpointWithStatus msg_;
};

class Init_EstopEndpointWithStatus_time_since_valid_response
{
public:
  explicit Init_EstopEndpointWithStatus_time_since_valid_response(::bosdyn_msgs::msg::EstopEndpointWithStatus & msg)
  : msg_(msg)
  {}
  Init_EstopEndpointWithStatus_time_since_valid_response_is_set time_since_valid_response(::bosdyn_msgs::msg::EstopEndpointWithStatus::_time_since_valid_response_type arg)
  {
    msg_.time_since_valid_response = std::move(arg);
    return Init_EstopEndpointWithStatus_time_since_valid_response_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpointWithStatus msg_;
};

class Init_EstopEndpointWithStatus_stop_level
{
public:
  explicit Init_EstopEndpointWithStatus_stop_level(::bosdyn_msgs::msg::EstopEndpointWithStatus & msg)
  : msg_(msg)
  {}
  Init_EstopEndpointWithStatus_time_since_valid_response stop_level(::bosdyn_msgs::msg::EstopEndpointWithStatus::_stop_level_type arg)
  {
    msg_.stop_level = std::move(arg);
    return Init_EstopEndpointWithStatus_time_since_valid_response(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpointWithStatus msg_;
};

class Init_EstopEndpointWithStatus_endpoint_is_set
{
public:
  explicit Init_EstopEndpointWithStatus_endpoint_is_set(::bosdyn_msgs::msg::EstopEndpointWithStatus & msg)
  : msg_(msg)
  {}
  Init_EstopEndpointWithStatus_stop_level endpoint_is_set(::bosdyn_msgs::msg::EstopEndpointWithStatus::_endpoint_is_set_type arg)
  {
    msg_.endpoint_is_set = std::move(arg);
    return Init_EstopEndpointWithStatus_stop_level(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpointWithStatus msg_;
};

class Init_EstopEndpointWithStatus_endpoint
{
public:
  Init_EstopEndpointWithStatus_endpoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstopEndpointWithStatus_endpoint_is_set endpoint(::bosdyn_msgs::msg::EstopEndpointWithStatus::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return Init_EstopEndpointWithStatus_endpoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpointWithStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EstopEndpointWithStatus>()
{
  return bosdyn_msgs::msg::builder::Init_EstopEndpointWithStatus_endpoint();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT_WITH_STATUS__BUILDER_HPP_
