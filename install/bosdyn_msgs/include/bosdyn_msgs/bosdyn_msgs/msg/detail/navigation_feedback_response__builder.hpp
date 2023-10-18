// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/navigation_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigationFeedbackResponse_stuck_reason
{
public:
  explicit Init_NavigationFeedbackResponse_stuck_reason(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NavigationFeedbackResponse stuck_reason(::bosdyn_msgs::msg::NavigationFeedbackResponse::_stuck_reason_type arg)
  {
    msg_.stuck_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_blockage_status
{
public:
  explicit Init_NavigationFeedbackResponse_blockage_status(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_stuck_reason blockage_status(::bosdyn_msgs::msg::NavigationFeedbackResponse::_blockage_status_type arg)
  {
    msg_.blockage_status = std::move(arg);
    return Init_NavigationFeedbackResponse_stuck_reason(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_route_following_status
{
public:
  explicit Init_NavigationFeedbackResponse_route_following_status(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_blockage_status route_following_status(::bosdyn_msgs::msg::NavigationFeedbackResponse::_route_following_status_type arg)
  {
    msg_.route_following_status = std::move(arg);
    return Init_NavigationFeedbackResponse_blockage_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_active_region_information
{
public:
  explicit Init_NavigationFeedbackResponse_active_region_information(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_route_following_status active_region_information(::bosdyn_msgs::msg::NavigationFeedbackResponse::_active_region_information_type arg)
  {
    msg_.active_region_information = std::move(arg);
    return Init_NavigationFeedbackResponse_route_following_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_path_following_mode
{
public:
  explicit Init_NavigationFeedbackResponse_path_following_mode(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_active_region_information path_following_mode(::bosdyn_msgs::msg::NavigationFeedbackResponse::_path_following_mode_type arg)
  {
    msg_.path_following_mode = std::move(arg);
    return Init_NavigationFeedbackResponse_active_region_information(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_body_movement_status
{
public:
  explicit Init_NavigationFeedbackResponse_body_movement_status(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_path_following_mode body_movement_status(::bosdyn_msgs::msg::NavigationFeedbackResponse::_body_movement_status_type arg)
  {
    msg_.body_movement_status = std::move(arg);
    return Init_NavigationFeedbackResponse_path_following_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_last_ko_tform_goal_is_set
{
public:
  explicit Init_NavigationFeedbackResponse_last_ko_tform_goal_is_set(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_body_movement_status last_ko_tform_goal_is_set(::bosdyn_msgs::msg::NavigationFeedbackResponse::_last_ko_tform_goal_is_set_type arg)
  {
    msg_.last_ko_tform_goal_is_set = std::move(arg);
    return Init_NavigationFeedbackResponse_body_movement_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_last_ko_tform_goal
{
public:
  explicit Init_NavigationFeedbackResponse_last_ko_tform_goal(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_last_ko_tform_goal_is_set last_ko_tform_goal(::bosdyn_msgs::msg::NavigationFeedbackResponse::_last_ko_tform_goal_type arg)
  {
    msg_.last_ko_tform_goal = std::move(arg);
    return Init_NavigationFeedbackResponse_last_ko_tform_goal_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_command_id
{
public:
  explicit Init_NavigationFeedbackResponse_command_id(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_last_ko_tform_goal command_id(::bosdyn_msgs::msg::NavigationFeedbackResponse::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_NavigationFeedbackResponse_last_ko_tform_goal(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_remaining_route_is_set
{
public:
  explicit Init_NavigationFeedbackResponse_remaining_route_is_set(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_command_id remaining_route_is_set(::bosdyn_msgs::msg::NavigationFeedbackResponse::_remaining_route_is_set_type arg)
  {
    msg_.remaining_route_is_set = std::move(arg);
    return Init_NavigationFeedbackResponse_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_remaining_route
{
public:
  explicit Init_NavigationFeedbackResponse_remaining_route(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_remaining_route_is_set remaining_route(::bosdyn_msgs::msg::NavigationFeedbackResponse::_remaining_route_type arg)
  {
    msg_.remaining_route = std::move(arg);
    return Init_NavigationFeedbackResponse_remaining_route_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_area_callback_errors
{
public:
  explicit Init_NavigationFeedbackResponse_area_callback_errors(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_remaining_route area_callback_errors(::bosdyn_msgs::msg::NavigationFeedbackResponse::_area_callback_errors_type arg)
  {
    msg_.area_callback_errors = std::move(arg);
    return Init_NavigationFeedbackResponse_remaining_route(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_impaired_state_is_set
{
public:
  explicit Init_NavigationFeedbackResponse_impaired_state_is_set(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_area_callback_errors impaired_state_is_set(::bosdyn_msgs::msg::NavigationFeedbackResponse::_impaired_state_is_set_type arg)
  {
    msg_.impaired_state_is_set = std::move(arg);
    return Init_NavigationFeedbackResponse_area_callback_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_impaired_state
{
public:
  explicit Init_NavigationFeedbackResponse_impaired_state(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_impaired_state_is_set impaired_state(::bosdyn_msgs::msg::NavigationFeedbackResponse::_impaired_state_type arg)
  {
    msg_.impaired_state = std::move(arg);
    return Init_NavigationFeedbackResponse_impaired_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_status
{
public:
  explicit Init_NavigationFeedbackResponse_status(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_impaired_state status(::bosdyn_msgs::msg::NavigationFeedbackResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigationFeedbackResponse_impaired_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_header_is_set
{
public:
  explicit Init_NavigationFeedbackResponse_header_is_set(::bosdyn_msgs::msg::NavigationFeedbackResponse & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponse_status header_is_set(::bosdyn_msgs::msg::NavigationFeedbackResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_NavigationFeedbackResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

class Init_NavigationFeedbackResponse_header
{
public:
  Init_NavigationFeedbackResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationFeedbackResponse_header_is_set header(::bosdyn_msgs::msg::NavigationFeedbackResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavigationFeedbackResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NavigationFeedbackResponse>()
{
  return bosdyn_msgs::msg::builder::Init_NavigationFeedbackResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE__BUILDER_HPP_
