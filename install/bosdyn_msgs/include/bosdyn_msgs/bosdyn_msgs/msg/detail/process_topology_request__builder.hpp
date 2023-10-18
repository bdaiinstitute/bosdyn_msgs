// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_topology_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessTopologyRequest_modify_map_on_server
{
public:
  explicit Init_ProcessTopologyRequest_modify_map_on_server(::bosdyn_msgs::msg::ProcessTopologyRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessTopologyRequest modify_map_on_server(::bosdyn_msgs::msg::ProcessTopologyRequest::_modify_map_on_server_type arg)
  {
    msg_.modify_map_on_server = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequest msg_;
};

class Init_ProcessTopologyRequest_params_is_set
{
public:
  explicit Init_ProcessTopologyRequest_params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequest & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequest_modify_map_on_server params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequest::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return Init_ProcessTopologyRequest_modify_map_on_server(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequest msg_;
};

class Init_ProcessTopologyRequest_params
{
public:
  explicit Init_ProcessTopologyRequest_params(::bosdyn_msgs::msg::ProcessTopologyRequest & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequest_params_is_set params(::bosdyn_msgs::msg::ProcessTopologyRequest::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_ProcessTopologyRequest_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequest msg_;
};

class Init_ProcessTopologyRequest_header_is_set
{
public:
  explicit Init_ProcessTopologyRequest_header_is_set(::bosdyn_msgs::msg::ProcessTopologyRequest & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequest_params header_is_set(::bosdyn_msgs::msg::ProcessTopologyRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ProcessTopologyRequest_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequest msg_;
};

class Init_ProcessTopologyRequest_header
{
public:
  Init_ProcessTopologyRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessTopologyRequest_header_is_set header(::bosdyn_msgs::msg::ProcessTopologyRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ProcessTopologyRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessTopologyRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessTopologyRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST__BUILDER_HPP_
