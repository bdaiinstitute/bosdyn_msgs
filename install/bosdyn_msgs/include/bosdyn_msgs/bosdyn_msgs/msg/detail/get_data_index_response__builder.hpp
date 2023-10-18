// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetDataIndexResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DATA_INDEX_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DATA_INDEX_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_data_index_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetDataIndexResponse_data_index_is_set
{
public:
  explicit Init_GetDataIndexResponse_data_index_is_set(::bosdyn_msgs::msg::GetDataIndexResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetDataIndexResponse data_index_is_set(::bosdyn_msgs::msg::GetDataIndexResponse::_data_index_is_set_type arg)
  {
    msg_.data_index_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataIndexResponse msg_;
};

class Init_GetDataIndexResponse_data_index
{
public:
  explicit Init_GetDataIndexResponse_data_index(::bosdyn_msgs::msg::GetDataIndexResponse & msg)
  : msg_(msg)
  {}
  Init_GetDataIndexResponse_data_index_is_set data_index(::bosdyn_msgs::msg::GetDataIndexResponse::_data_index_type arg)
  {
    msg_.data_index = std::move(arg);
    return Init_GetDataIndexResponse_data_index_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataIndexResponse msg_;
};

class Init_GetDataIndexResponse_header_is_set
{
public:
  explicit Init_GetDataIndexResponse_header_is_set(::bosdyn_msgs::msg::GetDataIndexResponse & msg)
  : msg_(msg)
  {}
  Init_GetDataIndexResponse_data_index header_is_set(::bosdyn_msgs::msg::GetDataIndexResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetDataIndexResponse_data_index(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataIndexResponse msg_;
};

class Init_GetDataIndexResponse_header
{
public:
  Init_GetDataIndexResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDataIndexResponse_header_is_set header(::bosdyn_msgs::msg::GetDataIndexResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDataIndexResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataIndexResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetDataIndexResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetDataIndexResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DATA_INDEX_RESPONSE__BUILDER_HPP_
