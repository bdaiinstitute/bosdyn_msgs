// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListLeasesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_leases_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListLeasesResponse_resource_tree_is_set
{
public:
  explicit Init_ListLeasesResponse_resource_tree_is_set(::bosdyn_msgs::msg::ListLeasesResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListLeasesResponse resource_tree_is_set(::bosdyn_msgs::msg::ListLeasesResponse::_resource_tree_is_set_type arg)
  {
    msg_.resource_tree_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLeasesResponse msg_;
};

class Init_ListLeasesResponse_resource_tree
{
public:
  explicit Init_ListLeasesResponse_resource_tree(::bosdyn_msgs::msg::ListLeasesResponse & msg)
  : msg_(msg)
  {}
  Init_ListLeasesResponse_resource_tree_is_set resource_tree(::bosdyn_msgs::msg::ListLeasesResponse::_resource_tree_type arg)
  {
    msg_.resource_tree = std::move(arg);
    return Init_ListLeasesResponse_resource_tree_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLeasesResponse msg_;
};

class Init_ListLeasesResponse_resources
{
public:
  explicit Init_ListLeasesResponse_resources(::bosdyn_msgs::msg::ListLeasesResponse & msg)
  : msg_(msg)
  {}
  Init_ListLeasesResponse_resource_tree resources(::bosdyn_msgs::msg::ListLeasesResponse::_resources_type arg)
  {
    msg_.resources = std::move(arg);
    return Init_ListLeasesResponse_resource_tree(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLeasesResponse msg_;
};

class Init_ListLeasesResponse_header_is_set
{
public:
  explicit Init_ListLeasesResponse_header_is_set(::bosdyn_msgs::msg::ListLeasesResponse & msg)
  : msg_(msg)
  {}
  Init_ListLeasesResponse_resources header_is_set(::bosdyn_msgs::msg::ListLeasesResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListLeasesResponse_resources(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLeasesResponse msg_;
};

class Init_ListLeasesResponse_header
{
public:
  Init_ListLeasesResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListLeasesResponse_header_is_set header(::bosdyn_msgs::msg::ListLeasesResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListLeasesResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListLeasesResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListLeasesResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListLeasesResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_RESPONSE__BUILDER_HPP_
