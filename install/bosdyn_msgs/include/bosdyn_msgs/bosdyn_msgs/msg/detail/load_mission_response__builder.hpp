// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LoadMissionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/load_mission_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LoadMissionResponse_failed_nodes
{
public:
  explicit Init_LoadMissionResponse_failed_nodes(::bosdyn_msgs::msg::LoadMissionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LoadMissionResponse failed_nodes(::bosdyn_msgs::msg::LoadMissionResponse::_failed_nodes_type arg)
  {
    msg_.failed_nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionResponse msg_;
};

class Init_LoadMissionResponse_mission_info_is_set
{
public:
  explicit Init_LoadMissionResponse_mission_info_is_set(::bosdyn_msgs::msg::LoadMissionResponse & msg)
  : msg_(msg)
  {}
  Init_LoadMissionResponse_failed_nodes mission_info_is_set(::bosdyn_msgs::msg::LoadMissionResponse::_mission_info_is_set_type arg)
  {
    msg_.mission_info_is_set = std::move(arg);
    return Init_LoadMissionResponse_failed_nodes(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionResponse msg_;
};

class Init_LoadMissionResponse_mission_info
{
public:
  explicit Init_LoadMissionResponse_mission_info(::bosdyn_msgs::msg::LoadMissionResponse & msg)
  : msg_(msg)
  {}
  Init_LoadMissionResponse_mission_info_is_set mission_info(::bosdyn_msgs::msg::LoadMissionResponse::_mission_info_type arg)
  {
    msg_.mission_info = std::move(arg);
    return Init_LoadMissionResponse_mission_info_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionResponse msg_;
};

class Init_LoadMissionResponse_lease_use_results
{
public:
  explicit Init_LoadMissionResponse_lease_use_results(::bosdyn_msgs::msg::LoadMissionResponse & msg)
  : msg_(msg)
  {}
  Init_LoadMissionResponse_mission_info lease_use_results(::bosdyn_msgs::msg::LoadMissionResponse::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return Init_LoadMissionResponse_mission_info(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionResponse msg_;
};

class Init_LoadMissionResponse_status
{
public:
  explicit Init_LoadMissionResponse_status(::bosdyn_msgs::msg::LoadMissionResponse & msg)
  : msg_(msg)
  {}
  Init_LoadMissionResponse_lease_use_results status(::bosdyn_msgs::msg::LoadMissionResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LoadMissionResponse_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionResponse msg_;
};

class Init_LoadMissionResponse_header_is_set
{
public:
  explicit Init_LoadMissionResponse_header_is_set(::bosdyn_msgs::msg::LoadMissionResponse & msg)
  : msg_(msg)
  {}
  Init_LoadMissionResponse_status header_is_set(::bosdyn_msgs::msg::LoadMissionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_LoadMissionResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionResponse msg_;
};

class Init_LoadMissionResponse_header
{
public:
  Init_LoadMissionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadMissionResponse_header_is_set header(::bosdyn_msgs::msg::LoadMissionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LoadMissionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LoadMissionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_LoadMissionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_RESPONSE__BUILDER_HPP_
