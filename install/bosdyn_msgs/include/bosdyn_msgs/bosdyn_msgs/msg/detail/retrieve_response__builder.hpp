// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RetrieveResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RETRIEVE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RETRIEVE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/retrieve_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RetrieveResponse_data_is_set
{
public:
  explicit Init_RetrieveResponse_data_is_set(::bosdyn_msgs::msg::RetrieveResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RetrieveResponse data_is_set(::bosdyn_msgs::msg::RetrieveResponse::_data_is_set_type arg)
  {
    msg_.data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveResponse msg_;
};

class Init_RetrieveResponse_data
{
public:
  explicit Init_RetrieveResponse_data(::bosdyn_msgs::msg::RetrieveResponse & msg)
  : msg_(msg)
  {}
  Init_RetrieveResponse_data_is_set data(::bosdyn_msgs::msg::RetrieveResponse::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_RetrieveResponse_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveResponse msg_;
};

class Init_RetrieveResponse_logpoint_is_set
{
public:
  explicit Init_RetrieveResponse_logpoint_is_set(::bosdyn_msgs::msg::RetrieveResponse & msg)
  : msg_(msg)
  {}
  Init_RetrieveResponse_data logpoint_is_set(::bosdyn_msgs::msg::RetrieveResponse::_logpoint_is_set_type arg)
  {
    msg_.logpoint_is_set = std::move(arg);
    return Init_RetrieveResponse_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveResponse msg_;
};

class Init_RetrieveResponse_logpoint
{
public:
  explicit Init_RetrieveResponse_logpoint(::bosdyn_msgs::msg::RetrieveResponse & msg)
  : msg_(msg)
  {}
  Init_RetrieveResponse_logpoint_is_set logpoint(::bosdyn_msgs::msg::RetrieveResponse::_logpoint_type arg)
  {
    msg_.logpoint = std::move(arg);
    return Init_RetrieveResponse_logpoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveResponse msg_;
};

class Init_RetrieveResponse_header_is_set
{
public:
  explicit Init_RetrieveResponse_header_is_set(::bosdyn_msgs::msg::RetrieveResponse & msg)
  : msg_(msg)
  {}
  Init_RetrieveResponse_logpoint header_is_set(::bosdyn_msgs::msg::RetrieveResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RetrieveResponse_logpoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveResponse msg_;
};

class Init_RetrieveResponse_header
{
public:
  Init_RetrieveResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RetrieveResponse_header_is_set header(::bosdyn_msgs::msg::RetrieveResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RetrieveResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RetrieveResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RetrieveResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RETRIEVE_RESPONSE__BUILDER_HPP_
