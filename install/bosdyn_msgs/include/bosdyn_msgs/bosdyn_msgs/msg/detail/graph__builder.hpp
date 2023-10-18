// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Graph_anchoring_is_set
{
public:
  explicit Init_Graph_anchoring_is_set(::bosdyn_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Graph anchoring_is_set(::bosdyn_msgs::msg::Graph::_anchoring_is_set_type arg)
  {
    msg_.anchoring_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Graph msg_;
};

class Init_Graph_anchoring
{
public:
  explicit Init_Graph_anchoring(::bosdyn_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_anchoring_is_set anchoring(::bosdyn_msgs::msg::Graph::_anchoring_type arg)
  {
    msg_.anchoring = std::move(arg);
    return Init_Graph_anchoring_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Graph msg_;
};

class Init_Graph_edges
{
public:
  explicit Init_Graph_edges(::bosdyn_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_anchoring edges(::bosdyn_msgs::msg::Graph::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return Init_Graph_anchoring(msg_);
  }

private:
  ::bosdyn_msgs::msg::Graph msg_;
};

class Init_Graph_waypoints
{
public:
  Init_Graph_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Graph_edges waypoints(::bosdyn_msgs::msg::Graph::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_Graph_edges(msg_);
  }

private:
  ::bosdyn_msgs::msg::Graph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Graph>()
{
  return bosdyn_msgs::msg::builder::Init_Graph_waypoints();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_
