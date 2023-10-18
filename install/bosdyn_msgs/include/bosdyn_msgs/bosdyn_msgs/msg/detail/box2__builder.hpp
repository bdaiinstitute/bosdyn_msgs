// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Box2.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOX2__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOX2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/box2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Box2_size_is_set
{
public:
  explicit Init_Box2_size_is_set(::bosdyn_msgs::msg::Box2 & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Box2 size_is_set(::bosdyn_msgs::msg::Box2::_size_is_set_type arg)
  {
    msg_.size_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Box2 msg_;
};

class Init_Box2_size
{
public:
  Init_Box2_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Box2_size_is_set size(::bosdyn_msgs::msg::Box2::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_Box2_size_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Box2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Box2>()
{
  return bosdyn_msgs::msg::builder::Init_Box2_size();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOX2__BUILDER_HPP_
