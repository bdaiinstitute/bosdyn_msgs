// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RemoteGrpc.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REMOTE_GRPC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REMOTE_GRPC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/remote_grpc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RemoteGrpc_params_is_set
{
public:
  explicit Init_RemoteGrpc_params_is_set(::bosdyn_msgs::msg::RemoteGrpc & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RemoteGrpc params_is_set(::bosdyn_msgs::msg::RemoteGrpc::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemoteGrpc msg_;
};

class Init_RemoteGrpc_params
{
public:
  explicit Init_RemoteGrpc_params(::bosdyn_msgs::msg::RemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_RemoteGrpc_params_is_set params(::bosdyn_msgs::msg::RemoteGrpc::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_RemoteGrpc_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemoteGrpc msg_;
};

class Init_RemoteGrpc_group_name_format
{
public:
  explicit Init_RemoteGrpc_group_name_format(::bosdyn_msgs::msg::RemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_RemoteGrpc_params group_name_format(::bosdyn_msgs::msg::RemoteGrpc::_group_name_format_type arg)
  {
    msg_.group_name_format = std::move(arg);
    return Init_RemoteGrpc_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemoteGrpc msg_;
};

class Init_RemoteGrpc_inputs
{
public:
  explicit Init_RemoteGrpc_inputs(::bosdyn_msgs::msg::RemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_RemoteGrpc_group_name_format inputs(::bosdyn_msgs::msg::RemoteGrpc::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return Init_RemoteGrpc_group_name_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemoteGrpc msg_;
};

class Init_RemoteGrpc_lease_resources
{
public:
  explicit Init_RemoteGrpc_lease_resources(::bosdyn_msgs::msg::RemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_RemoteGrpc_inputs lease_resources(::bosdyn_msgs::msg::RemoteGrpc::_lease_resources_type arg)
  {
    msg_.lease_resources = std::move(arg);
    return Init_RemoteGrpc_inputs(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemoteGrpc msg_;
};

class Init_RemoteGrpc_timeout
{
public:
  explicit Init_RemoteGrpc_timeout(::bosdyn_msgs::msg::RemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_RemoteGrpc_lease_resources timeout(::bosdyn_msgs::msg::RemoteGrpc::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_RemoteGrpc_lease_resources(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemoteGrpc msg_;
};

class Init_RemoteGrpc_service_name
{
public:
  explicit Init_RemoteGrpc_service_name(::bosdyn_msgs::msg::RemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_RemoteGrpc_timeout service_name(::bosdyn_msgs::msg::RemoteGrpc::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_RemoteGrpc_timeout(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemoteGrpc msg_;
};

class Init_RemoteGrpc_host
{
public:
  Init_RemoteGrpc_host()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoteGrpc_service_name host(::bosdyn_msgs::msg::RemoteGrpc::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_RemoteGrpc_service_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::RemoteGrpc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RemoteGrpc>()
{
  return bosdyn_msgs::msg::builder::Init_RemoteGrpc_host();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REMOTE_GRPC__BUILDER_HPP_
