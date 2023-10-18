// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RestartMissionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESTART_MISSION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESTART_MISSION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/restart_mission_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RestartMissionResponse_failed_nodes
{
public:
  explicit Init_RestartMissionResponse_failed_nodes(::bosdyn_msgs::msg::RestartMissionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RestartMissionResponse failed_nodes(::bosdyn_msgs::msg::RestartMissionResponse::_failed_nodes_type arg)
  {
    msg_.failed_nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionResponse msg_;
};

class Init_RestartMissionResponse_lease_use_results
{
public:
  explicit Init_RestartMissionResponse_lease_use_results(::bosdyn_msgs::msg::RestartMissionResponse & msg)
  : msg_(msg)
  {}
  Init_RestartMissionResponse_failed_nodes lease_use_results(::bosdyn_msgs::msg::RestartMissionResponse::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return Init_RestartMissionResponse_failed_nodes(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionResponse msg_;
};

class Init_RestartMissionResponse_status
{
public:
  explicit Init_RestartMissionResponse_status(::bosdyn_msgs::msg::RestartMissionResponse & msg)
  : msg_(msg)
  {}
  Init_RestartMissionResponse_lease_use_results status(::bosdyn_msgs::msg::RestartMissionResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RestartMissionResponse_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionResponse msg_;
};

class Init_RestartMissionResponse_header_is_set
{
public:
  explicit Init_RestartMissionResponse_header_is_set(::bosdyn_msgs::msg::RestartMissionResponse & msg)
  : msg_(msg)
  {}
  Init_RestartMissionResponse_status header_is_set(::bosdyn_msgs::msg::RestartMissionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RestartMissionResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionResponse msg_;
};

class Init_RestartMissionResponse_header
{
public:
  Init_RestartMissionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RestartMissionResponse_header_is_set header(::bosdyn_msgs::msg::RestartMissionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RestartMissionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RestartMissionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RestartMissionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESTART_MISSION_RESPONSE__BUILDER_HPP_
