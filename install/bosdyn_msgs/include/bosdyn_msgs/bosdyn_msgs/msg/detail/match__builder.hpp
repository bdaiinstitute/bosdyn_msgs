// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Match.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MATCH__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MATCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/match__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Match_distance
{
public:
  explicit Init_Match_distance(::bosdyn_msgs::msg::Match & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Match distance(::bosdyn_msgs::msg::Match::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Match msg_;
};

class Init_Match_live_index
{
public:
  explicit Init_Match_live_index(::bosdyn_msgs::msg::Match & msg)
  : msg_(msg)
  {}
  Init_Match_distance live_index(::bosdyn_msgs::msg::Match::_live_index_type arg)
  {
    msg_.live_index = std::move(arg);
    return Init_Match_distance(msg_);
  }

private:
  ::bosdyn_msgs::msg::Match msg_;
};

class Init_Match_reference_index
{
public:
  Init_Match_reference_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Match_live_index reference_index(::bosdyn_msgs::msg::Match::_reference_index_type arg)
  {
    msg_.reference_index = std::move(arg);
    return Init_Match_live_index(msg_);
  }

private:
  ::bosdyn_msgs::msg::Match msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Match>()
{
  return bosdyn_msgs::msg::builder::Init_Match_reference_index();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MATCH__BUILDER_HPP_
