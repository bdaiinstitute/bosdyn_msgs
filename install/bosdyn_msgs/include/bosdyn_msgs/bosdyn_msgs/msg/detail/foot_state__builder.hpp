// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FootState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/foot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FootState_terrain_is_set
{
public:
  explicit Init_FootState_terrain_is_set(::bosdyn_msgs::msg::FootState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FootState terrain_is_set(::bosdyn_msgs::msg::FootState::_terrain_is_set_type arg)
  {
    msg_.terrain_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootState msg_;
};

class Init_FootState_terrain
{
public:
  explicit Init_FootState_terrain(::bosdyn_msgs::msg::FootState & msg)
  : msg_(msg)
  {}
  Init_FootState_terrain_is_set terrain(::bosdyn_msgs::msg::FootState::_terrain_type arg)
  {
    msg_.terrain = std::move(arg);
    return Init_FootState_terrain_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootState msg_;
};

class Init_FootState_contact
{
public:
  explicit Init_FootState_contact(::bosdyn_msgs::msg::FootState & msg)
  : msg_(msg)
  {}
  Init_FootState_terrain contact(::bosdyn_msgs::msg::FootState::_contact_type arg)
  {
    msg_.contact = std::move(arg);
    return Init_FootState_terrain(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootState msg_;
};

class Init_FootState_foot_position_rt_body_is_set
{
public:
  explicit Init_FootState_foot_position_rt_body_is_set(::bosdyn_msgs::msg::FootState & msg)
  : msg_(msg)
  {}
  Init_FootState_contact foot_position_rt_body_is_set(::bosdyn_msgs::msg::FootState::_foot_position_rt_body_is_set_type arg)
  {
    msg_.foot_position_rt_body_is_set = std::move(arg);
    return Init_FootState_contact(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootState msg_;
};

class Init_FootState_foot_position_rt_body
{
public:
  Init_FootState_foot_position_rt_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootState_foot_position_rt_body_is_set foot_position_rt_body(::bosdyn_msgs::msg::FootState::_foot_position_rt_body_type arg)
  {
    msg_.foot_position_rt_body = std::move(arg);
    return Init_FootState_foot_position_rt_body_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FootState>()
{
  return bosdyn_msgs::msg::builder::Init_FootState_foot_position_rt_body();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE__BUILDER_HPP_
