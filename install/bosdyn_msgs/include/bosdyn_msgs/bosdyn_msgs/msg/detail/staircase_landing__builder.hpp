// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StaircaseLanding.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_LANDING__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_LANDING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/staircase_landing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StaircaseLanding_landing_extent_y
{
public:
  explicit Init_StaircaseLanding_landing_extent_y(::bosdyn_msgs::msg::StaircaseLanding & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StaircaseLanding landing_extent_y(::bosdyn_msgs::msg::StaircaseLanding::_landing_extent_y_type arg)
  {
    msg_.landing_extent_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseLanding msg_;
};

class Init_StaircaseLanding_landing_extent_x
{
public:
  explicit Init_StaircaseLanding_landing_extent_x(::bosdyn_msgs::msg::StaircaseLanding & msg)
  : msg_(msg)
  {}
  Init_StaircaseLanding_landing_extent_y landing_extent_x(::bosdyn_msgs::msg::StaircaseLanding::_landing_extent_x_type arg)
  {
    msg_.landing_extent_x = std::move(arg);
    return Init_StaircaseLanding_landing_extent_y(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseLanding msg_;
};

class Init_StaircaseLanding_stairs_tform_landing_center_is_set
{
public:
  explicit Init_StaircaseLanding_stairs_tform_landing_center_is_set(::bosdyn_msgs::msg::StaircaseLanding & msg)
  : msg_(msg)
  {}
  Init_StaircaseLanding_landing_extent_x stairs_tform_landing_center_is_set(::bosdyn_msgs::msg::StaircaseLanding::_stairs_tform_landing_center_is_set_type arg)
  {
    msg_.stairs_tform_landing_center_is_set = std::move(arg);
    return Init_StaircaseLanding_landing_extent_x(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseLanding msg_;
};

class Init_StaircaseLanding_stairs_tform_landing_center
{
public:
  Init_StaircaseLanding_stairs_tform_landing_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaircaseLanding_stairs_tform_landing_center_is_set stairs_tform_landing_center(::bosdyn_msgs::msg::StaircaseLanding::_stairs_tform_landing_center_type arg)
  {
    msg_.stairs_tform_landing_center = std::move(arg);
    return Init_StaircaseLanding_stairs_tform_landing_center_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseLanding msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StaircaseLanding>()
{
  return bosdyn_msgs::msg::builder::Init_StaircaseLanding_stairs_tform_landing_center();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_LANDING__BUILDER_HPP_
