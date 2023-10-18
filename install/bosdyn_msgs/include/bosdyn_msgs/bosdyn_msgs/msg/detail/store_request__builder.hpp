// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreRequest_tag
{
public:
  explicit Init_StoreRequest_tag(::bosdyn_msgs::msg::StoreRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreRequest tag(::bosdyn_msgs::msg::StoreRequest::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreRequest msg_;
};

class Init_StoreRequest_type
{
public:
  explicit Init_StoreRequest_type(::bosdyn_msgs::msg::StoreRequest & msg)
  : msg_(msg)
  {}
  Init_StoreRequest_tag type(::bosdyn_msgs::msg::StoreRequest::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_StoreRequest_tag(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreRequest msg_;
};

class Init_StoreRequest_camera_is_set
{
public:
  explicit Init_StoreRequest_camera_is_set(::bosdyn_msgs::msg::StoreRequest & msg)
  : msg_(msg)
  {}
  Init_StoreRequest_type camera_is_set(::bosdyn_msgs::msg::StoreRequest::_camera_is_set_type arg)
  {
    msg_.camera_is_set = std::move(arg);
    return Init_StoreRequest_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreRequest msg_;
};

class Init_StoreRequest_camera
{
public:
  explicit Init_StoreRequest_camera(::bosdyn_msgs::msg::StoreRequest & msg)
  : msg_(msg)
  {}
  Init_StoreRequest_camera_is_set camera(::bosdyn_msgs::msg::StoreRequest::_camera_type arg)
  {
    msg_.camera = std::move(arg);
    return Init_StoreRequest_camera_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreRequest msg_;
};

class Init_StoreRequest_header_is_set
{
public:
  explicit Init_StoreRequest_header_is_set(::bosdyn_msgs::msg::StoreRequest & msg)
  : msg_(msg)
  {}
  Init_StoreRequest_camera header_is_set(::bosdyn_msgs::msg::StoreRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StoreRequest_camera(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreRequest msg_;
};

class Init_StoreRequest_header
{
public:
  Init_StoreRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreRequest_header_is_set header(::bosdyn_msgs::msg::StoreRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StoreRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreRequest>()
{
  return bosdyn_msgs::msg::builder::Init_StoreRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_REQUEST__BUILDER_HPP_
