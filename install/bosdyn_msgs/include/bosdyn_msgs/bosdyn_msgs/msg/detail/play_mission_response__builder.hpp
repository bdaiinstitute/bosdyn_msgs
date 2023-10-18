// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PlayMissionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAY_MISSION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAY_MISSION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/play_mission_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PlayMissionResponse_lease_use_results
{
public:
  explicit Init_PlayMissionResponse_lease_use_results(::bosdyn_msgs::msg::PlayMissionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PlayMissionResponse lease_use_results(::bosdyn_msgs::msg::PlayMissionResponse::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlayMissionResponse msg_;
};

class Init_PlayMissionResponse_status
{
public:
  explicit Init_PlayMissionResponse_status(::bosdyn_msgs::msg::PlayMissionResponse & msg)
  : msg_(msg)
  {}
  Init_PlayMissionResponse_lease_use_results status(::bosdyn_msgs::msg::PlayMissionResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PlayMissionResponse_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlayMissionResponse msg_;
};

class Init_PlayMissionResponse_header_is_set
{
public:
  explicit Init_PlayMissionResponse_header_is_set(::bosdyn_msgs::msg::PlayMissionResponse & msg)
  : msg_(msg)
  {}
  Init_PlayMissionResponse_status header_is_set(::bosdyn_msgs::msg::PlayMissionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_PlayMissionResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlayMissionResponse msg_;
};

class Init_PlayMissionResponse_header
{
public:
  Init_PlayMissionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayMissionResponse_header_is_set header(::bosdyn_msgs::msg::PlayMissionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlayMissionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlayMissionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PlayMissionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_PlayMissionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAY_MISSION_RESPONSE__BUILDER_HPP_
