// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WalkToObjectRayInWorld.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_RAY_IN_WORLD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_RAY_IN_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/walk_to_object_ray_in_world__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WalkToObjectRayInWorld_offset_distance_is_set
{
public:
  explicit Init_WalkToObjectRayInWorld_offset_distance_is_set(::bosdyn_msgs::msg::WalkToObjectRayInWorld & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WalkToObjectRayInWorld offset_distance_is_set(::bosdyn_msgs::msg::WalkToObjectRayInWorld::_offset_distance_is_set_type arg)
  {
    msg_.offset_distance_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WalkToObjectRayInWorld msg_;
};

class Init_WalkToObjectRayInWorld_offset_distance
{
public:
  explicit Init_WalkToObjectRayInWorld_offset_distance(::bosdyn_msgs::msg::WalkToObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_WalkToObjectRayInWorld_offset_distance_is_set offset_distance(::bosdyn_msgs::msg::WalkToObjectRayInWorld::_offset_distance_type arg)
  {
    msg_.offset_distance = std::move(arg);
    return Init_WalkToObjectRayInWorld_offset_distance_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WalkToObjectRayInWorld msg_;
};

class Init_WalkToObjectRayInWorld_frame_name
{
public:
  explicit Init_WalkToObjectRayInWorld_frame_name(::bosdyn_msgs::msg::WalkToObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_WalkToObjectRayInWorld_offset_distance frame_name(::bosdyn_msgs::msg::WalkToObjectRayInWorld::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_WalkToObjectRayInWorld_offset_distance(msg_);
  }

private:
  ::bosdyn_msgs::msg::WalkToObjectRayInWorld msg_;
};

class Init_WalkToObjectRayInWorld_ray_end_rt_frame_is_set
{
public:
  explicit Init_WalkToObjectRayInWorld_ray_end_rt_frame_is_set(::bosdyn_msgs::msg::WalkToObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_WalkToObjectRayInWorld_frame_name ray_end_rt_frame_is_set(::bosdyn_msgs::msg::WalkToObjectRayInWorld::_ray_end_rt_frame_is_set_type arg)
  {
    msg_.ray_end_rt_frame_is_set = std::move(arg);
    return Init_WalkToObjectRayInWorld_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::WalkToObjectRayInWorld msg_;
};

class Init_WalkToObjectRayInWorld_ray_end_rt_frame
{
public:
  explicit Init_WalkToObjectRayInWorld_ray_end_rt_frame(::bosdyn_msgs::msg::WalkToObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_WalkToObjectRayInWorld_ray_end_rt_frame_is_set ray_end_rt_frame(::bosdyn_msgs::msg::WalkToObjectRayInWorld::_ray_end_rt_frame_type arg)
  {
    msg_.ray_end_rt_frame = std::move(arg);
    return Init_WalkToObjectRayInWorld_ray_end_rt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WalkToObjectRayInWorld msg_;
};

class Init_WalkToObjectRayInWorld_ray_start_rt_frame_is_set
{
public:
  explicit Init_WalkToObjectRayInWorld_ray_start_rt_frame_is_set(::bosdyn_msgs::msg::WalkToObjectRayInWorld & msg)
  : msg_(msg)
  {}
  Init_WalkToObjectRayInWorld_ray_end_rt_frame ray_start_rt_frame_is_set(::bosdyn_msgs::msg::WalkToObjectRayInWorld::_ray_start_rt_frame_is_set_type arg)
  {
    msg_.ray_start_rt_frame_is_set = std::move(arg);
    return Init_WalkToObjectRayInWorld_ray_end_rt_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::WalkToObjectRayInWorld msg_;
};

class Init_WalkToObjectRayInWorld_ray_start_rt_frame
{
public:
  Init_WalkToObjectRayInWorld_ray_start_rt_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WalkToObjectRayInWorld_ray_start_rt_frame_is_set ray_start_rt_frame(::bosdyn_msgs::msg::WalkToObjectRayInWorld::_ray_start_rt_frame_type arg)
  {
    msg_.ray_start_rt_frame = std::move(arg);
    return Init_WalkToObjectRayInWorld_ray_start_rt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WalkToObjectRayInWorld msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WalkToObjectRayInWorld>()
{
  return bosdyn_msgs::msg::builder::Init_WalkToObjectRayInWorld_ray_start_rt_frame();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WALK_TO_OBJECT_RAY_IN_WORLD__BUILDER_HPP_
