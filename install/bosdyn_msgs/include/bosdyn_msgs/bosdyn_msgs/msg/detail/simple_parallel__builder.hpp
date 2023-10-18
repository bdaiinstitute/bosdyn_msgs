// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SimpleParallel.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIMPLE_PARALLEL__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIMPLE_PARALLEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/simple_parallel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SimpleParallel_run_secondary_node_once
{
public:
  explicit Init_SimpleParallel_run_secondary_node_once(::bosdyn_msgs::msg::SimpleParallel & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SimpleParallel run_secondary_node_once(::bosdyn_msgs::msg::SimpleParallel::_run_secondary_node_once_type arg)
  {
    msg_.run_secondary_node_once = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SimpleParallel msg_;
};

class Init_SimpleParallel_secondary_is_set
{
public:
  explicit Init_SimpleParallel_secondary_is_set(::bosdyn_msgs::msg::SimpleParallel & msg)
  : msg_(msg)
  {}
  Init_SimpleParallel_run_secondary_node_once secondary_is_set(::bosdyn_msgs::msg::SimpleParallel::_secondary_is_set_type arg)
  {
    msg_.secondary_is_set = std::move(arg);
    return Init_SimpleParallel_run_secondary_node_once(msg_);
  }

private:
  ::bosdyn_msgs::msg::SimpleParallel msg_;
};

class Init_SimpleParallel_secondary
{
public:
  explicit Init_SimpleParallel_secondary(::bosdyn_msgs::msg::SimpleParallel & msg)
  : msg_(msg)
  {}
  Init_SimpleParallel_secondary_is_set secondary(::bosdyn_msgs::msg::SimpleParallel::_secondary_type arg)
  {
    msg_.secondary = std::move(arg);
    return Init_SimpleParallel_secondary_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SimpleParallel msg_;
};

class Init_SimpleParallel_primary_is_set
{
public:
  explicit Init_SimpleParallel_primary_is_set(::bosdyn_msgs::msg::SimpleParallel & msg)
  : msg_(msg)
  {}
  Init_SimpleParallel_secondary primary_is_set(::bosdyn_msgs::msg::SimpleParallel::_primary_is_set_type arg)
  {
    msg_.primary_is_set = std::move(arg);
    return Init_SimpleParallel_secondary(msg_);
  }

private:
  ::bosdyn_msgs::msg::SimpleParallel msg_;
};

class Init_SimpleParallel_primary
{
public:
  Init_SimpleParallel_primary()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimpleParallel_primary_is_set primary(::bosdyn_msgs::msg::SimpleParallel::_primary_type arg)
  {
    msg_.primary = std::move(arg);
    return Init_SimpleParallel_primary_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SimpleParallel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SimpleParallel>()
{
  return bosdyn_msgs::msg::builder::Init_SimpleParallel_primary();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIMPLE_PARALLEL__BUILDER_HPP_
