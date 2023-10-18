// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SerializedMessage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIALIZED_MESSAGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIALIZED_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/serialized_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SerializedMessage_serialized_msg
{
public:
  Init_SerializedMessage_serialized_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::SerializedMessage serialized_msg(::bosdyn_msgs::msg::SerializedMessage::_serialized_msg_type arg)
  {
    msg_.serialized_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SerializedMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SerializedMessage>()
{
  return bosdyn_msgs::msg::builder::Init_SerializedMessage_serialized_msg();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIALIZED_MESSAGE__BUILDER_HPP_
