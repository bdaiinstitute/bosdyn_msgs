// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StopMissionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STOP_MISSION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STOP_MISSION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stop_mission_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StopMissionResponse_lease_use_result_is_set
{
public:
  explicit Init_StopMissionResponse_lease_use_result_is_set(::bosdyn_msgs::msg::StopMissionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StopMissionResponse lease_use_result_is_set(::bosdyn_msgs::msg::StopMissionResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopMissionResponse msg_;
};

class Init_StopMissionResponse_lease_use_result
{
public:
  explicit Init_StopMissionResponse_lease_use_result(::bosdyn_msgs::msg::StopMissionResponse & msg)
  : msg_(msg)
  {}
  Init_StopMissionResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::StopMissionResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_StopMissionResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopMissionResponse msg_;
};

class Init_StopMissionResponse_status
{
public:
  explicit Init_StopMissionResponse_status(::bosdyn_msgs::msg::StopMissionResponse & msg)
  : msg_(msg)
  {}
  Init_StopMissionResponse_lease_use_result status(::bosdyn_msgs::msg::StopMissionResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StopMissionResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopMissionResponse msg_;
};

class Init_StopMissionResponse_header_is_set
{
public:
  explicit Init_StopMissionResponse_header_is_set(::bosdyn_msgs::msg::StopMissionResponse & msg)
  : msg_(msg)
  {}
  Init_StopMissionResponse_status header_is_set(::bosdyn_msgs::msg::StopMissionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StopMissionResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopMissionResponse msg_;
};

class Init_StopMissionResponse_header
{
public:
  Init_StopMissionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopMissionResponse_header_is_set header(::bosdyn_msgs::msg::StopMissionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StopMissionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StopMissionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StopMissionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_StopMissionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STOP_MISSION_RESPONSE__BUILDER_HPP_
