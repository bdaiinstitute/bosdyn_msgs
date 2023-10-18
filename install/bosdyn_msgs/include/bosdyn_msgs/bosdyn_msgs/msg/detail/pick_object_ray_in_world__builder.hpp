// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PickObjectRayInWorld.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_RAY_IN_WORLD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_RAY_IN_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/pick_object_ray_in_world__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PickObjectRayInWorld_walk_gaze_mode
{
public:
  explicit Init_PickObjectRayInWorld_walk_gaze_mode(::bosdyn_msgs::msg::PickObjectRayInWorld & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PickObjectRayInWorld walk_gaze_mode(::bosdyn_msgs::msg::PickObjectRayInWorld::_walk_gaze_mode_type arg)
  {
    msg_.walk_gaze_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectRayInWorld msg_;
};

class Init_PickObjectRayInWorld_grasp_params_is_set
{
public:
  explicit Init_PickObjectRayInWorld_grasp_params_is_set(::bosdyn_msgs::msg::PickObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_PickObjectRayInWorld_walk_gaze_mode grasp_params_is_set(::bosdyn_msgs::msg::PickObjectRayInWorld::_grasp_params_is_set_type arg)
  {
    msg_.grasp_params_is_set = std::move(arg);
    return Init_PickObjectRayInWorld_walk_gaze_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectRayInWorld msg_;
};

class Init_PickObjectRayInWorld_grasp_params
{
public:
  explicit Init_PickObjectRayInWorld_grasp_params(::bosdyn_msgs::msg::PickObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_PickObjectRayInWorld_grasp_params_is_set grasp_params(::bosdyn_msgs::msg::PickObjectRayInWorld::_grasp_params_type arg)
  {
    msg_.grasp_params = std::move(arg);
    return Init_PickObjectRayInWorld_grasp_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectRayInWorld msg_;
};

class Init_PickObjectRayInWorld_frame_name
{
public:
  explicit Init_PickObjectRayInWorld_frame_name(::bosdyn_msgs::msg::PickObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_PickObjectRayInWorld_grasp_params frame_name(::bosdyn_msgs::msg::PickObjectRayInWorld::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_PickObjectRayInWorld_grasp_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectRayInWorld msg_;
};

class Init_PickObjectRayInWorld_ray_end_rt_frame_is_set
{
public:
  explicit Init_PickObjectRayInWorld_ray_end_rt_frame_is_set(::bosdyn_msgs::msg::PickObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_PickObjectRayInWorld_frame_name ray_end_rt_frame_is_set(::bosdyn_msgs::msg::PickObjectRayInWorld::_ray_end_rt_frame_is_set_type arg)
  {
    msg_.ray_end_rt_frame_is_set = std::move(arg);
    return Init_PickObjectRayInWorld_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectRayInWorld msg_;
};

class Init_PickObjectRayInWorld_ray_end_rt_frame
{
public:
  explicit Init_PickObjectRayInWorld_ray_end_rt_frame(::bosdyn_msgs::msg::PickObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_PickObjectRayInWorld_ray_end_rt_frame_is_set ray_end_rt_frame(::bosdyn_msgs::msg::PickObjectRayInWorld::_ray_end_rt_frame_type arg)
  {
    msg_.ray_end_rt_frame = std::move(arg);
    return Init_PickObjectRayInWorld_ray_end_rt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectRayInWorld msg_;
};

class Init_PickObjectRayInWorld_ray_start_rt_frame_is_set
{
public:
  explicit Init_PickObjectRayInWorld_ray_start_rt_frame_is_set(::bosdyn_msgs::msg::PickObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_PickObjectRayInWorld_ray_end_rt_frame ray_start_rt_frame_is_set(::bosdyn_msgs::msg::PickObjectRayInWorld::_ray_start_rt_frame_is_set_type arg)
  {
    msg_.ray_start_rt_frame_is_set = std::move(arg);
    return Init_PickObjectRayInWorld_ray_end_rt_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectRayInWorld msg_;
};

class Init_PickObjectRayInWorld_ray_start_rt_frame
{
public:
  Init_PickObjectRayInWorld_ray_start_rt_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickObjectRayInWorld_ray_start_rt_frame_is_set ray_start_rt_frame(::bosdyn_msgs::msg::PickObjectRayInWorld::_ray_start_rt_frame_type arg)
  {
    msg_.ray_start_rt_frame = std::move(arg);
    return Init_PickObjectRayInWorld_ray_start_rt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObjectRayInWorld msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PickObjectRayInWorld>()
{
  return bosdyn_msgs::msg::builder::Init_PickObjectRayInWorld_ray_start_rt_frame();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT_RAY_IN_WORLD__BUILDER_HPP_
