// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NavigateToResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/navigate_to_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigateToResponse_area_callback_error_is_set
{
public:
  explicit Init_NavigateToResponse_area_callback_error_is_set(::bosdyn_msgs::msg::NavigateToResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NavigateToResponse area_callback_error_is_set(::bosdyn_msgs::msg::NavigateToResponse::_area_callback_error_is_set_type arg)
  {
    msg_.area_callback_error_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

class Init_NavigateToResponse_area_callback_error
{
public:
  explicit Init_NavigateToResponse_area_callback_error(::bosdyn_msgs::msg::NavigateToResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToResponse_area_callback_error_is_set area_callback_error(::bosdyn_msgs::msg::NavigateToResponse::_area_callback_error_type arg)
  {
    msg_.area_callback_error = std::move(arg);
    return Init_NavigateToResponse_area_callback_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

class Init_NavigateToResponse_error_waypoint_ids
{
public:
  explicit Init_NavigateToResponse_error_waypoint_ids(::bosdyn_msgs::msg::NavigateToResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToResponse_area_callback_error error_waypoint_ids(::bosdyn_msgs::msg::NavigateToResponse::_error_waypoint_ids_type arg)
  {
    msg_.error_waypoint_ids = std::move(arg);
    return Init_NavigateToResponse_area_callback_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

class Init_NavigateToResponse_command_id
{
public:
  explicit Init_NavigateToResponse_command_id(::bosdyn_msgs::msg::NavigateToResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToResponse_error_waypoint_ids command_id(::bosdyn_msgs::msg::NavigateToResponse::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_NavigateToResponse_error_waypoint_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

class Init_NavigateToResponse_impaired_state_is_set
{
public:
  explicit Init_NavigateToResponse_impaired_state_is_set(::bosdyn_msgs::msg::NavigateToResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToResponse_command_id impaired_state_is_set(::bosdyn_msgs::msg::NavigateToResponse::_impaired_state_is_set_type arg)
  {
    msg_.impaired_state_is_set = std::move(arg);
    return Init_NavigateToResponse_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

class Init_NavigateToResponse_impaired_state
{
public:
  explicit Init_NavigateToResponse_impaired_state(::bosdyn_msgs::msg::NavigateToResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToResponse_impaired_state_is_set impaired_state(::bosdyn_msgs::msg::NavigateToResponse::_impaired_state_type arg)
  {
    msg_.impaired_state = std::move(arg);
    return Init_NavigateToResponse_impaired_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

class Init_NavigateToResponse_status
{
public:
  explicit Init_NavigateToResponse_status(::bosdyn_msgs::msg::NavigateToResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToResponse_impaired_state status(::bosdyn_msgs::msg::NavigateToResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateToResponse_impaired_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

class Init_NavigateToResponse_lease_use_results
{
public:
  explicit Init_NavigateToResponse_lease_use_results(::bosdyn_msgs::msg::NavigateToResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToResponse_status lease_use_results(::bosdyn_msgs::msg::NavigateToResponse::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return Init_NavigateToResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

class Init_NavigateToResponse_header_is_set
{
public:
  explicit Init_NavigateToResponse_header_is_set(::bosdyn_msgs::msg::NavigateToResponse & msg)
  : msg_(msg)
  {}
  Init_NavigateToResponse_lease_use_results header_is_set(::bosdyn_msgs::msg::NavigateToResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_NavigateToResponse_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

class Init_NavigateToResponse_header
{
public:
  Init_NavigateToResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateToResponse_header_is_set header(::bosdyn_msgs::msg::NavigateToResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavigateToResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigateToResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NavigateToResponse>()
{
  return bosdyn_msgs::msg::builder::Init_NavigateToResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_RESPONSE__BUILDER_HPP_
