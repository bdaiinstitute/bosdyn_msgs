// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UpdateServiceResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_SERVICE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_SERVICE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/update_service_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdateServiceResponse_status
{
public:
  explicit Init_UpdateServiceResponse_status(::bosdyn_msgs::msg::UpdateServiceResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UpdateServiceResponse status(::bosdyn_msgs::msg::UpdateServiceResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateServiceResponse msg_;
};

class Init_UpdateServiceResponse_header_is_set
{
public:
  explicit Init_UpdateServiceResponse_header_is_set(::bosdyn_msgs::msg::UpdateServiceResponse & msg)
  : msg_(msg)
  {}
  Init_UpdateServiceResponse_status header_is_set(::bosdyn_msgs::msg::UpdateServiceResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UpdateServiceResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateServiceResponse msg_;
};

class Init_UpdateServiceResponse_header
{
public:
  Init_UpdateServiceResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateServiceResponse_header_is_set header(::bosdyn_msgs::msg::UpdateServiceResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UpdateServiceResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateServiceResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UpdateServiceResponse>()
{
  return bosdyn_msgs::msg::builder::Init_UpdateServiceResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_SERVICE_RESPONSE__BUILDER_HPP_
