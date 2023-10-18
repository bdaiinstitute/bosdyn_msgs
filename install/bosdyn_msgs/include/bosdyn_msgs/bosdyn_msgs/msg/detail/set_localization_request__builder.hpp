// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_localization_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetLocalizationRequest_refinement
{
public:
  explicit Init_SetLocalizationRequest_refinement(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetLocalizationRequest refinement(::bosdyn_msgs::msg::SetLocalizationRequest::_refinement_type arg)
  {
    msg_.refinement = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_restrict_fiducial_detections_to_target_waypoint
{
public:
  explicit Init_SetLocalizationRequest_restrict_fiducial_detections_to_target_waypoint(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_refinement restrict_fiducial_detections_to_target_waypoint(::bosdyn_msgs::msg::SetLocalizationRequest::_restrict_fiducial_detections_to_target_waypoint_type arg)
  {
    msg_.restrict_fiducial_detections_to_target_waypoint = std::move(arg);
    return Init_SetLocalizationRequest_refinement(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_do_ambiguity_check
{
public:
  explicit Init_SetLocalizationRequest_do_ambiguity_check(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_restrict_fiducial_detections_to_target_waypoint do_ambiguity_check(::bosdyn_msgs::msg::SetLocalizationRequest::_do_ambiguity_check_type arg)
  {
    msg_.do_ambiguity_check = std::move(arg);
    return Init_SetLocalizationRequest_restrict_fiducial_detections_to_target_waypoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_use_fiducial_id
{
public:
  explicit Init_SetLocalizationRequest_use_fiducial_id(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_do_ambiguity_check use_fiducial_id(::bosdyn_msgs::msg::SetLocalizationRequest::_use_fiducial_id_type arg)
  {
    msg_.use_fiducial_id = std::move(arg);
    return Init_SetLocalizationRequest_do_ambiguity_check(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_fiducial_init
{
public:
  explicit Init_SetLocalizationRequest_fiducial_init(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_use_fiducial_id fiducial_init(::bosdyn_msgs::msg::SetLocalizationRequest::_fiducial_init_type arg)
  {
    msg_.fiducial_init = std::move(arg);
    return Init_SetLocalizationRequest_use_fiducial_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_max_yaw
{
public:
  explicit Init_SetLocalizationRequest_max_yaw(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_fiducial_init max_yaw(::bosdyn_msgs::msg::SetLocalizationRequest::_max_yaw_type arg)
  {
    msg_.max_yaw = std::move(arg);
    return Init_SetLocalizationRequest_fiducial_init(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_max_distance
{
public:
  explicit Init_SetLocalizationRequest_max_distance(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_max_yaw max_distance(::bosdyn_msgs::msg::SetLocalizationRequest::_max_distance_type arg)
  {
    msg_.max_distance = std::move(arg);
    return Init_SetLocalizationRequest_max_yaw(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_ko_tform_body_is_set
{
public:
  explicit Init_SetLocalizationRequest_ko_tform_body_is_set(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_max_distance ko_tform_body_is_set(::bosdyn_msgs::msg::SetLocalizationRequest::_ko_tform_body_is_set_type arg)
  {
    msg_.ko_tform_body_is_set = std::move(arg);
    return Init_SetLocalizationRequest_max_distance(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_ko_tform_body
{
public:
  explicit Init_SetLocalizationRequest_ko_tform_body(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_ko_tform_body_is_set ko_tform_body(::bosdyn_msgs::msg::SetLocalizationRequest::_ko_tform_body_type arg)
  {
    msg_.ko_tform_body = std::move(arg);
    return Init_SetLocalizationRequest_ko_tform_body_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_initial_guess_is_set
{
public:
  explicit Init_SetLocalizationRequest_initial_guess_is_set(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_ko_tform_body initial_guess_is_set(::bosdyn_msgs::msg::SetLocalizationRequest::_initial_guess_is_set_type arg)
  {
    msg_.initial_guess_is_set = std::move(arg);
    return Init_SetLocalizationRequest_ko_tform_body(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_initial_guess
{
public:
  explicit Init_SetLocalizationRequest_initial_guess(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_initial_guess_is_set initial_guess(::bosdyn_msgs::msg::SetLocalizationRequest::_initial_guess_type arg)
  {
    msg_.initial_guess = std::move(arg);
    return Init_SetLocalizationRequest_initial_guess_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_header_is_set
{
public:
  explicit Init_SetLocalizationRequest_header_is_set(::bosdyn_msgs::msg::SetLocalizationRequest & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequest_initial_guess header_is_set(::bosdyn_msgs::msg::SetLocalizationRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetLocalizationRequest_initial_guess(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

class Init_SetLocalizationRequest_header
{
public:
  Init_SetLocalizationRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocalizationRequest_header_is_set header(::bosdyn_msgs::msg::SetLocalizationRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetLocalizationRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetLocalizationRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetLocalizationRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST__BUILDER_HPP_
