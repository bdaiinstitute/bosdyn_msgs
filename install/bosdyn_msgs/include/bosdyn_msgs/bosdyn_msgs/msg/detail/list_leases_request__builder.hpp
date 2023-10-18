// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListLeasesRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_leases_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListLeasesRequest_include_full_lease_info
{
public:
  explicit Init_ListLeasesRequest_include_full_lease_info(::bosdyn_msgs::msg::ListLeasesRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListLeasesRequest include_full_lease_info(::bosdyn_msgs::msg::ListLeasesRequest::_include_full_lease_info_type arg)
  {
    msg_.include_full_lease_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLeasesRequest msg_;
};

class Init_ListLeasesRequest_header_is_set
{
public:
  explicit Init_ListLeasesRequest_header_is_set(::bosdyn_msgs::msg::ListLeasesRequest & msg)
  : msg_(msg)
  {}
  Init_ListLeasesRequest_include_full_lease_info header_is_set(::bosdyn_msgs::msg::ListLeasesRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListLeasesRequest_include_full_lease_info(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLeasesRequest msg_;
};

class Init_ListLeasesRequest_header
{
public:
  Init_ListLeasesRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListLeasesRequest_header_is_set header(::bosdyn_msgs::msg::ListLeasesRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListLeasesRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLeasesRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListLeasesRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ListLeasesRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_REQUEST__BUILDER_HPP_
