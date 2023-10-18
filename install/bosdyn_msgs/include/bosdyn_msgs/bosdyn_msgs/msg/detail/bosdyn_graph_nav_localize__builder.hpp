// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BosdynGraphNavLocalize.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_LOCALIZE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_LOCALIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bosdyn_graph_nav_localize__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BosdynGraphNavLocalize_response_bb_key
{
public:
  explicit Init_BosdynGraphNavLocalize_response_bb_key(::bosdyn_msgs::msg::BosdynGraphNavLocalize & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BosdynGraphNavLocalize response_bb_key(::bosdyn_msgs::msg::BosdynGraphNavLocalize::_response_bb_key_type arg)
  {
    msg_.response_bb_key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavLocalize msg_;
};

class Init_BosdynGraphNavLocalize_allow_bad_quality
{
public:
  explicit Init_BosdynGraphNavLocalize_allow_bad_quality(::bosdyn_msgs::msg::BosdynGraphNavLocalize & msg)
  : msg_(msg)
  {}
  Init_BosdynGraphNavLocalize_response_bb_key allow_bad_quality(::bosdyn_msgs::msg::BosdynGraphNavLocalize::_allow_bad_quality_type arg)
  {
    msg_.allow_bad_quality = std::move(arg);
    return Init_BosdynGraphNavLocalize_response_bb_key(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavLocalize msg_;
};

class Init_BosdynGraphNavLocalize_localization_request_is_set
{
public:
  explicit Init_BosdynGraphNavLocalize_localization_request_is_set(::bosdyn_msgs::msg::BosdynGraphNavLocalize & msg)
  : msg_(msg)
  {}
  Init_BosdynGraphNavLocalize_allow_bad_quality localization_request_is_set(::bosdyn_msgs::msg::BosdynGraphNavLocalize::_localization_request_is_set_type arg)
  {
    msg_.localization_request_is_set = std::move(arg);
    return Init_BosdynGraphNavLocalize_allow_bad_quality(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavLocalize msg_;
};

class Init_BosdynGraphNavLocalize_localization_request
{
public:
  explicit Init_BosdynGraphNavLocalize_localization_request(::bosdyn_msgs::msg::BosdynGraphNavLocalize & msg)
  : msg_(msg)
  {}
  Init_BosdynGraphNavLocalize_localization_request_is_set localization_request(::bosdyn_msgs::msg::BosdynGraphNavLocalize::_localization_request_type arg)
  {
    msg_.localization_request = std::move(arg);
    return Init_BosdynGraphNavLocalize_localization_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavLocalize msg_;
};

class Init_BosdynGraphNavLocalize_host
{
public:
  explicit Init_BosdynGraphNavLocalize_host(::bosdyn_msgs::msg::BosdynGraphNavLocalize & msg)
  : msg_(msg)
  {}
  Init_BosdynGraphNavLocalize_localization_request host(::bosdyn_msgs::msg::BosdynGraphNavLocalize::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_BosdynGraphNavLocalize_localization_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavLocalize msg_;
};

class Init_BosdynGraphNavLocalize_service_name
{
public:
  Init_BosdynGraphNavLocalize_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BosdynGraphNavLocalize_host service_name(::bosdyn_msgs::msg::BosdynGraphNavLocalize::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_BosdynGraphNavLocalize_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavLocalize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BosdynGraphNavLocalize>()
{
  return bosdyn_msgs::msg::builder::Init_BosdynGraphNavLocalize_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_LOCALIZE__BUILDER_HPP_
