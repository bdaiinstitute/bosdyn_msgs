// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DeleteDataPagesRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DELETE_DATA_PAGES_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DELETE_DATA_PAGES_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/delete_data_pages_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DeleteDataPagesRequest_page_ids
{
public:
  explicit Init_DeleteDataPagesRequest_page_ids(::bosdyn_msgs::msg::DeleteDataPagesRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DeleteDataPagesRequest page_ids(::bosdyn_msgs::msg::DeleteDataPagesRequest::_page_ids_type arg)
  {
    msg_.page_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteDataPagesRequest msg_;
};

class Init_DeleteDataPagesRequest_time_range_is_set
{
public:
  explicit Init_DeleteDataPagesRequest_time_range_is_set(::bosdyn_msgs::msg::DeleteDataPagesRequest & msg)
  : msg_(msg)
  {}
  Init_DeleteDataPagesRequest_page_ids time_range_is_set(::bosdyn_msgs::msg::DeleteDataPagesRequest::_time_range_is_set_type arg)
  {
    msg_.time_range_is_set = std::move(arg);
    return Init_DeleteDataPagesRequest_page_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteDataPagesRequest msg_;
};

class Init_DeleteDataPagesRequest_time_range
{
public:
  explicit Init_DeleteDataPagesRequest_time_range(::bosdyn_msgs::msg::DeleteDataPagesRequest & msg)
  : msg_(msg)
  {}
  Init_DeleteDataPagesRequest_time_range_is_set time_range(::bosdyn_msgs::msg::DeleteDataPagesRequest::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_DeleteDataPagesRequest_time_range_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteDataPagesRequest msg_;
};

class Init_DeleteDataPagesRequest_header_is_set
{
public:
  explicit Init_DeleteDataPagesRequest_header_is_set(::bosdyn_msgs::msg::DeleteDataPagesRequest & msg)
  : msg_(msg)
  {}
  Init_DeleteDataPagesRequest_time_range header_is_set(::bosdyn_msgs::msg::DeleteDataPagesRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DeleteDataPagesRequest_time_range(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteDataPagesRequest msg_;
};

class Init_DeleteDataPagesRequest_header
{
public:
  Init_DeleteDataPagesRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteDataPagesRequest_header_is_set header(::bosdyn_msgs::msg::DeleteDataPagesRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeleteDataPagesRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeleteDataPagesRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DeleteDataPagesRequest>()
{
  return bosdyn_msgs::msg::builder::Init_DeleteDataPagesRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DELETE_DATA_PAGES_REQUEST__BUILDER_HPP_
