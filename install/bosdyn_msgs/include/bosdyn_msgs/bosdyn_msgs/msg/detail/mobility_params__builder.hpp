// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MobilityParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mobility_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityParams_disable_nearmap_cliff_avoidance
{
public:
  explicit Init_MobilityParams_disable_nearmap_cliff_avoidance(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MobilityParams disable_nearmap_cliff_avoidance(::bosdyn_msgs::msg::MobilityParams::_disable_nearmap_cliff_avoidance_type arg)
  {
    msg_.disable_nearmap_cliff_avoidance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_disallow_non_stairs_pitch_limiting
{
public:
  explicit Init_MobilityParams_disallow_non_stairs_pitch_limiting(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_disable_nearmap_cliff_avoidance disallow_non_stairs_pitch_limiting(::bosdyn_msgs::msg::MobilityParams::_disallow_non_stairs_pitch_limiting_type arg)
  {
    msg_.disallow_non_stairs_pitch_limiting = std::move(arg);
    return Init_MobilityParams_disable_nearmap_cliff_avoidance(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_external_force_params_is_set
{
public:
  explicit Init_MobilityParams_external_force_params_is_set(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_disallow_non_stairs_pitch_limiting external_force_params_is_set(::bosdyn_msgs::msg::MobilityParams::_external_force_params_is_set_type arg)
  {
    msg_.external_force_params_is_set = std::move(arg);
    return Init_MobilityParams_disallow_non_stairs_pitch_limiting(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_external_force_params
{
public:
  explicit Init_MobilityParams_external_force_params(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_external_force_params_is_set external_force_params(::bosdyn_msgs::msg::MobilityParams::_external_force_params_type arg)
  {
    msg_.external_force_params = std::move(arg);
    return Init_MobilityParams_external_force_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_disable_stair_error_auto_descent
{
public:
  explicit Init_MobilityParams_disable_stair_error_auto_descent(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_external_force_params disable_stair_error_auto_descent(::bosdyn_msgs::msg::MobilityParams::_disable_stair_error_auto_descent_type arg)
  {
    msg_.disable_stair_error_auto_descent = std::move(arg);
    return Init_MobilityParams_external_force_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_disallow_stair_tracker
{
public:
  explicit Init_MobilityParams_disallow_stair_tracker(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_disable_stair_error_auto_descent disallow_stair_tracker(::bosdyn_msgs::msg::MobilityParams::_disallow_stair_tracker_type arg)
  {
    msg_.disallow_stair_tracker = std::move(arg);
    return Init_MobilityParams_disable_stair_error_auto_descent(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_terrain_params_is_set
{
public:
  explicit Init_MobilityParams_terrain_params_is_set(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_disallow_stair_tracker terrain_params_is_set(::bosdyn_msgs::msg::MobilityParams::_terrain_params_is_set_type arg)
  {
    msg_.terrain_params_is_set = std::move(arg);
    return Init_MobilityParams_disallow_stair_tracker(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_terrain_params
{
public:
  explicit Init_MobilityParams_terrain_params(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_terrain_params_is_set terrain_params(::bosdyn_msgs::msg::MobilityParams::_terrain_params_type arg)
  {
    msg_.terrain_params = std::move(arg);
    return Init_MobilityParams_terrain_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_swing_height
{
public:
  explicit Init_MobilityParams_swing_height(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_terrain_params swing_height(::bosdyn_msgs::msg::MobilityParams::_swing_height_type arg)
  {
    msg_.swing_height = std::move(arg);
    return Init_MobilityParams_terrain_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_obstacle_params_is_set
{
public:
  explicit Init_MobilityParams_obstacle_params_is_set(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_swing_height obstacle_params_is_set(::bosdyn_msgs::msg::MobilityParams::_obstacle_params_is_set_type arg)
  {
    msg_.obstacle_params_is_set = std::move(arg);
    return Init_MobilityParams_swing_height(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_obstacle_params
{
public:
  explicit Init_MobilityParams_obstacle_params(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_obstacle_params_is_set obstacle_params(::bosdyn_msgs::msg::MobilityParams::_obstacle_params_type arg)
  {
    msg_.obstacle_params = std::move(arg);
    return Init_MobilityParams_obstacle_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_allow_degraded_perception
{
public:
  explicit Init_MobilityParams_allow_degraded_perception(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_obstacle_params allow_degraded_perception(::bosdyn_msgs::msg::MobilityParams::_allow_degraded_perception_type arg)
  {
    msg_.allow_degraded_perception = std::move(arg);
    return Init_MobilityParams_obstacle_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_stairs_mode
{
public:
  explicit Init_MobilityParams_stairs_mode(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_allow_degraded_perception stairs_mode(::bosdyn_msgs::msg::MobilityParams::_stairs_mode_type arg)
  {
    msg_.stairs_mode = std::move(arg);
    return Init_MobilityParams_allow_degraded_perception(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_locomotion_hint
{
public:
  explicit Init_MobilityParams_locomotion_hint(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_stairs_mode locomotion_hint(::bosdyn_msgs::msg::MobilityParams::_locomotion_hint_type arg)
  {
    msg_.locomotion_hint = std::move(arg);
    return Init_MobilityParams_stairs_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_body_control_is_set
{
public:
  explicit Init_MobilityParams_body_control_is_set(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_locomotion_hint body_control_is_set(::bosdyn_msgs::msg::MobilityParams::_body_control_is_set_type arg)
  {
    msg_.body_control_is_set = std::move(arg);
    return Init_MobilityParams_locomotion_hint(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_body_control
{
public:
  explicit Init_MobilityParams_body_control(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_body_control_is_set body_control(::bosdyn_msgs::msg::MobilityParams::_body_control_type arg)
  {
    msg_.body_control = std::move(arg);
    return Init_MobilityParams_body_control_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_vel_limit_is_set
{
public:
  explicit Init_MobilityParams_vel_limit_is_set(::bosdyn_msgs::msg::MobilityParams & msg)
  : msg_(msg)
  {}
  Init_MobilityParams_body_control vel_limit_is_set(::bosdyn_msgs::msg::MobilityParams::_vel_limit_is_set_type arg)
  {
    msg_.vel_limit_is_set = std::move(arg);
    return Init_MobilityParams_body_control(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

class Init_MobilityParams_vel_limit
{
public:
  Init_MobilityParams_vel_limit()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityParams_vel_limit_is_set vel_limit(::bosdyn_msgs::msg::MobilityParams::_vel_limit_type arg)
  {
    msg_.vel_limit = std::move(arg);
    return Init_MobilityParams_vel_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MobilityParams>()
{
  return bosdyn_msgs::msg::builder::Init_MobilityParams_vel_limit();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS__BUILDER_HPP_
