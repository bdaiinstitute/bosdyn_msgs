// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FootStateTerrainState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE_TERRAIN_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE_TERRAIN_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/foot_state_terrain_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FootStateTerrainState_visual_surface_ground_penetration_std
{
public:
  explicit Init_FootStateTerrainState_visual_surface_ground_penetration_std(::bosdyn_msgs::msg::FootStateTerrainState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FootStateTerrainState visual_surface_ground_penetration_std(::bosdyn_msgs::msg::FootStateTerrainState::_visual_surface_ground_penetration_std_type arg)
  {
    msg_.visual_surface_ground_penetration_std = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

class Init_FootStateTerrainState_visual_surface_ground_penetration_mean
{
public:
  explicit Init_FootStateTerrainState_visual_surface_ground_penetration_mean(::bosdyn_msgs::msg::FootStateTerrainState & msg)
  : msg_(msg)
  {}
  Init_FootStateTerrainState_visual_surface_ground_penetration_std visual_surface_ground_penetration_mean(::bosdyn_msgs::msg::FootStateTerrainState::_visual_surface_ground_penetration_mean_type arg)
  {
    msg_.visual_surface_ground_penetration_mean = std::move(arg);
    return Init_FootStateTerrainState_visual_surface_ground_penetration_std(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

class Init_FootStateTerrainState_ground_contact_normal_rt_frame_is_set
{
public:
  explicit Init_FootStateTerrainState_ground_contact_normal_rt_frame_is_set(::bosdyn_msgs::msg::FootStateTerrainState & msg)
  : msg_(msg)
  {}
  Init_FootStateTerrainState_visual_surface_ground_penetration_mean ground_contact_normal_rt_frame_is_set(::bosdyn_msgs::msg::FootStateTerrainState::_ground_contact_normal_rt_frame_is_set_type arg)
  {
    msg_.ground_contact_normal_rt_frame_is_set = std::move(arg);
    return Init_FootStateTerrainState_visual_surface_ground_penetration_mean(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

class Init_FootStateTerrainState_ground_contact_normal_rt_frame
{
public:
  explicit Init_FootStateTerrainState_ground_contact_normal_rt_frame(::bosdyn_msgs::msg::FootStateTerrainState & msg)
  : msg_(msg)
  {}
  Init_FootStateTerrainState_ground_contact_normal_rt_frame_is_set ground_contact_normal_rt_frame(::bosdyn_msgs::msg::FootStateTerrainState::_ground_contact_normal_rt_frame_type arg)
  {
    msg_.ground_contact_normal_rt_frame = std::move(arg);
    return Init_FootStateTerrainState_ground_contact_normal_rt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

class Init_FootStateTerrainState_foot_slip_velocity_rt_frame_is_set
{
public:
  explicit Init_FootStateTerrainState_foot_slip_velocity_rt_frame_is_set(::bosdyn_msgs::msg::FootStateTerrainState & msg)
  : msg_(msg)
  {}
  Init_FootStateTerrainState_ground_contact_normal_rt_frame foot_slip_velocity_rt_frame_is_set(::bosdyn_msgs::msg::FootStateTerrainState::_foot_slip_velocity_rt_frame_is_set_type arg)
  {
    msg_.foot_slip_velocity_rt_frame_is_set = std::move(arg);
    return Init_FootStateTerrainState_ground_contact_normal_rt_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

class Init_FootStateTerrainState_foot_slip_velocity_rt_frame
{
public:
  explicit Init_FootStateTerrainState_foot_slip_velocity_rt_frame(::bosdyn_msgs::msg::FootStateTerrainState & msg)
  : msg_(msg)
  {}
  Init_FootStateTerrainState_foot_slip_velocity_rt_frame_is_set foot_slip_velocity_rt_frame(::bosdyn_msgs::msg::FootStateTerrainState::_foot_slip_velocity_rt_frame_type arg)
  {
    msg_.foot_slip_velocity_rt_frame = std::move(arg);
    return Init_FootStateTerrainState_foot_slip_velocity_rt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

class Init_FootStateTerrainState_foot_slip_distance_rt_frame_is_set
{
public:
  explicit Init_FootStateTerrainState_foot_slip_distance_rt_frame_is_set(::bosdyn_msgs::msg::FootStateTerrainState & msg)
  : msg_(msg)
  {}
  Init_FootStateTerrainState_foot_slip_velocity_rt_frame foot_slip_distance_rt_frame_is_set(::bosdyn_msgs::msg::FootStateTerrainState::_foot_slip_distance_rt_frame_is_set_type arg)
  {
    msg_.foot_slip_distance_rt_frame_is_set = std::move(arg);
    return Init_FootStateTerrainState_foot_slip_velocity_rt_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

class Init_FootStateTerrainState_foot_slip_distance_rt_frame
{
public:
  explicit Init_FootStateTerrainState_foot_slip_distance_rt_frame(::bosdyn_msgs::msg::FootStateTerrainState & msg)
  : msg_(msg)
  {}
  Init_FootStateTerrainState_foot_slip_distance_rt_frame_is_set foot_slip_distance_rt_frame(::bosdyn_msgs::msg::FootStateTerrainState::_foot_slip_distance_rt_frame_type arg)
  {
    msg_.foot_slip_distance_rt_frame = std::move(arg);
    return Init_FootStateTerrainState_foot_slip_distance_rt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

class Init_FootStateTerrainState_frame_name
{
public:
  explicit Init_FootStateTerrainState_frame_name(::bosdyn_msgs::msg::FootStateTerrainState & msg)
  : msg_(msg)
  {}
  Init_FootStateTerrainState_foot_slip_distance_rt_frame frame_name(::bosdyn_msgs::msg::FootStateTerrainState::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_FootStateTerrainState_foot_slip_distance_rt_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

class Init_FootStateTerrainState_ground_mu_est
{
public:
  Init_FootStateTerrainState_ground_mu_est()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootStateTerrainState_frame_name ground_mu_est(::bosdyn_msgs::msg::FootStateTerrainState::_ground_mu_est_type arg)
  {
    msg_.ground_mu_est = std::move(arg);
    return Init_FootStateTerrainState_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::FootStateTerrainState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FootStateTerrainState>()
{
  return bosdyn_msgs::msg::builder::Init_FootStateTerrainState_ground_mu_est();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE_TERRAIN_STATE__BUILDER_HPP_
