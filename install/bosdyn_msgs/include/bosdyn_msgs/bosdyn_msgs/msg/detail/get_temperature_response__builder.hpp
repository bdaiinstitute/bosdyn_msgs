// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetTemperatureResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_TEMPERATURE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_TEMPERATURE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_temperature_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetTemperatureResponse_temps
{
public:
  explicit Init_GetTemperatureResponse_temps(::bosdyn_msgs::msg::GetTemperatureResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetTemperatureResponse temps(::bosdyn_msgs::msg::GetTemperatureResponse::_temps_type arg)
  {
    msg_.temps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetTemperatureResponse msg_;
};

class Init_GetTemperatureResponse_header_is_set
{
public:
  explicit Init_GetTemperatureResponse_header_is_set(::bosdyn_msgs::msg::GetTemperatureResponse & msg)
  : msg_(msg)
  {}
  Init_GetTemperatureResponse_temps header_is_set(::bosdyn_msgs::msg::GetTemperatureResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetTemperatureResponse_temps(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetTemperatureResponse msg_;
};

class Init_GetTemperatureResponse_header
{
public:
  Init_GetTemperatureResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTemperatureResponse_header_is_set header(::bosdyn_msgs::msg::GetTemperatureResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetTemperatureResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetTemperatureResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetTemperatureResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetTemperatureResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_TEMPERATURE_RESPONSE__BUILDER_HPP_
