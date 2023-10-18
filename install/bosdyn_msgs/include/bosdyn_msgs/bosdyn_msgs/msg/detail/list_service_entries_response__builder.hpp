// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListServiceEntriesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_SERVICE_ENTRIES_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_SERVICE_ENTRIES_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_service_entries_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListServiceEntriesResponse_service_entries
{
public:
  explicit Init_ListServiceEntriesResponse_service_entries(::bosdyn_msgs::msg::ListServiceEntriesResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListServiceEntriesResponse service_entries(::bosdyn_msgs::msg::ListServiceEntriesResponse::_service_entries_type arg)
  {
    msg_.service_entries = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListServiceEntriesResponse msg_;
};

class Init_ListServiceEntriesResponse_header_is_set
{
public:
  explicit Init_ListServiceEntriesResponse_header_is_set(::bosdyn_msgs::msg::ListServiceEntriesResponse & msg)
  : msg_(msg)
  {}
  Init_ListServiceEntriesResponse_service_entries header_is_set(::bosdyn_msgs::msg::ListServiceEntriesResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListServiceEntriesResponse_service_entries(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListServiceEntriesResponse msg_;
};

class Init_ListServiceEntriesResponse_header
{
public:
  Init_ListServiceEntriesResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListServiceEntriesResponse_header_is_set header(::bosdyn_msgs::msg::ListServiceEntriesResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListServiceEntriesResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListServiceEntriesResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListServiceEntriesResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListServiceEntriesResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_SERVICE_ENTRIES_RESPONSE__BUILDER_HPP_
