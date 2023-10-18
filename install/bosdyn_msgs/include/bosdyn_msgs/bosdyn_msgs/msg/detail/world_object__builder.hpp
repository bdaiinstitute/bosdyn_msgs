// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WorldObject.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/world_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WorldObject_staircase_properties_is_set
{
public:
  explicit Init_WorldObject_staircase_properties_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WorldObject staircase_properties_is_set(::bosdyn_msgs::msg::WorldObject::_staircase_properties_is_set_type arg)
  {
    msg_.staircase_properties_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_staircase_properties
{
public:
  explicit Init_WorldObject_staircase_properties(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_staircase_properties_is_set staircase_properties(::bosdyn_msgs::msg::WorldObject::_staircase_properties_type arg)
  {
    msg_.staircase_properties = std::move(arg);
    return Init_WorldObject_staircase_properties_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_bounding_box_properties_is_set
{
public:
  explicit Init_WorldObject_bounding_box_properties_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_staircase_properties bounding_box_properties_is_set(::bosdyn_msgs::msg::WorldObject::_bounding_box_properties_is_set_type arg)
  {
    msg_.bounding_box_properties_is_set = std::move(arg);
    return Init_WorldObject_staircase_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_bounding_box_properties
{
public:
  explicit Init_WorldObject_bounding_box_properties(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_bounding_box_properties_is_set bounding_box_properties(::bosdyn_msgs::msg::WorldObject::_bounding_box_properties_type arg)
  {
    msg_.bounding_box_properties = std::move(arg);
    return Init_WorldObject_bounding_box_properties_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_ray_properties_is_set
{
public:
  explicit Init_WorldObject_ray_properties_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_bounding_box_properties ray_properties_is_set(::bosdyn_msgs::msg::WorldObject::_ray_properties_is_set_type arg)
  {
    msg_.ray_properties_is_set = std::move(arg);
    return Init_WorldObject_bounding_box_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_ray_properties
{
public:
  explicit Init_WorldObject_ray_properties(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_ray_properties_is_set ray_properties(::bosdyn_msgs::msg::WorldObject::_ray_properties_type arg)
  {
    msg_.ray_properties = std::move(arg);
    return Init_WorldObject_ray_properties_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_dock_properties_is_set
{
public:
  explicit Init_WorldObject_dock_properties_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_ray_properties dock_properties_is_set(::bosdyn_msgs::msg::WorldObject::_dock_properties_is_set_type arg)
  {
    msg_.dock_properties_is_set = std::move(arg);
    return Init_WorldObject_ray_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_dock_properties
{
public:
  explicit Init_WorldObject_dock_properties(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_dock_properties_is_set dock_properties(::bosdyn_msgs::msg::WorldObject::_dock_properties_type arg)
  {
    msg_.dock_properties = std::move(arg);
    return Init_WorldObject_dock_properties_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_image_properties_is_set
{
public:
  explicit Init_WorldObject_image_properties_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_dock_properties image_properties_is_set(::bosdyn_msgs::msg::WorldObject::_image_properties_is_set_type arg)
  {
    msg_.image_properties_is_set = std::move(arg);
    return Init_WorldObject_dock_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_image_properties
{
public:
  explicit Init_WorldObject_image_properties(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_image_properties_is_set image_properties(::bosdyn_msgs::msg::WorldObject::_image_properties_type arg)
  {
    msg_.image_properties = std::move(arg);
    return Init_WorldObject_image_properties_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_nogo_region_properties_is_set
{
public:
  explicit Init_WorldObject_nogo_region_properties_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_image_properties nogo_region_properties_is_set(::bosdyn_msgs::msg::WorldObject::_nogo_region_properties_is_set_type arg)
  {
    msg_.nogo_region_properties_is_set = std::move(arg);
    return Init_WorldObject_image_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_nogo_region_properties
{
public:
  explicit Init_WorldObject_nogo_region_properties(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_nogo_region_properties_is_set nogo_region_properties(::bosdyn_msgs::msg::WorldObject::_nogo_region_properties_type arg)
  {
    msg_.nogo_region_properties = std::move(arg);
    return Init_WorldObject_nogo_region_properties_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_apriltag_properties_is_set
{
public:
  explicit Init_WorldObject_apriltag_properties_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_nogo_region_properties apriltag_properties_is_set(::bosdyn_msgs::msg::WorldObject::_apriltag_properties_is_set_type arg)
  {
    msg_.apriltag_properties_is_set = std::move(arg);
    return Init_WorldObject_nogo_region_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_apriltag_properties
{
public:
  explicit Init_WorldObject_apriltag_properties(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_apriltag_properties_is_set apriltag_properties(::bosdyn_msgs::msg::WorldObject::_apriltag_properties_type arg)
  {
    msg_.apriltag_properties = std::move(arg);
    return Init_WorldObject_apriltag_properties_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_drawable_properties
{
public:
  explicit Init_WorldObject_drawable_properties(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_apriltag_properties drawable_properties(::bosdyn_msgs::msg::WorldObject::_drawable_properties_type arg)
  {
    msg_.drawable_properties = std::move(arg);
    return Init_WorldObject_apriltag_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_object_lifetime_is_set
{
public:
  explicit Init_WorldObject_object_lifetime_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_drawable_properties object_lifetime_is_set(::bosdyn_msgs::msg::WorldObject::_object_lifetime_is_set_type arg)
  {
    msg_.object_lifetime_is_set = std::move(arg);
    return Init_WorldObject_drawable_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_object_lifetime
{
public:
  explicit Init_WorldObject_object_lifetime(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_object_lifetime_is_set object_lifetime(::bosdyn_msgs::msg::WorldObject::_object_lifetime_type arg)
  {
    msg_.object_lifetime = std::move(arg);
    return Init_WorldObject_object_lifetime_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_transforms_snapshot_is_set
{
public:
  explicit Init_WorldObject_transforms_snapshot_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_object_lifetime transforms_snapshot_is_set(::bosdyn_msgs::msg::WorldObject::_transforms_snapshot_is_set_type arg)
  {
    msg_.transforms_snapshot_is_set = std::move(arg);
    return Init_WorldObject_object_lifetime(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_transforms_snapshot
{
public:
  explicit Init_WorldObject_transforms_snapshot(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_transforms_snapshot_is_set transforms_snapshot(::bosdyn_msgs::msg::WorldObject::_transforms_snapshot_type arg)
  {
    msg_.transforms_snapshot = std::move(arg);
    return Init_WorldObject_transforms_snapshot_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_acquisition_time_is_set
{
public:
  explicit Init_WorldObject_acquisition_time_is_set(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_transforms_snapshot acquisition_time_is_set(::bosdyn_msgs::msg::WorldObject::_acquisition_time_is_set_type arg)
  {
    msg_.acquisition_time_is_set = std::move(arg);
    return Init_WorldObject_transforms_snapshot(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_acquisition_time
{
public:
  explicit Init_WorldObject_acquisition_time(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_acquisition_time_is_set acquisition_time(::bosdyn_msgs::msg::WorldObject::_acquisition_time_type arg)
  {
    msg_.acquisition_time = std::move(arg);
    return Init_WorldObject_acquisition_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_name
{
public:
  explicit Init_WorldObject_name(::bosdyn_msgs::msg::WorldObject & msg)
  : msg_(msg)
  {}
  Init_WorldObject_acquisition_time name(::bosdyn_msgs::msg::WorldObject::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_WorldObject_acquisition_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

class Init_WorldObject_id
{
public:
  Init_WorldObject_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldObject_name id(::bosdyn_msgs::msg::WorldObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_WorldObject_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WorldObject>()
{
  return bosdyn_msgs::msg::builder::Init_WorldObject_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT__BUILDER_HPP_
