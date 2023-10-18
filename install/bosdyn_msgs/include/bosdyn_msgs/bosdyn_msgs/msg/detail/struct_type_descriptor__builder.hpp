// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StructTypeDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRUCT_TYPE_DESCRIPTOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRUCT_TYPE_DESCRIPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/struct_type_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StructTypeDescriptor_key_to_series_identifier_hash
{
public:
  Init_StructTypeDescriptor_key_to_series_identifier_hash()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::StructTypeDescriptor key_to_series_identifier_hash(::bosdyn_msgs::msg::StructTypeDescriptor::_key_to_series_identifier_hash_type arg)
  {
    msg_.key_to_series_identifier_hash = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StructTypeDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StructTypeDescriptor>()
{
  return bosdyn_msgs::msg::builder::Init_StructTypeDescriptor_key_to_series_identifier_hash();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRUCT_TYPE_DESCRIPTOR__BUILDER_HPP_
