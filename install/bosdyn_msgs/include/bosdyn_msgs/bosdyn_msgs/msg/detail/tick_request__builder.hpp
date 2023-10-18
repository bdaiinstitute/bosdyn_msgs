// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TickRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TICK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TICK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/tick_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TickRequest_group_name
{
public:
  explicit Init_TickRequest_group_name(::bosdyn_msgs::msg::TickRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TickRequest group_name(::bosdyn_msgs::msg::TickRequest::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickRequest msg_;
};

class Init_TickRequest_params_is_set
{
public:
  explicit Init_TickRequest_params_is_set(::bosdyn_msgs::msg::TickRequest & msg)
  : msg_(msg)
  {}
  Init_TickRequest_group_name params_is_set(::bosdyn_msgs::msg::TickRequest::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return Init_TickRequest_group_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickRequest msg_;
};

class Init_TickRequest_params
{
public:
  explicit Init_TickRequest_params(::bosdyn_msgs::msg::TickRequest & msg)
  : msg_(msg)
  {}
  Init_TickRequest_params_is_set params(::bosdyn_msgs::msg::TickRequest::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_TickRequest_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickRequest msg_;
};

class Init_TickRequest_inputs
{
public:
  explicit Init_TickRequest_inputs(::bosdyn_msgs::msg::TickRequest & msg)
  : msg_(msg)
  {}
  Init_TickRequest_params inputs(::bosdyn_msgs::msg::TickRequest::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return Init_TickRequest_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickRequest msg_;
};

class Init_TickRequest_leases
{
public:
  explicit Init_TickRequest_leases(::bosdyn_msgs::msg::TickRequest & msg)
  : msg_(msg)
  {}
  Init_TickRequest_inputs leases(::bosdyn_msgs::msg::TickRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return Init_TickRequest_inputs(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickRequest msg_;
};

class Init_TickRequest_session_id
{
public:
  explicit Init_TickRequest_session_id(::bosdyn_msgs::msg::TickRequest & msg)
  : msg_(msg)
  {}
  Init_TickRequest_leases session_id(::bosdyn_msgs::msg::TickRequest::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_TickRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickRequest msg_;
};

class Init_TickRequest_header_is_set
{
public:
  explicit Init_TickRequest_header_is_set(::bosdyn_msgs::msg::TickRequest & msg)
  : msg_(msg)
  {}
  Init_TickRequest_session_id header_is_set(::bosdyn_msgs::msg::TickRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TickRequest_session_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickRequest msg_;
};

class Init_TickRequest_header
{
public:
  Init_TickRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TickRequest_header_is_set header(::bosdyn_msgs::msg::TickRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TickRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TickRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TickRequest>()
{
  return bosdyn_msgs::msg::builder::Init_TickRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TICK_REQUEST__BUILDER_HPP_
