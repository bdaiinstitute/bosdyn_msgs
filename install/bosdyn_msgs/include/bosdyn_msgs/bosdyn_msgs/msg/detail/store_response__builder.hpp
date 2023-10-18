// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreResponse_point_is_set
{
public:
  explicit Init_StoreResponse_point_is_set(::bosdyn_msgs::msg::StoreResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreResponse point_is_set(::bosdyn_msgs::msg::StoreResponse::_point_is_set_type arg)
  {
    msg_.point_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreResponse msg_;
};

class Init_StoreResponse_point
{
public:
  explicit Init_StoreResponse_point(::bosdyn_msgs::msg::StoreResponse & msg)
  : msg_(msg)
  {}
  Init_StoreResponse_point_is_set point(::bosdyn_msgs::msg::StoreResponse::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_StoreResponse_point_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreResponse msg_;
};

class Init_StoreResponse_header_is_set
{
public:
  explicit Init_StoreResponse_header_is_set(::bosdyn_msgs::msg::StoreResponse & msg)
  : msg_(msg)
  {}
  Init_StoreResponse_point header_is_set(::bosdyn_msgs::msg::StoreResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StoreResponse_point(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreResponse msg_;
};

class Init_StoreResponse_header
{
public:
  Init_StoreResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreResponse_header_is_set header(::bosdyn_msgs::msg::StoreResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StoreResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreResponse>()
{
  return bosdyn_msgs::msg::builder::Init_StoreResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_RESPONSE__BUILDER_HPP_
