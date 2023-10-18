// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapperSpotCamAlignment_target_sensor_ids
{
public:
  explicit Init_ActionWrapperSpotCamAlignment_target_sensor_ids(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment target_sensor_ids(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment::_target_sensor_ids_type arg)
  {
    msg_.target_sensor_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment msg_;
};

class Init_ActionWrapperSpotCamAlignment_final_zoom
{
public:
  explicit Init_ActionWrapperSpotCamAlignment_final_zoom(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperSpotCamAlignment_target_sensor_ids final_zoom(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment::_final_zoom_type arg)
  {
    msg_.final_zoom = std::move(arg);
    return Init_ActionWrapperSpotCamAlignment_target_sensor_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment msg_;
};

class Init_ActionWrapperSpotCamAlignment_target_tform_sensor_is_set
{
public:
  explicit Init_ActionWrapperSpotCamAlignment_target_tform_sensor_is_set(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperSpotCamAlignment_final_zoom target_tform_sensor_is_set(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment::_target_tform_sensor_is_set_type arg)
  {
    msg_.target_tform_sensor_is_set = std::move(arg);
    return Init_ActionWrapperSpotCamAlignment_final_zoom(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment msg_;
};

class Init_ActionWrapperSpotCamAlignment_target_tform_sensor
{
public:
  explicit Init_ActionWrapperSpotCamAlignment_target_tform_sensor(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperSpotCamAlignment_target_tform_sensor_is_set target_tform_sensor(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment::_target_tform_sensor_type arg)
  {
    msg_.target_tform_sensor = std::move(arg);
    return Init_ActionWrapperSpotCamAlignment_target_tform_sensor_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment msg_;
};

class Init_ActionWrapperSpotCamAlignment_alignments
{
public:
  Init_ActionWrapperSpotCamAlignment_alignments()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionWrapperSpotCamAlignment_target_tform_sensor alignments(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment::_alignments_type arg)
  {
    msg_.alignments = std::move(arg);
    return Init_ActionWrapperSpotCamAlignment_target_tform_sensor(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapperSpotCamAlignment>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapperSpotCamAlignment_alignments();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT__BUILDER_HPP_
