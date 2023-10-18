// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DeleteDataPagesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DELETE_DATA_PAGES_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DELETE_DATA_PAGES_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/delete_data_pages_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DeleteDataPagesResponse_status
{
public:
  explicit Init_DeleteDataPagesResponse_status(::bosdyn_msgs::msg::DeleteDataPagesResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DeleteDataPagesResponse status(::bosdyn_msgs::msg::DeleteDataPagesResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteDataPagesResponse msg_;
};

class Init_DeleteDataPagesResponse_bytes_deleted
{
public:
  explicit Init_DeleteDataPagesResponse_bytes_deleted(::bosdyn_msgs::msg::DeleteDataPagesResponse & msg)
  : msg_(msg)
  {}
  Init_DeleteDataPagesResponse_status bytes_deleted(::bosdyn_msgs::msg::DeleteDataPagesResponse::_bytes_deleted_type arg)
  {
    msg_.bytes_deleted = std::move(arg);
    return Init_DeleteDataPagesResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteDataPagesResponse msg_;
};

class Init_DeleteDataPagesResponse_header_is_set
{
public:
  explicit Init_DeleteDataPagesResponse_header_is_set(::bosdyn_msgs::msg::DeleteDataPagesResponse & msg)
  : msg_(msg)
  {}
  Init_DeleteDataPagesResponse_bytes_deleted header_is_set(::bosdyn_msgs::msg::DeleteDataPagesResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DeleteDataPagesResponse_bytes_deleted(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteDataPagesResponse msg_;
};

class Init_DeleteDataPagesResponse_header
{
public:
  Init_DeleteDataPagesResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteDataPagesResponse_header_is_set header(::bosdyn_msgs::msg::DeleteDataPagesResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeleteDataPagesResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteDataPagesResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DeleteDataPagesResponse>()
{
  return bosdyn_msgs::msg::builder::Init_DeleteDataPagesResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DELETE_DATA_PAGES_RESPONSE__BUILDER_HPP_
