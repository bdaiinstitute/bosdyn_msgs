// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetInfoResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_INFO_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_INFO_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_info_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetInfoResponse_mission_info_is_set
{
public:
  explicit Init_GetInfoResponse_mission_info_is_set(::bosdyn_msgs::msg::GetInfoResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetInfoResponse mission_info_is_set(::bosdyn_msgs::msg::GetInfoResponse::_mission_info_is_set_type arg)
  {
    msg_.mission_info_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetInfoResponse msg_;
};

class Init_GetInfoResponse_mission_info
{
public:
  explicit Init_GetInfoResponse_mission_info(::bosdyn_msgs::msg::GetInfoResponse & msg)
  : msg_(msg)
  {}
  Init_GetInfoResponse_mission_info_is_set mission_info(::bosdyn_msgs::msg::GetInfoResponse::_mission_info_type arg)
  {
    msg_.mission_info = std::move(arg);
    return Init_GetInfoResponse_mission_info_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetInfoResponse msg_;
};

class Init_GetInfoResponse_header_is_set
{
public:
  explicit Init_GetInfoResponse_header_is_set(::bosdyn_msgs::msg::GetInfoResponse & msg)
  : msg_(msg)
  {}
  Init_GetInfoResponse_mission_info header_is_set(::bosdyn_msgs::msg::GetInfoResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetInfoResponse_mission_info(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetInfoResponse msg_;
};

class Init_GetInfoResponse_header
{
public:
  Init_GetInfoResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetInfoResponse_header_is_set header(::bosdyn_msgs::msg::GetInfoResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetInfoResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetInfoResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetInfoResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetInfoResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_INFO_RESPONSE__BUILDER_HPP_
