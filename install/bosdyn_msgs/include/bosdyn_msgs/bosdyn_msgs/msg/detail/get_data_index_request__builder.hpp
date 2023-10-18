// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetDataIndexRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DATA_INDEX_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DATA_INDEX_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_data_index_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetDataIndexRequest_data_query_is_set
{
public:
  explicit Init_GetDataIndexRequest_data_query_is_set(::bosdyn_msgs::msg::GetDataIndexRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetDataIndexRequest data_query_is_set(::bosdyn_msgs::msg::GetDataIndexRequest::_data_query_is_set_type arg)
  {
    msg_.data_query_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataIndexRequest msg_;
};

class Init_GetDataIndexRequest_data_query
{
public:
  explicit Init_GetDataIndexRequest_data_query(::bosdyn_msgs::msg::GetDataIndexRequest & msg)
  : msg_(msg)
  {}
  Init_GetDataIndexRequest_data_query_is_set data_query(::bosdyn_msgs::msg::GetDataIndexRequest::_data_query_type arg)
  {
    msg_.data_query = std::move(arg);
    return Init_GetDataIndexRequest_data_query_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataIndexRequest msg_;
};

class Init_GetDataIndexRequest_header_is_set
{
public:
  explicit Init_GetDataIndexRequest_header_is_set(::bosdyn_msgs::msg::GetDataIndexRequest & msg)
  : msg_(msg)
  {}
  Init_GetDataIndexRequest_data_query header_is_set(::bosdyn_msgs::msg::GetDataIndexRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetDataIndexRequest_data_query(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataIndexRequest msg_;
};

class Init_GetDataIndexRequest_header
{
public:
  Init_GetDataIndexRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDataIndexRequest_header_is_set header(::bosdyn_msgs::msg::GetDataIndexRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDataIndexRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataIndexRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetDataIndexRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetDataIndexRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DATA_INDEX_REQUEST__BUILDER_HPP_
