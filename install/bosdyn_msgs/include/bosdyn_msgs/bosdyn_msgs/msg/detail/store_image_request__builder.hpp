// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreImageRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_IMAGE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_IMAGE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_image_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreImageRequest_data_id_is_set
{
public:
  explicit Init_StoreImageRequest_data_id_is_set(::bosdyn_msgs::msg::StoreImageRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreImageRequest data_id_is_set(::bosdyn_msgs::msg::StoreImageRequest::_data_id_is_set_type arg)
  {
    msg_.data_id_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreImageRequest msg_;
};

class Init_StoreImageRequest_data_id
{
public:
  explicit Init_StoreImageRequest_data_id(::bosdyn_msgs::msg::StoreImageRequest & msg)
  : msg_(msg)
  {}
  Init_StoreImageRequest_data_id_is_set data_id(::bosdyn_msgs::msg::StoreImageRequest::_data_id_type arg)
  {
    msg_.data_id = std::move(arg);
    return Init_StoreImageRequest_data_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreImageRequest msg_;
};

class Init_StoreImageRequest_image_is_set
{
public:
  explicit Init_StoreImageRequest_image_is_set(::bosdyn_msgs::msg::StoreImageRequest & msg)
  : msg_(msg)
  {}
  Init_StoreImageRequest_data_id image_is_set(::bosdyn_msgs::msg::StoreImageRequest::_image_is_set_type arg)
  {
    msg_.image_is_set = std::move(arg);
    return Init_StoreImageRequest_data_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreImageRequest msg_;
};

class Init_StoreImageRequest_image
{
public:
  explicit Init_StoreImageRequest_image(::bosdyn_msgs::msg::StoreImageRequest & msg)
  : msg_(msg)
  {}
  Init_StoreImageRequest_image_is_set image(::bosdyn_msgs::msg::StoreImageRequest::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_StoreImageRequest_image_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreImageRequest msg_;
};

class Init_StoreImageRequest_header_is_set
{
public:
  explicit Init_StoreImageRequest_header_is_set(::bosdyn_msgs::msg::StoreImageRequest & msg)
  : msg_(msg)
  {}
  Init_StoreImageRequest_image header_is_set(::bosdyn_msgs::msg::StoreImageRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StoreImageRequest_image(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreImageRequest msg_;
};

class Init_StoreImageRequest_header
{
public:
  Init_StoreImageRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreImageRequest_header_is_set header(::bosdyn_msgs::msg::StoreImageRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StoreImageRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreImageRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreImageRequest>()
{
  return bosdyn_msgs::msg::builder::Init_StoreImageRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_IMAGE_REQUEST__BUILDER_HPP_
