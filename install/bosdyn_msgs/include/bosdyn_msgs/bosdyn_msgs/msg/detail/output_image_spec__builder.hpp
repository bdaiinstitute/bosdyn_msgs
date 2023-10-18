// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/OutputImageSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OUTPUT_IMAGE_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OUTPUT_IMAGE_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/output_image_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_OutputImageSpec_name
{
public:
  explicit Init_OutputImageSpec_name(::bosdyn_msgs::msg::OutputImageSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::OutputImageSpec name(::bosdyn_msgs::msg::OutputImageSpec::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputImageSpec msg_;
};

class Init_OutputImageSpec_key
{
public:
  Init_OutputImageSpec_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OutputImageSpec_name key(::bosdyn_msgs::msg::OutputImageSpec::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_OutputImageSpec_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputImageSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::OutputImageSpec>()
{
  return bosdyn_msgs::msg::builder::Init_OutputImageSpec_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__OUTPUT_IMAGE_SPEC__BUILDER_HPP_
