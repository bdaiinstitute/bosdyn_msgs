// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Stance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STANCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Stance_accuracy
{
public:
  explicit Init_Stance_accuracy(::bosdyn_msgs::msg::Stance & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Stance accuracy(::bosdyn_msgs::msg::Stance::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Stance msg_;
};

class Init_Stance_foot_positions
{
public:
  explicit Init_Stance_foot_positions(::bosdyn_msgs::msg::Stance & msg)
  : msg_(msg)
  {}
  Init_Stance_accuracy foot_positions(::bosdyn_msgs::msg::Stance::_foot_positions_type arg)
  {
    msg_.foot_positions = std::move(arg);
    return Init_Stance_accuracy(msg_);
  }

private:
  ::bosdyn_msgs::msg::Stance msg_;
};

class Init_Stance_se2_frame_name
{
public:
  Init_Stance_se2_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stance_foot_positions se2_frame_name(::bosdyn_msgs::msg::Stance::_se2_frame_name_type arg)
  {
    msg_.se2_frame_name = std::move(arg);
    return Init_Stance_foot_positions(msg_);
  }

private:
  ::bosdyn_msgs::msg::Stance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Stance>()
{
  return bosdyn_msgs::msg::builder::Init_Stance_se2_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STANCE__BUILDER_HPP_
