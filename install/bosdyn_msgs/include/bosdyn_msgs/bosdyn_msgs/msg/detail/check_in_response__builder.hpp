// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CheckInResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/check_in_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CheckInResponse_status
{
public:
  explicit Init_CheckInResponse_status(::bosdyn_msgs::msg::CheckInResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CheckInResponse status(::bosdyn_msgs::msg::CheckInResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CheckInResponse msg_;
};

class Init_CheckInResponse_last_checkin_is_set
{
public:
  explicit Init_CheckInResponse_last_checkin_is_set(::bosdyn_msgs::msg::CheckInResponse & msg)
  : msg_(msg)
  {}
  Init_CheckInResponse_status last_checkin_is_set(::bosdyn_msgs::msg::CheckInResponse::_last_checkin_is_set_type arg)
  {
    msg_.last_checkin_is_set = std::move(arg);
    return Init_CheckInResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::CheckInResponse msg_;
};

class Init_CheckInResponse_last_checkin
{
public:
  explicit Init_CheckInResponse_last_checkin(::bosdyn_msgs::msg::CheckInResponse & msg)
  : msg_(msg)
  {}
  Init_CheckInResponse_last_checkin_is_set last_checkin(::bosdyn_msgs::msg::CheckInResponse::_last_checkin_type arg)
  {
    msg_.last_checkin = std::move(arg);
    return Init_CheckInResponse_last_checkin_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CheckInResponse msg_;
};

class Init_CheckInResponse_header_is_set
{
public:
  explicit Init_CheckInResponse_header_is_set(::bosdyn_msgs::msg::CheckInResponse & msg)
  : msg_(msg)
  {}
  Init_CheckInResponse_last_checkin header_is_set(::bosdyn_msgs::msg::CheckInResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CheckInResponse_last_checkin(msg_);
  }

private:
  ::bosdyn_msgs::msg::CheckInResponse msg_;
};

class Init_CheckInResponse_header
{
public:
  Init_CheckInResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckInResponse_header_is_set header(::bosdyn_msgs::msg::CheckInResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CheckInResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CheckInResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CheckInResponse>()
{
  return bosdyn_msgs::msg::builder::Init_CheckInResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_RESPONSE__BUILDER_HPP_
