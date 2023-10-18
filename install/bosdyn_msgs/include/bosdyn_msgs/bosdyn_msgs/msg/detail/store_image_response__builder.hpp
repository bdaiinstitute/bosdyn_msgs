// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreImageResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_IMAGE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_IMAGE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_image_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreImageResponse_id
{
public:
  explicit Init_StoreImageResponse_id(::bosdyn_msgs::msg::StoreImageResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreImageResponse id(::bosdyn_msgs::msg::StoreImageResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreImageResponse msg_;
};

class Init_StoreImageResponse_header_is_set
{
public:
  explicit Init_StoreImageResponse_header_is_set(::bosdyn_msgs::msg::StoreImageResponse & msg)
  : msg_(msg)
  {}
  Init_StoreImageResponse_id header_is_set(::bosdyn_msgs::msg::StoreImageResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StoreImageResponse_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreImageResponse msg_;
};

class Init_StoreImageResponse_header
{
public:
  Init_StoreImageResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreImageResponse_header_is_set header(::bosdyn_msgs::msg::StoreImageResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StoreImageResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreImageResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreImageResponse>()
{
  return bosdyn_msgs::msg::builder::Init_StoreImageResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_IMAGE_RESPONSE__BUILDER_HPP_
