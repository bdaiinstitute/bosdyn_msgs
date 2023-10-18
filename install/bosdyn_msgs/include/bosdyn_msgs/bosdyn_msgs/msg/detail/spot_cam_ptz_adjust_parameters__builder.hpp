// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SpotCamPtzAdjustParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ_ADJUST_PARAMETERS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ_ADJUST_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/spot_cam_ptz_adjust_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SpotCamPtzAdjustParameters_waypoint_tform_body_is_set
{
public:
  explicit Init_SpotCamPtzAdjustParameters_waypoint_tform_body_is_set(::bosdyn_msgs::msg::SpotCamPtzAdjustParameters & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SpotCamPtzAdjustParameters waypoint_tform_body_is_set(::bosdyn_msgs::msg::SpotCamPtzAdjustParameters::_waypoint_tform_body_is_set_type arg)
  {
    msg_.waypoint_tform_body_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtzAdjustParameters msg_;
};

class Init_SpotCamPtzAdjustParameters_waypoint_tform_body
{
public:
  explicit Init_SpotCamPtzAdjustParameters_waypoint_tform_body(::bosdyn_msgs::msg::SpotCamPtzAdjustParameters & msg)
  : msg_(msg)
  {}
  Init_SpotCamPtzAdjustParameters_waypoint_tform_body_is_set waypoint_tform_body(::bosdyn_msgs::msg::SpotCamPtzAdjustParameters::_waypoint_tform_body_type arg)
  {
    msg_.waypoint_tform_body = std::move(arg);
    return Init_SpotCamPtzAdjustParameters_waypoint_tform_body_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtzAdjustParameters msg_;
};

class Init_SpotCamPtzAdjustParameters_waypoint_id
{
public:
  explicit Init_SpotCamPtzAdjustParameters_waypoint_id(::bosdyn_msgs::msg::SpotCamPtzAdjustParameters & msg)
  : msg_(msg)
  {}
  Init_SpotCamPtzAdjustParameters_waypoint_tform_body waypoint_id(::bosdyn_msgs::msg::SpotCamPtzAdjustParameters::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_SpotCamPtzAdjustParameters_waypoint_tform_body(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtzAdjustParameters msg_;
};

class Init_SpotCamPtzAdjustParameters_localization_varname
{
public:
  Init_SpotCamPtzAdjustParameters_localization_varname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpotCamPtzAdjustParameters_waypoint_id localization_varname(::bosdyn_msgs::msg::SpotCamPtzAdjustParameters::_localization_varname_type arg)
  {
    msg_.localization_varname = std::move(arg);
    return Init_SpotCamPtzAdjustParameters_waypoint_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtzAdjustParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SpotCamPtzAdjustParameters>()
{
  return bosdyn_msgs::msg::builder::Init_SpotCamPtzAdjustParameters_localization_varname();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ_ADJUST_PARAMETERS__BUILDER_HPP_
