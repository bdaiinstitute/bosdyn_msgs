// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackInformationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_INFORMATION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_INFORMATION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_callback_information_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaCallbackInformationResponse_info_is_set
{
public:
  explicit Init_AreaCallbackInformationResponse_info_is_set(::bosdyn_msgs::msg::AreaCallbackInformationResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaCallbackInformationResponse info_is_set(::bosdyn_msgs::msg::AreaCallbackInformationResponse::_info_is_set_type arg)
  {
    msg_.info_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackInformationResponse msg_;
};

class Init_AreaCallbackInformationResponse_info
{
public:
  explicit Init_AreaCallbackInformationResponse_info(::bosdyn_msgs::msg::AreaCallbackInformationResponse & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackInformationResponse_info_is_set info(::bosdyn_msgs::msg::AreaCallbackInformationResponse::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AreaCallbackInformationResponse_info_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackInformationResponse msg_;
};

class Init_AreaCallbackInformationResponse_header_is_set
{
public:
  explicit Init_AreaCallbackInformationResponse_header_is_set(::bosdyn_msgs::msg::AreaCallbackInformationResponse & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackInformationResponse_info header_is_set(::bosdyn_msgs::msg::AreaCallbackInformationResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AreaCallbackInformationResponse_info(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackInformationResponse msg_;
};

class Init_AreaCallbackInformationResponse_header
{
public:
  Init_AreaCallbackInformationResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaCallbackInformationResponse_header_is_set header(::bosdyn_msgs::msg::AreaCallbackInformationResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AreaCallbackInformationResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackInformationResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaCallbackInformationResponse>()
{
  return bosdyn_msgs::msg::builder::Init_AreaCallbackInformationResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_INFORMATION_RESPONSE__BUILDER_HPP_
