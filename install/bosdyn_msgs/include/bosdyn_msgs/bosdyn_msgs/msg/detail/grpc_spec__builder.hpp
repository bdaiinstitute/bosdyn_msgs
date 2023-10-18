// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GrpcSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRPC_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRPC_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/grpc_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GrpcSpec_service_name
{
public:
  Init_GrpcSpec_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::GrpcSpec service_name(::bosdyn_msgs::msg::GrpcSpec::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GrpcSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GrpcSpec>()
{
  return bosdyn_msgs::msg::builder::Init_GrpcSpec_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRPC_SPEC__BUILDER_HPP_
