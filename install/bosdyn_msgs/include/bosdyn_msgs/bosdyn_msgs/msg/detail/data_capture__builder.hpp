// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataCapture.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_CAPTURE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_CAPTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_capture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataCapture_custom_params_is_set
{
public:
  explicit Init_DataCapture_custom_params_is_set(::bosdyn_msgs::msg::DataCapture & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataCapture custom_params_is_set(::bosdyn_msgs::msg::DataCapture::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataCapture msg_;
};

class Init_DataCapture_custom_params
{
public:
  explicit Init_DataCapture_custom_params(::bosdyn_msgs::msg::DataCapture & msg)
  : msg_(msg)
  {}
  Init_DataCapture_custom_params_is_set custom_params(::bosdyn_msgs::msg::DataCapture::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_DataCapture_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataCapture msg_;
};

class Init_DataCapture_name
{
public:
  Init_DataCapture_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataCapture_custom_params name(::bosdyn_msgs::msg::DataCapture::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DataCapture_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataCapture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataCapture>()
{
  return bosdyn_msgs::msg::builder::Init_DataCapture_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_CAPTURE__BUILDER_HPP_
