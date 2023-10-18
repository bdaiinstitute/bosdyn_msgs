// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PauseMissionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAUSE_MISSION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAUSE_MISSION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/pause_mission_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PauseMissionResponse_lease_use_result_is_set
{
public:
  explicit Init_PauseMissionResponse_lease_use_result_is_set(::bosdyn_msgs::msg::PauseMissionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PauseMissionResponse lease_use_result_is_set(::bosdyn_msgs::msg::PauseMissionResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PauseMissionResponse msg_;
};

class Init_PauseMissionResponse_lease_use_result
{
public:
  explicit Init_PauseMissionResponse_lease_use_result(::bosdyn_msgs::msg::PauseMissionResponse & msg)
  : msg_(msg)
  {}
  Init_PauseMissionResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::PauseMissionResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_PauseMissionResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PauseMissionResponse msg_;
};

class Init_PauseMissionResponse_status
{
public:
  explicit Init_PauseMissionResponse_status(::bosdyn_msgs::msg::PauseMissionResponse & msg)
  : msg_(msg)
  {}
  Init_PauseMissionResponse_lease_use_result status(::bosdyn_msgs::msg::PauseMissionResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PauseMissionResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::PauseMissionResponse msg_;
};

class Init_PauseMissionResponse_header_is_set
{
public:
  explicit Init_PauseMissionResponse_header_is_set(::bosdyn_msgs::msg::PauseMissionResponse & msg)
  : msg_(msg)
  {}
  Init_PauseMissionResponse_status header_is_set(::bosdyn_msgs::msg::PauseMissionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_PauseMissionResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::PauseMissionResponse msg_;
};

class Init_PauseMissionResponse_header
{
public:
  Init_PauseMissionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PauseMissionResponse_header_is_set header(::bosdyn_msgs::msg::PauseMissionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PauseMissionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PauseMissionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PauseMissionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_PauseMissionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAUSE_MISSION_RESPONSE__BUILDER_HPP_
