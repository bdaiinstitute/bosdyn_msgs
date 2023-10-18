// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CreateEdgeResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/create_edge_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CreateEdgeResponse_map_stats_is_set
{
public:
  explicit Init_CreateEdgeResponse_map_stats_is_set(::bosdyn_msgs::msg::CreateEdgeResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CreateEdgeResponse map_stats_is_set(::bosdyn_msgs::msg::CreateEdgeResponse::_map_stats_is_set_type arg)
  {
    msg_.map_stats_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeResponse msg_;
};

class Init_CreateEdgeResponse_map_stats
{
public:
  explicit Init_CreateEdgeResponse_map_stats(::bosdyn_msgs::msg::CreateEdgeResponse & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeResponse_map_stats_is_set map_stats(::bosdyn_msgs::msg::CreateEdgeResponse::_map_stats_type arg)
  {
    msg_.map_stats = std::move(arg);
    return Init_CreateEdgeResponse_map_stats_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeResponse msg_;
};

class Init_CreateEdgeResponse_lease_use_result_is_set
{
public:
  explicit Init_CreateEdgeResponse_lease_use_result_is_set(::bosdyn_msgs::msg::CreateEdgeResponse & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeResponse_map_stats lease_use_result_is_set(::bosdyn_msgs::msg::CreateEdgeResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_CreateEdgeResponse_map_stats(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeResponse msg_;
};

class Init_CreateEdgeResponse_lease_use_result
{
public:
  explicit Init_CreateEdgeResponse_lease_use_result(::bosdyn_msgs::msg::CreateEdgeResponse & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::CreateEdgeResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_CreateEdgeResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeResponse msg_;
};

class Init_CreateEdgeResponse_error_existing_edge_is_set
{
public:
  explicit Init_CreateEdgeResponse_error_existing_edge_is_set(::bosdyn_msgs::msg::CreateEdgeResponse & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeResponse_lease_use_result error_existing_edge_is_set(::bosdyn_msgs::msg::CreateEdgeResponse::_error_existing_edge_is_set_type arg)
  {
    msg_.error_existing_edge_is_set = std::move(arg);
    return Init_CreateEdgeResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeResponse msg_;
};

class Init_CreateEdgeResponse_error_existing_edge
{
public:
  explicit Init_CreateEdgeResponse_error_existing_edge(::bosdyn_msgs::msg::CreateEdgeResponse & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeResponse_error_existing_edge_is_set error_existing_edge(::bosdyn_msgs::msg::CreateEdgeResponse::_error_existing_edge_type arg)
  {
    msg_.error_existing_edge = std::move(arg);
    return Init_CreateEdgeResponse_error_existing_edge_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeResponse msg_;
};

class Init_CreateEdgeResponse_status
{
public:
  explicit Init_CreateEdgeResponse_status(::bosdyn_msgs::msg::CreateEdgeResponse & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeResponse_error_existing_edge status(::bosdyn_msgs::msg::CreateEdgeResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CreateEdgeResponse_error_existing_edge(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeResponse msg_;
};

class Init_CreateEdgeResponse_header_is_set
{
public:
  explicit Init_CreateEdgeResponse_header_is_set(::bosdyn_msgs::msg::CreateEdgeResponse & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeResponse_status header_is_set(::bosdyn_msgs::msg::CreateEdgeResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CreateEdgeResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeResponse msg_;
};

class Init_CreateEdgeResponse_header
{
public:
  Init_CreateEdgeResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateEdgeResponse_header_is_set header(::bosdyn_msgs::msg::CreateEdgeResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CreateEdgeResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CreateEdgeResponse>()
{
  return bosdyn_msgs::msg::builder::Init_CreateEdgeResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_RESPONSE__BUILDER_HPP_
