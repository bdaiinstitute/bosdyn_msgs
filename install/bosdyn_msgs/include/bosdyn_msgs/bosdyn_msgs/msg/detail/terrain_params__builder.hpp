// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TerrainParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TERRAIN_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TERRAIN_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/terrain_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TerrainParams_grated_surfaces_mode
{
public:
  explicit Init_TerrainParams_grated_surfaces_mode(::bosdyn_msgs::msg::TerrainParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TerrainParams grated_surfaces_mode(::bosdyn_msgs::msg::TerrainParams::_grated_surfaces_mode_type arg)
  {
    msg_.grated_surfaces_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TerrainParams msg_;
};

class Init_TerrainParams_ground_mu_hint_is_set
{
public:
  explicit Init_TerrainParams_ground_mu_hint_is_set(::bosdyn_msgs::msg::TerrainParams & msg)
  : msg_(msg)
  {}
  Init_TerrainParams_grated_surfaces_mode ground_mu_hint_is_set(::bosdyn_msgs::msg::TerrainParams::_ground_mu_hint_is_set_type arg)
  {
    msg_.ground_mu_hint_is_set = std::move(arg);
    return Init_TerrainParams_grated_surfaces_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::TerrainParams msg_;
};

class Init_TerrainParams_ground_mu_hint
{
public:
  Init_TerrainParams_ground_mu_hint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TerrainParams_ground_mu_hint_is_set ground_mu_hint(::bosdyn_msgs::msg::TerrainParams::_ground_mu_hint_type arg)
  {
    msg_.ground_mu_hint = std::move(arg);
    return Init_TerrainParams_ground_mu_hint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TerrainParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TerrainParams>()
{
  return bosdyn_msgs::msg::builder::Init_TerrainParams_ground_mu_hint();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TERRAIN_PARAMS__BUILDER_HPP_
