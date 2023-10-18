// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListStoredImagesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_IMAGES_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_IMAGES_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_stored_images_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListStoredImagesResponse_data_ids
{
public:
  explicit Init_ListStoredImagesResponse_data_ids(::bosdyn_msgs::msg::ListStoredImagesResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListStoredImagesResponse data_ids(::bosdyn_msgs::msg::ListStoredImagesResponse::_data_ids_type arg)
  {
    msg_.data_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredImagesResponse msg_;
};

class Init_ListStoredImagesResponse_header_is_set
{
public:
  explicit Init_ListStoredImagesResponse_header_is_set(::bosdyn_msgs::msg::ListStoredImagesResponse & msg)
  : msg_(msg)
  {}
  Init_ListStoredImagesResponse_data_ids header_is_set(::bosdyn_msgs::msg::ListStoredImagesResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListStoredImagesResponse_data_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredImagesResponse msg_;
};

class Init_ListStoredImagesResponse_header
{
public:
  Init_ListStoredImagesResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListStoredImagesResponse_header_is_set header(::bosdyn_msgs::msg::ListStoredImagesResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListStoredImagesResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredImagesResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListStoredImagesResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListStoredImagesResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_IMAGES_RESPONSE__BUILDER_HPP_
