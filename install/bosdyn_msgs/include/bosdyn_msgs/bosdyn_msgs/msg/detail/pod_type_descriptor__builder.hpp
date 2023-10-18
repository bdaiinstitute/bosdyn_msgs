// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PodTypeDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POD_TYPE_DESCRIPTOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POD_TYPE_DESCRIPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/pod_type_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PodTypeDescriptor_dimension
{
public:
  explicit Init_PodTypeDescriptor_dimension(::bosdyn_msgs::msg::PodTypeDescriptor & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PodTypeDescriptor dimension(::bosdyn_msgs::msg::PodTypeDescriptor::_dimension_type arg)
  {
    msg_.dimension = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PodTypeDescriptor msg_;
};

class Init_PodTypeDescriptor_pod_type
{
public:
  Init_PodTypeDescriptor_pod_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PodTypeDescriptor_dimension pod_type(::bosdyn_msgs::msg::PodTypeDescriptor::_pod_type_type arg)
  {
    msg_.pod_type = std::move(arg);
    return Init_PodTypeDescriptor_dimension(msg_);
  }

private:
  ::bosdyn_msgs::msg::PodTypeDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PodTypeDescriptor>()
{
  return bosdyn_msgs::msg::builder::Init_PodTypeDescriptor_pod_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POD_TYPE_DESCRIPTOR__BUILDER_HPP_
