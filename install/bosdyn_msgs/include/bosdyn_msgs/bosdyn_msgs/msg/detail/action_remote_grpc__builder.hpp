// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionRemoteGrpc.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_remote_grpc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionRemoteGrpc_record_time_images
{
public:
  explicit Init_ActionRemoteGrpc_record_time_images(::bosdyn_msgs::msg::ActionRemoteGrpc & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionRemoteGrpc record_time_images(::bosdyn_msgs::msg::ActionRemoteGrpc::_record_time_images_type arg)
  {
    msg_.record_time_images = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionRemoteGrpc msg_;
};

class Init_ActionRemoteGrpc_parameters_is_set
{
public:
  explicit Init_ActionRemoteGrpc_parameters_is_set(::bosdyn_msgs::msg::ActionRemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_ActionRemoteGrpc_record_time_images parameters_is_set(::bosdyn_msgs::msg::ActionRemoteGrpc::_parameters_is_set_type arg)
  {
    msg_.parameters_is_set = std::move(arg);
    return Init_ActionRemoteGrpc_record_time_images(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionRemoteGrpc msg_;
};

class Init_ActionRemoteGrpc_parameters
{
public:
  explicit Init_ActionRemoteGrpc_parameters(::bosdyn_msgs::msg::ActionRemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_ActionRemoteGrpc_parameters_is_set parameters(::bosdyn_msgs::msg::ActionRemoteGrpc::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_ActionRemoteGrpc_parameters_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionRemoteGrpc msg_;
};

class Init_ActionRemoteGrpc_lease_resources
{
public:
  explicit Init_ActionRemoteGrpc_lease_resources(::bosdyn_msgs::msg::ActionRemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_ActionRemoteGrpc_parameters lease_resources(::bosdyn_msgs::msg::ActionRemoteGrpc::_lease_resources_type arg)
  {
    msg_.lease_resources = std::move(arg);
    return Init_ActionRemoteGrpc_parameters(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionRemoteGrpc msg_;
};

class Init_ActionRemoteGrpc_rpc_timeout_is_set
{
public:
  explicit Init_ActionRemoteGrpc_rpc_timeout_is_set(::bosdyn_msgs::msg::ActionRemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_ActionRemoteGrpc_lease_resources rpc_timeout_is_set(::bosdyn_msgs::msg::ActionRemoteGrpc::_rpc_timeout_is_set_type arg)
  {
    msg_.rpc_timeout_is_set = std::move(arg);
    return Init_ActionRemoteGrpc_lease_resources(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionRemoteGrpc msg_;
};

class Init_ActionRemoteGrpc_rpc_timeout
{
public:
  explicit Init_ActionRemoteGrpc_rpc_timeout(::bosdyn_msgs::msg::ActionRemoteGrpc & msg)
  : msg_(msg)
  {}
  Init_ActionRemoteGrpc_rpc_timeout_is_set rpc_timeout(::bosdyn_msgs::msg::ActionRemoteGrpc::_rpc_timeout_type arg)
  {
    msg_.rpc_timeout = std::move(arg);
    return Init_ActionRemoteGrpc_rpc_timeout_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionRemoteGrpc msg_;
};

class Init_ActionRemoteGrpc_service_name
{
public:
  Init_ActionRemoteGrpc_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionRemoteGrpc_rpc_timeout service_name(::bosdyn_msgs::msg::ActionRemoteGrpc::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_ActionRemoteGrpc_rpc_timeout(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionRemoteGrpc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionRemoteGrpc>()
{
  return bosdyn_msgs::msg::builder::Init_ActionRemoteGrpc_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__BUILDER_HPP_
