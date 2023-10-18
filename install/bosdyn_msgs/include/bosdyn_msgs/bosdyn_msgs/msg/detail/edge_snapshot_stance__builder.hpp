// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EdgeSnapshotStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT_STANCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT_STANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/edge_snapshot_stance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EdgeSnapshotStance_planar_ground_is_set
{
public:
  explicit Init_EdgeSnapshotStance_planar_ground_is_set(::bosdyn_msgs::msg::EdgeSnapshotStance & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EdgeSnapshotStance planar_ground_is_set(::bosdyn_msgs::msg::EdgeSnapshotStance::_planar_ground_is_set_type arg)
  {
    msg_.planar_ground_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshotStance msg_;
};

class Init_EdgeSnapshotStance_planar_ground
{
public:
  explicit Init_EdgeSnapshotStance_planar_ground(::bosdyn_msgs::msg::EdgeSnapshotStance & msg)
  : msg_(msg)
  {}
  Init_EdgeSnapshotStance_planar_ground_is_set planar_ground(::bosdyn_msgs::msg::EdgeSnapshotStance::_planar_ground_type arg)
  {
    msg_.planar_ground = std::move(arg);
    return Init_EdgeSnapshotStance_planar_ground_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshotStance msg_;
};

class Init_EdgeSnapshotStance_vision_tform_body_is_set
{
public:
  explicit Init_EdgeSnapshotStance_vision_tform_body_is_set(::bosdyn_msgs::msg::EdgeSnapshotStance & msg)
  : msg_(msg)
  {}
  Init_EdgeSnapshotStance_planar_ground vision_tform_body_is_set(::bosdyn_msgs::msg::EdgeSnapshotStance::_vision_tform_body_is_set_type arg)
  {
    msg_.vision_tform_body_is_set = std::move(arg);
    return Init_EdgeSnapshotStance_planar_ground(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshotStance msg_;
};

class Init_EdgeSnapshotStance_vision_tform_body
{
public:
  explicit Init_EdgeSnapshotStance_vision_tform_body(::bosdyn_msgs::msg::EdgeSnapshotStance & msg)
  : msg_(msg)
  {}
  Init_EdgeSnapshotStance_vision_tform_body_is_set vision_tform_body(::bosdyn_msgs::msg::EdgeSnapshotStance::_vision_tform_body_type arg)
  {
    msg_.vision_tform_body = std::move(arg);
    return Init_EdgeSnapshotStance_vision_tform_body_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshotStance msg_;
};

class Init_EdgeSnapshotStance_ko_tform_body_is_set
{
public:
  explicit Init_EdgeSnapshotStance_ko_tform_body_is_set(::bosdyn_msgs::msg::EdgeSnapshotStance & msg)
  : msg_(msg)
  {}
  Init_EdgeSnapshotStance_vision_tform_body ko_tform_body_is_set(::bosdyn_msgs::msg::EdgeSnapshotStance::_ko_tform_body_is_set_type arg)
  {
    msg_.ko_tform_body_is_set = std::move(arg);
    return Init_EdgeSnapshotStance_vision_tform_body(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshotStance msg_;
};

class Init_EdgeSnapshotStance_ko_tform_body
{
public:
  explicit Init_EdgeSnapshotStance_ko_tform_body(::bosdyn_msgs::msg::EdgeSnapshotStance & msg)
  : msg_(msg)
  {}
  Init_EdgeSnapshotStance_ko_tform_body_is_set ko_tform_body(::bosdyn_msgs::msg::EdgeSnapshotStance::_ko_tform_body_type arg)
  {
    msg_.ko_tform_body = std::move(arg);
    return Init_EdgeSnapshotStance_ko_tform_body_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshotStance msg_;
};

class Init_EdgeSnapshotStance_foot_states
{
public:
  explicit Init_EdgeSnapshotStance_foot_states(::bosdyn_msgs::msg::EdgeSnapshotStance & msg)
  : msg_(msg)
  {}
  Init_EdgeSnapshotStance_ko_tform_body foot_states(::bosdyn_msgs::msg::EdgeSnapshotStance::_foot_states_type arg)
  {
    msg_.foot_states = std::move(arg);
    return Init_EdgeSnapshotStance_ko_tform_body(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshotStance msg_;
};

class Init_EdgeSnapshotStance_timestamp_is_set
{
public:
  explicit Init_EdgeSnapshotStance_timestamp_is_set(::bosdyn_msgs::msg::EdgeSnapshotStance & msg)
  : msg_(msg)
  {}
  Init_EdgeSnapshotStance_foot_states timestamp_is_set(::bosdyn_msgs::msg::EdgeSnapshotStance::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_EdgeSnapshotStance_foot_states(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshotStance msg_;
};

class Init_EdgeSnapshotStance_timestamp
{
public:
  Init_EdgeSnapshotStance_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EdgeSnapshotStance_timestamp_is_set timestamp(::bosdyn_msgs::msg::EdgeSnapshotStance::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EdgeSnapshotStance_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshotStance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EdgeSnapshotStance>()
{
  return bosdyn_msgs::msg::builder::Init_EdgeSnapshotStance_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT_STANCE__BUILDER_HPP_
