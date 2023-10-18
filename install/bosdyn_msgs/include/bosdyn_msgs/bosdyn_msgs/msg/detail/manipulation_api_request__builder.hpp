// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ManipulationApiRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/manipulation_api_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ManipulationApiRequest_manipulation_cmd
{
public:
  explicit Init_ManipulationApiRequest_manipulation_cmd(::bosdyn_msgs::msg::ManipulationApiRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ManipulationApiRequest manipulation_cmd(::bosdyn_msgs::msg::ManipulationApiRequest::_manipulation_cmd_type arg)
  {
    msg_.manipulation_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequest msg_;
};

class Init_ManipulationApiRequest_lease_is_set
{
public:
  explicit Init_ManipulationApiRequest_lease_is_set(::bosdyn_msgs::msg::ManipulationApiRequest & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiRequest_manipulation_cmd lease_is_set(::bosdyn_msgs::msg::ManipulationApiRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_ManipulationApiRequest_manipulation_cmd(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequest msg_;
};

class Init_ManipulationApiRequest_lease
{
public:
  explicit Init_ManipulationApiRequest_lease(::bosdyn_msgs::msg::ManipulationApiRequest & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiRequest_lease_is_set lease(::bosdyn_msgs::msg::ManipulationApiRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_ManipulationApiRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequest msg_;
};

class Init_ManipulationApiRequest_header_is_set
{
public:
  explicit Init_ManipulationApiRequest_header_is_set(::bosdyn_msgs::msg::ManipulationApiRequest & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiRequest_lease header_is_set(::bosdyn_msgs::msg::ManipulationApiRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ManipulationApiRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequest msg_;
};

class Init_ManipulationApiRequest_header
{
public:
  Init_ManipulationApiRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulationApiRequest_header_is_set header(::bosdyn_msgs::msg::ManipulationApiRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ManipulationApiRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ManipulationApiRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ManipulationApiRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST__BUILDER_HPP_
