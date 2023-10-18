// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeyStringValueBosdynMsgsAreaCallbackData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_AREA_CALLBACK_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_AREA_CALLBACK_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyStringValueBosdynMsgsAreaCallbackData_value
{
public:
  explicit Init_KeyStringValueBosdynMsgsAreaCallbackData_value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData msg_;
};

class Init_KeyStringValueBosdynMsgsAreaCallbackData_key
{
public:
  Init_KeyStringValueBosdynMsgsAreaCallbackData_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyStringValueBosdynMsgsAreaCallbackData_value key(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyStringValueBosdynMsgsAreaCallbackData_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData>()
{
  return bosdyn_msgs::msg::builder::Init_KeyStringValueBosdynMsgsAreaCallbackData_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_AREA_CALLBACK_DATA__BUILDER_HPP_
