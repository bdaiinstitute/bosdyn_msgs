// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Edge_annotations_is_set
{
public:
  explicit Init_Edge_annotations_is_set(::bosdyn_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Edge annotations_is_set(::bosdyn_msgs::msg::Edge::_annotations_is_set_type arg)
  {
    msg_.annotations_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Edge msg_;
};

class Init_Edge_annotations
{
public:
  explicit Init_Edge_annotations(::bosdyn_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_annotations_is_set annotations(::bosdyn_msgs::msg::Edge::_annotations_type arg)
  {
    msg_.annotations = std::move(arg);
    return Init_Edge_annotations_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Edge msg_;
};

class Init_Edge_from_tform_to_is_set
{
public:
  explicit Init_Edge_from_tform_to_is_set(::bosdyn_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_annotations from_tform_to_is_set(::bosdyn_msgs::msg::Edge::_from_tform_to_is_set_type arg)
  {
    msg_.from_tform_to_is_set = std::move(arg);
    return Init_Edge_annotations(msg_);
  }

private:
  ::bosdyn_msgs::msg::Edge msg_;
};

class Init_Edge_from_tform_to
{
public:
  explicit Init_Edge_from_tform_to(::bosdyn_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_from_tform_to_is_set from_tform_to(::bosdyn_msgs::msg::Edge::_from_tform_to_type arg)
  {
    msg_.from_tform_to = std::move(arg);
    return Init_Edge_from_tform_to_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Edge msg_;
};

class Init_Edge_snapshot_id
{
public:
  explicit Init_Edge_snapshot_id(::bosdyn_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_from_tform_to snapshot_id(::bosdyn_msgs::msg::Edge::_snapshot_id_type arg)
  {
    msg_.snapshot_id = std::move(arg);
    return Init_Edge_from_tform_to(msg_);
  }

private:
  ::bosdyn_msgs::msg::Edge msg_;
};

class Init_Edge_id_is_set
{
public:
  explicit Init_Edge_id_is_set(::bosdyn_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_snapshot_id id_is_set(::bosdyn_msgs::msg::Edge::_id_is_set_type arg)
  {
    msg_.id_is_set = std::move(arg);
    return Init_Edge_snapshot_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::Edge msg_;
};

class Init_Edge_id
{
public:
  Init_Edge_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Edge_id_is_set id(::bosdyn_msgs::msg::Edge::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Edge_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Edge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Edge>()
{
  return bosdyn_msgs::msg::builder::Init_Edge_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_
