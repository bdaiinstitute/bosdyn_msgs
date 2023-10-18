// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_callback_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaCallbackData_custom_params_is_set
{
public:
  explicit Init_AreaCallbackData_custom_params_is_set(::bosdyn_msgs::msg::AreaCallbackData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaCallbackData custom_params_is_set(::bosdyn_msgs::msg::AreaCallbackData::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackData msg_;
};

class Init_AreaCallbackData_custom_params
{
public:
  Init_AreaCallbackData_custom_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaCallbackData_custom_params_is_set custom_params(::bosdyn_msgs::msg::AreaCallbackData::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_AreaCallbackData_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaCallbackData>()
{
  return bosdyn_msgs::msg::builder::Init_AreaCallbackData_custom_params();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DATA__BUILDER_HPP_
