// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeyStringValueBosdynMsgsOutputImage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_OUTPUT_IMAGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_OUTPUT_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_output_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyStringValueBosdynMsgsOutputImage_value
{
public:
  explicit Init_KeyStringValueBosdynMsgsOutputImage_value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage msg_;
};

class Init_KeyStringValueBosdynMsgsOutputImage_key
{
public:
  Init_KeyStringValueBosdynMsgsOutputImage_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyStringValueBosdynMsgsOutputImage_value key(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyStringValueBosdynMsgsOutputImage_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage>()
{
  return bosdyn_msgs::msg::builder::Init_KeyStringValueBosdynMsgsOutputImage_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_OUTPUT_IMAGE__BUILDER_HPP_
