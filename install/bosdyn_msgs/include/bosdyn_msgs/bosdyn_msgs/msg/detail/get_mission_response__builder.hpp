// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetMissionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_MISSION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_MISSION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_mission_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetMissionResponse_id
{
public:
  explicit Init_GetMissionResponse_id(::bosdyn_msgs::msg::GetMissionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetMissionResponse id(::bosdyn_msgs::msg::GetMissionResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetMissionResponse msg_;
};

class Init_GetMissionResponse_root_is_set
{
public:
  explicit Init_GetMissionResponse_root_is_set(::bosdyn_msgs::msg::GetMissionResponse & msg)
  : msg_(msg)
  {}
  Init_GetMissionResponse_id root_is_set(::bosdyn_msgs::msg::GetMissionResponse::_root_is_set_type arg)
  {
    msg_.root_is_set = std::move(arg);
    return Init_GetMissionResponse_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetMissionResponse msg_;
};

class Init_GetMissionResponse_root
{
public:
  explicit Init_GetMissionResponse_root(::bosdyn_msgs::msg::GetMissionResponse & msg)
  : msg_(msg)
  {}
  Init_GetMissionResponse_root_is_set root(::bosdyn_msgs::msg::GetMissionResponse::_root_type arg)
  {
    msg_.root = std::move(arg);
    return Init_GetMissionResponse_root_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetMissionResponse msg_;
};

class Init_GetMissionResponse_header_is_set
{
public:
  explicit Init_GetMissionResponse_header_is_set(::bosdyn_msgs::msg::GetMissionResponse & msg)
  : msg_(msg)
  {}
  Init_GetMissionResponse_root header_is_set(::bosdyn_msgs::msg::GetMissionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetMissionResponse_root(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetMissionResponse msg_;
};

class Init_GetMissionResponse_header
{
public:
  Init_GetMissionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMissionResponse_header_is_set header(::bosdyn_msgs::msg::GetMissionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetMissionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetMissionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetMissionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetMissionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_MISSION_RESPONSE__BUILDER_HPP_
