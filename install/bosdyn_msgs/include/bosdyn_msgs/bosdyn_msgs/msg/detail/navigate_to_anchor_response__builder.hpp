// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NavigateToAnchorResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_ANCHOR_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_ANCHOR_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/navigate_to_anchor_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigateToAnchorResponse_area_callback_error_is_set
{
public:
  explicit Init_NavigateToAnchorResponse_area_callback_error_is_set(::bosdyn_msgs::msg::NavigateToAnchorResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NavigateToAnchorResponse area_callback_error_is_set(::bosdyn_msgs::msg::NavigateToAnchorResponse::_area_callback_error_is_set_type arg)
  {
    msg_.area_callback_error_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

class Init_NavigateToAnchorResponse_area_callback_error
{
public:
  explicit Init_NavigateToAnchorResponse_area_callback_error(::bosdyn_msgs::msg::NavigateToAnchorResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorResponse_area_callback_error_is_set area_callback_error(::bosdyn_msgs::msg::NavigateToAnchorResponse::_area_callback_error_type arg)
  {
    msg_.area_callback_error = std::move(arg);
    return Init_NavigateToAnchorResponse_area_callback_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

class Init_NavigateToAnchorResponse_error_waypoint_ids
{
public:
  explicit Init_NavigateToAnchorResponse_error_waypoint_ids(::bosdyn_msgs::msg::NavigateToAnchorResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorResponse_area_callback_error error_waypoint_ids(::bosdyn_msgs::msg::NavigateToAnchorResponse::_error_waypoint_ids_type arg)
  {
    msg_.error_waypoint_ids = std::move(arg);
    return Init_NavigateToAnchorResponse_area_callback_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

class Init_NavigateToAnchorResponse_command_id
{
public:
  explicit Init_NavigateToAnchorResponse_command_id(::bosdyn_msgs::msg::NavigateToAnchorResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorResponse_error_waypoint_ids command_id(::bosdyn_msgs::msg::NavigateToAnchorResponse::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_NavigateToAnchorResponse_error_waypoint_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

class Init_NavigateToAnchorResponse_impaired_state_is_set
{
public:
  explicit Init_NavigateToAnchorResponse_impaired_state_is_set(::bosdyn_msgs::msg::NavigateToAnchorResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorResponse_command_id impaired_state_is_set(::bosdyn_msgs::msg::NavigateToAnchorResponse::_impaired_state_is_set_type arg)
  {
    msg_.impaired_state_is_set = std::move(arg);
    return Init_NavigateToAnchorResponse_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

class Init_NavigateToAnchorResponse_impaired_state
{
public:
  explicit Init_NavigateToAnchorResponse_impaired_state(::bosdyn_msgs::msg::NavigateToAnchorResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorResponse_impaired_state_is_set impaired_state(::bosdyn_msgs::msg::NavigateToAnchorResponse::_impaired_state_type arg)
  {
    msg_.impaired_state = std::move(arg);
    return Init_NavigateToAnchorResponse_impaired_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

class Init_NavigateToAnchorResponse_status
{
public:
  explicit Init_NavigateToAnchorResponse_status(::bosdyn_msgs::msg::NavigateToAnchorResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorResponse_impaired_state status(::bosdyn_msgs::msg::NavigateToAnchorResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateToAnchorResponse_impaired_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

class Init_NavigateToAnchorResponse_lease_use_results
{
public:
  explicit Init_NavigateToAnchorResponse_lease_use_results(::bosdyn_msgs::msg::NavigateToAnchorResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorResponse_status lease_use_results(::bosdyn_msgs::msg::NavigateToAnchorResponse::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return Init_NavigateToAnchorResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

class Init_NavigateToAnchorResponse_header_is_set
{
public:
  explicit Init_NavigateToAnchorResponse_header_is_set(::bosdyn_msgs::msg::NavigateToAnchorResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToAnchorResponse_lease_use_results header_is_set(::bosdyn_msgs::msg::NavigateToAnchorResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_NavigateToAnchorResponse_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

class Init_NavigateToAnchorResponse_header
{
public:
  Init_NavigateToAnchorResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToAnchorResponse_header_is_set header(::bosdyn_msgs::msg::NavigateToAnchorResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavigateToAnchorResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToAnchorResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NavigateToAnchorResponse>()
{
  return bosdyn_msgs::msg::builder::Init_NavigateToAnchorResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_ANCHOR_RESPONSE__BUILDER_HPP_
