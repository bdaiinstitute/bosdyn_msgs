// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LoadAutowalkResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/load_autowalk_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LoadAutowalkResponse_loop_node_is_set
{
public:
  explicit Init_LoadAutowalkResponse_loop_node_is_set(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LoadAutowalkResponse loop_node_is_set(::bosdyn_msgs::msg::LoadAutowalkResponse::_loop_node_is_set_type arg)
  {
    msg_.loop_node_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_loop_node
{
public:
  explicit Init_LoadAutowalkResponse_loop_node(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_loop_node_is_set loop_node(::bosdyn_msgs::msg::LoadAutowalkResponse::_loop_node_type arg)
  {
    msg_.loop_node = std::move(arg);
    return Init_LoadAutowalkResponse_loop_node_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_docking_node_is_set
{
public:
  explicit Init_LoadAutowalkResponse_docking_node_is_set(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_loop_node docking_node_is_set(::bosdyn_msgs::msg::LoadAutowalkResponse::_docking_node_is_set_type arg)
  {
    msg_.docking_node_is_set = std::move(arg);
    return Init_LoadAutowalkResponse_loop_node(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_docking_node
{
public:
  explicit Init_LoadAutowalkResponse_docking_node(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_docking_node_is_set docking_node(::bosdyn_msgs::msg::LoadAutowalkResponse::_docking_node_type arg)
  {
    msg_.docking_node = std::move(arg);
    return Init_LoadAutowalkResponse_docking_node_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_mission_id
{
public:
  explicit Init_LoadAutowalkResponse_mission_id(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_docking_node mission_id(::bosdyn_msgs::msg::LoadAutowalkResponse::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_LoadAutowalkResponse_docking_node(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_failed_elements
{
public:
  explicit Init_LoadAutowalkResponse_failed_elements(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_mission_id failed_elements(::bosdyn_msgs::msg::LoadAutowalkResponse::_failed_elements_type arg)
  {
    msg_.failed_elements = std::move(arg);
    return Init_LoadAutowalkResponse_mission_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_element_identifiers
{
public:
  explicit Init_LoadAutowalkResponse_element_identifiers(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_failed_elements element_identifiers(::bosdyn_msgs::msg::LoadAutowalkResponse::_element_identifiers_type arg)
  {
    msg_.element_identifiers = std::move(arg);
    return Init_LoadAutowalkResponse_failed_elements(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_failed_nodes
{
public:
  explicit Init_LoadAutowalkResponse_failed_nodes(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_element_identifiers failed_nodes(::bosdyn_msgs::msg::LoadAutowalkResponse::_failed_nodes_type arg)
  {
    msg_.failed_nodes = std::move(arg);
    return Init_LoadAutowalkResponse_element_identifiers(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_lease_use_results
{
public:
  explicit Init_LoadAutowalkResponse_lease_use_results(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_failed_nodes lease_use_results(::bosdyn_msgs::msg::LoadAutowalkResponse::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return Init_LoadAutowalkResponse_failed_nodes(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_status
{
public:
  explicit Init_LoadAutowalkResponse_status(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_lease_use_results status(::bosdyn_msgs::msg::LoadAutowalkResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LoadAutowalkResponse_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_header_is_set
{
public:
  explicit Init_LoadAutowalkResponse_header_is_set(::bosdyn_msgs::msg::LoadAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkResponse_status header_is_set(::bosdyn_msgs::msg::LoadAutowalkResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_LoadAutowalkResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

class Init_LoadAutowalkResponse_header
{
public:
  Init_LoadAutowalkResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadAutowalkResponse_header_is_set header(::bosdyn_msgs::msg::LoadAutowalkResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LoadAutowalkResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LoadAutowalkResponse>()
{
  return bosdyn_msgs::msg::builder::Init_LoadAutowalkResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_RESPONSE__BUILDER_HPP_
