// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListPointCloudSourcesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_POINT_CLOUD_SOURCES_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_POINT_CLOUD_SOURCES_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_point_cloud_sources_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListPointCloudSourcesResponse_point_cloud_sources
{
public:
  explicit Init_ListPointCloudSourcesResponse_point_cloud_sources(::bosdyn_msgs::msg::ListPointCloudSourcesResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListPointCloudSourcesResponse point_cloud_sources(::bosdyn_msgs::msg::ListPointCloudSourcesResponse::_point_cloud_sources_type arg)
  {
    msg_.point_cloud_sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListPointCloudSourcesResponse msg_;
};

class Init_ListPointCloudSourcesResponse_header_is_set
{
public:
  explicit Init_ListPointCloudSourcesResponse_header_is_set(::bosdyn_msgs::msg::ListPointCloudSourcesResponse & msg)
  : msg_(msg)
  {}
  Init_ListPointCloudSourcesResponse_point_cloud_sources header_is_set(::bosdyn_msgs::msg::ListPointCloudSourcesResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListPointCloudSourcesResponse_point_cloud_sources(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListPointCloudSourcesResponse msg_;
};

class Init_ListPointCloudSourcesResponse_header
{
public:
  Init_ListPointCloudSourcesResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListPointCloudSourcesResponse_header_is_set header(::bosdyn_msgs::msg::ListPointCloudSourcesResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListPointCloudSourcesResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListPointCloudSourcesResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListPointCloudSourcesResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListPointCloudSourcesResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_POINT_CLOUD_SOURCES_RESPONSE__BUILDER_HPP_
