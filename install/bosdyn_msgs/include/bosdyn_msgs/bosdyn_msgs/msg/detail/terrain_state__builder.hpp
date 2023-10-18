// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TerrainState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TERRAIN_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TERRAIN_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/terrain_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TerrainState_is_unsafe_to_sit
{
public:
  Init_TerrainState_is_unsafe_to_sit()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::TerrainState is_unsafe_to_sit(::bosdyn_msgs::msg::TerrainState::_is_unsafe_to_sit_type arg)
  {
    msg_.is_unsafe_to_sit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TerrainState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TerrainState>()
{
  return bosdyn_msgs::msg::builder::Init_TerrainState_is_unsafe_to_sit();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TERRAIN_STATE__BUILDER_HPP_
