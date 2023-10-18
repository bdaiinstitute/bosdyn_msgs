// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListStoredDataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_DATA_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_DATA_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_stored_data_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListStoredDataRequest_query_is_set
{
public:
  explicit Init_ListStoredDataRequest_query_is_set(::bosdyn_msgs::msg::ListStoredDataRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListStoredDataRequest query_is_set(::bosdyn_msgs::msg::ListStoredDataRequest::_query_is_set_type arg)
  {
    msg_.query_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredDataRequest msg_;
};

class Init_ListStoredDataRequest_query
{
public:
  explicit Init_ListStoredDataRequest_query(::bosdyn_msgs::msg::ListStoredDataRequest & msg)
  : msg_(msg)
  {}
  Init_ListStoredDataRequest_query_is_set query(::bosdyn_msgs::msg::ListStoredDataRequest::_query_type arg)
  {
    msg_.query = std::move(arg);
    return Init_ListStoredDataRequest_query_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredDataRequest msg_;
};

class Init_ListStoredDataRequest_header_is_set
{
public:
  explicit Init_ListStoredDataRequest_header_is_set(::bosdyn_msgs::msg::ListStoredDataRequest & msg)
  : msg_(msg)
  {}
  Init_ListStoredDataRequest_query header_is_set(::bosdyn_msgs::msg::ListStoredDataRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListStoredDataRequest_query(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredDataRequest msg_;
};

class Init_ListStoredDataRequest_header
{
public:
  Init_ListStoredDataRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListStoredDataRequest_header_is_set header(::bosdyn_msgs::msg::ListStoredDataRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListStoredDataRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredDataRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListStoredDataRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ListStoredDataRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_DATA_REQUEST__BUILDER_HPP_
