// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Anchoring.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHORING__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHORING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/anchoring__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Anchoring_objects
{
public:
  explicit Init_Anchoring_objects(::bosdyn_msgs::msg::Anchoring & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Anchoring objects(::bosdyn_msgs::msg::Anchoring::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Anchoring msg_;
};

class Init_Anchoring_anchors
{
public:
  Init_Anchoring_anchors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Anchoring_objects anchors(::bosdyn_msgs::msg::Anchoring::_anchors_type arg)
  {
    msg_.anchors = std::move(arg);
    return Init_Anchoring_objects(msg_);
  }

private:
  ::bosdyn_msgs::msg::Anchoring msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Anchoring>()
{
  return bosdyn_msgs::msg::builder::Init_Anchoring_anchors();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHORING__BUILDER_HPP_
