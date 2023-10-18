// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_annotations_is_set
{
public:
  explicit Init_Waypoint_annotations_is_set(::bosdyn_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Waypoint annotations_is_set(::bosdyn_msgs::msg::Waypoint::_annotations_is_set_type arg)
  {
    msg_.annotations_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_annotations
{
public:
  explicit Init_Waypoint_annotations(::bosdyn_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_annotations_is_set annotations(::bosdyn_msgs::msg::Waypoint::_annotations_type arg)
  {
    msg_.annotations = std::move(arg);
    return Init_Waypoint_annotations_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_waypoint_tform_ko_is_set
{
public:
  explicit Init_Waypoint_waypoint_tform_ko_is_set(::bosdyn_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_annotations waypoint_tform_ko_is_set(::bosdyn_msgs::msg::Waypoint::_waypoint_tform_ko_is_set_type arg)
  {
    msg_.waypoint_tform_ko_is_set = std::move(arg);
    return Init_Waypoint_annotations(msg_);
  }

private:
  ::bosdyn_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_waypoint_tform_ko
{
public:
  explicit Init_Waypoint_waypoint_tform_ko(::bosdyn_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_waypoint_tform_ko_is_set waypoint_tform_ko(::bosdyn_msgs::msg::Waypoint::_waypoint_tform_ko_type arg)
  {
    msg_.waypoint_tform_ko = std::move(arg);
    return Init_Waypoint_waypoint_tform_ko_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_snapshot_id
{
public:
  explicit Init_Waypoint_snapshot_id(::bosdyn_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_waypoint_tform_ko snapshot_id(::bosdyn_msgs::msg::Waypoint::_snapshot_id_type arg)
  {
    msg_.snapshot_id = std::move(arg);
    return Init_Waypoint_waypoint_tform_ko(msg_);
  }

private:
  ::bosdyn_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_id
{
public:
  Init_Waypoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_snapshot_id id(::bosdyn_msgs::msg::Waypoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Waypoint_snapshot_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Waypoint>()
{
  return bosdyn_msgs::msg::builder::Init_Waypoint_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
