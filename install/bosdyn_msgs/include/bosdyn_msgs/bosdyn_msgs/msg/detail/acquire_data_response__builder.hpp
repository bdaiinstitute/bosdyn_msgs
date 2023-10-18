// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AcquireDataResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_DATA_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_DATA_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/acquire_data_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AcquireDataResponse_request_id
{
public:
  explicit Init_AcquireDataResponse_request_id(::bosdyn_msgs::msg::AcquireDataResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AcquireDataResponse request_id(::bosdyn_msgs::msg::AcquireDataResponse::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataResponse msg_;
};

class Init_AcquireDataResponse_status
{
public:
  explicit Init_AcquireDataResponse_status(::bosdyn_msgs::msg::AcquireDataResponse & msg)
  : msg_(msg)
  {}
  Init_AcquireDataResponse_request_id status(::bosdyn_msgs::msg::AcquireDataResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AcquireDataResponse_request_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataResponse msg_;
};

class Init_AcquireDataResponse_header_is_set
{
public:
  explicit Init_AcquireDataResponse_header_is_set(::bosdyn_msgs::msg::AcquireDataResponse & msg)
  : msg_(msg)
  {}
  Init_AcquireDataResponse_status header_is_set(::bosdyn_msgs::msg::AcquireDataResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AcquireDataResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataResponse msg_;
};

class Init_AcquireDataResponse_header
{
public:
  Init_AcquireDataResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireDataResponse_header_is_set header(::bosdyn_msgs::msg::AcquireDataResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcquireDataResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AcquireDataResponse>()
{
  return bosdyn_msgs::msg::builder::Init_AcquireDataResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_DATA_RESPONSE__BUILDER_HPP_
