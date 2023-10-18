// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ValidateGraphResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VALIDATE_GRAPH_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VALIDATE_GRAPH_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/validate_graph_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ValidateGraphResponse_area_callback_error_is_set
{
public:
  explicit Init_ValidateGraphResponse_area_callback_error_is_set(::bosdyn_msgs::msg::ValidateGraphResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ValidateGraphResponse area_callback_error_is_set(::bosdyn_msgs::msg::ValidateGraphResponse::_area_callback_error_is_set_type arg)
  {
    msg_.area_callback_error_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValidateGraphResponse msg_;
};

class Init_ValidateGraphResponse_area_callback_error
{
public:
  explicit Init_ValidateGraphResponse_area_callback_error(::bosdyn_msgs::msg::ValidateGraphResponse & msg)
  : msg_(msg)
  {}
  Init_ValidateGraphResponse_area_callback_error_is_set area_callback_error(::bosdyn_msgs::msg::ValidateGraphResponse::_area_callback_error_type arg)
  {
    msg_.area_callback_error = std::move(arg);
    return Init_ValidateGraphResponse_area_callback_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValidateGraphResponse msg_;
};

class Init_ValidateGraphResponse_sensor_status_is_set
{
public:
  explicit Init_ValidateGraphResponse_sensor_status_is_set(::bosdyn_msgs::msg::ValidateGraphResponse & msg)
  : msg_(msg)
  {}
  Init_ValidateGraphResponse_area_callback_error sensor_status_is_set(::bosdyn_msgs::msg::ValidateGraphResponse::_sensor_status_is_set_type arg)
  {
    msg_.sensor_status_is_set = std::move(arg);
    return Init_ValidateGraphResponse_area_callback_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValidateGraphResponse msg_;
};

class Init_ValidateGraphResponse_sensor_status
{
public:
  explicit Init_ValidateGraphResponse_sensor_status(::bosdyn_msgs::msg::ValidateGraphResponse & msg)
  : msg_(msg)
  {}
  Init_ValidateGraphResponse_sensor_status_is_set sensor_status(::bosdyn_msgs::msg::ValidateGraphResponse::_sensor_status_type arg)
  {
    msg_.sensor_status = std::move(arg);
    return Init_ValidateGraphResponse_sensor_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValidateGraphResponse msg_;
};

class Init_ValidateGraphResponse_status
{
public:
  explicit Init_ValidateGraphResponse_status(::bosdyn_msgs::msg::ValidateGraphResponse & msg)
  : msg_(msg)
  {}
  Init_ValidateGraphResponse_sensor_status status(::bosdyn_msgs::msg::ValidateGraphResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ValidateGraphResponse_sensor_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValidateGraphResponse msg_;
};

class Init_ValidateGraphResponse_header_is_set
{
public:
  explicit Init_ValidateGraphResponse_header_is_set(::bosdyn_msgs::msg::ValidateGraphResponse & msg)
  : msg_(msg)
  {}
  Init_ValidateGraphResponse_status header_is_set(::bosdyn_msgs::msg::ValidateGraphResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ValidateGraphResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValidateGraphResponse msg_;
};

class Init_ValidateGraphResponse_header
{
public:
  Init_ValidateGraphResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidateGraphResponse_header_is_set header(::bosdyn_msgs::msg::ValidateGraphResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ValidateGraphResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ValidateGraphResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ValidateGraphResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ValidateGraphResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VALIDATE_GRAPH_RESPONSE__BUILDER_HPP_
