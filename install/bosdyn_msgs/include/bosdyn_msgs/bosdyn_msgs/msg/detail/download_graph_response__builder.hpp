// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DownloadGraphResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_GRAPH_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_GRAPH_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/download_graph_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DownloadGraphResponse_graph_is_set
{
public:
  explicit Init_DownloadGraphResponse_graph_is_set(::bosdyn_msgs::msg::DownloadGraphResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DownloadGraphResponse graph_is_set(::bosdyn_msgs::msg::DownloadGraphResponse::_graph_is_set_type arg)
  {
    msg_.graph_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadGraphResponse msg_;
};

class Init_DownloadGraphResponse_graph
{
public:
  explicit Init_DownloadGraphResponse_graph(::bosdyn_msgs::msg::DownloadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadGraphResponse_graph_is_set graph(::bosdyn_msgs::msg::DownloadGraphResponse::_graph_type arg)
  {
    msg_.graph = std::move(arg);
    return Init_DownloadGraphResponse_graph_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadGraphResponse msg_;
};

class Init_DownloadGraphResponse_header_is_set
{
public:
  explicit Init_DownloadGraphResponse_header_is_set(::bosdyn_msgs::msg::DownloadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_DownloadGraphResponse_graph header_is_set(::bosdyn_msgs::msg::DownloadGraphResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DownloadGraphResponse_graph(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadGraphResponse msg_;
};

class Init_DownloadGraphResponse_header
{
public:
  Init_DownloadGraphResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DownloadGraphResponse_header_is_set header(::bosdyn_msgs::msg::DownloadGraphResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DownloadGraphResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DownloadGraphResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DownloadGraphResponse>()
{
  return bosdyn_msgs::msg::builder::Init_DownloadGraphResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOWNLOAD_GRAPH_RESPONSE__BUILDER_HPP_
