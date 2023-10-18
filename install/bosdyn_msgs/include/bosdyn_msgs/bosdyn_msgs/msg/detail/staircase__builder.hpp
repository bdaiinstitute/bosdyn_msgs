// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Staircase.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/staircase__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Staircase_steps
{
public:
  explicit Init_Staircase_steps(::bosdyn_msgs::msg::Staircase & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Staircase steps(::bosdyn_msgs::msg::Staircase::_steps_type arg)
  {
    msg_.steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Staircase msg_;
};

class Init_Staircase_average_width_is_set
{
public:
  explicit Init_Staircase_average_width_is_set(::bosdyn_msgs::msg::Staircase & msg)
  : msg_(msg)
  {}
  Init_Staircase_steps average_width_is_set(::bosdyn_msgs::msg::Staircase::_average_width_is_set_type arg)
  {
    msg_.average_width_is_set = std::move(arg);
    return Init_Staircase_steps(msg_);
  }

private:
  ::bosdyn_msgs::msg::Staircase msg_;
};

class Init_Staircase_average_width
{
public:
  explicit Init_Staircase_average_width(::bosdyn_msgs::msg::Staircase & msg)
  : msg_(msg)
  {}
  Init_Staircase_average_width_is_set average_width(::bosdyn_msgs::msg::Staircase::_average_width_type arg)
  {
    msg_.average_width = std::move(arg);
    return Init_Staircase_average_width_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Staircase msg_;
};

class Init_Staircase_average_run
{
public:
  explicit Init_Staircase_average_run(::bosdyn_msgs::msg::Staircase & msg)
  : msg_(msg)
  {}
  Init_Staircase_average_width average_run(::bosdyn_msgs::msg::Staircase::_average_run_type arg)
  {
    msg_.average_run = std::move(arg);
    return Init_Staircase_average_width(msg_);
  }

private:
  ::bosdyn_msgs::msg::Staircase msg_;
};

class Init_Staircase_average_rise
{
public:
  explicit Init_Staircase_average_rise(::bosdyn_msgs::msg::Staircase & msg)
  : msg_(msg)
  {}
  Init_Staircase_average_run average_rise(::bosdyn_msgs::msg::Staircase::_average_rise_type arg)
  {
    msg_.average_rise = std::move(arg);
    return Init_Staircase_average_run(msg_);
  }

private:
  ::bosdyn_msgs::msg::Staircase msg_;
};

class Init_Staircase_number_of_steps
{
public:
  explicit Init_Staircase_number_of_steps(::bosdyn_msgs::msg::Staircase & msg)
  : msg_(msg)
  {}
  Init_Staircase_average_rise number_of_steps(::bosdyn_msgs::msg::Staircase::_number_of_steps_type arg)
  {
    msg_.number_of_steps = std::move(arg);
    return Init_Staircase_average_rise(msg_);
  }

private:
  ::bosdyn_msgs::msg::Staircase msg_;
};

class Init_Staircase_stair_tform_is_set
{
public:
  explicit Init_Staircase_stair_tform_is_set(::bosdyn_msgs::msg::Staircase & msg)
  : msg_(msg)
  {}
  Init_Staircase_number_of_steps stair_tform_is_set(::bosdyn_msgs::msg::Staircase::_stair_tform_is_set_type arg)
  {
    msg_.stair_tform_is_set = std::move(arg);
    return Init_Staircase_number_of_steps(msg_);
  }

private:
  ::bosdyn_msgs::msg::Staircase msg_;
};

class Init_Staircase_stair_tform
{
public:
  explicit Init_Staircase_stair_tform(::bosdyn_msgs::msg::Staircase & msg)
  : msg_(msg)
  {}
  Init_Staircase_stair_tform_is_set stair_tform(::bosdyn_msgs::msg::Staircase::_stair_tform_type arg)
  {
    msg_.stair_tform = std::move(arg);
    return Init_Staircase_stair_tform_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Staircase msg_;
};

class Init_Staircase_knowledge_type
{
public:
  Init_Staircase_knowledge_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Staircase_stair_tform knowledge_type(::bosdyn_msgs::msg::Staircase::_knowledge_type_type arg)
  {
    msg_.knowledge_type = std::move(arg);
    return Init_Staircase_stair_tform(msg_);
  }

private:
  ::bosdyn_msgs::msg::Staircase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Staircase>()
{
  return bosdyn_msgs::msg::builder::Init_Staircase_knowledge_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__BUILDER_HPP_
