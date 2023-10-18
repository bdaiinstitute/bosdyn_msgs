// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UploadGraphResponseValidationStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE_VALIDATION_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE_VALIDATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/upload_graph_response_validation_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UploadGraphResponseValidationStatus_has_empty_object_anchor_ids
{
public:
  explicit Init_UploadGraphResponseValidationStatus_has_empty_object_anchor_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus has_empty_object_anchor_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_has_empty_object_anchor_ids_type arg)
  {
    msg_.has_empty_object_anchor_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_has_empty_waypoint_anchor_ids
{
public:
  explicit Init_UploadGraphResponseValidationStatus_has_empty_waypoint_anchor_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_has_empty_object_anchor_ids has_empty_waypoint_anchor_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_has_empty_waypoint_anchor_ids_type arg)
  {
    msg_.has_empty_waypoint_anchor_ids = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_has_empty_object_anchor_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_has_empty_edge_ids
{
public:
  explicit Init_UploadGraphResponseValidationStatus_has_empty_edge_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_has_empty_waypoint_anchor_ids has_empty_edge_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_has_empty_edge_ids_type arg)
  {
    msg_.has_empty_edge_ids = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_has_empty_waypoint_anchor_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_has_empty_waypoint_ids
{
public:
  explicit Init_UploadGraphResponseValidationStatus_has_empty_waypoint_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_has_empty_edge_ids has_empty_waypoint_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_has_empty_waypoint_ids_type arg)
  {
    msg_.has_empty_waypoint_ids = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_has_empty_edge_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_invalid_waypoint_ids_self_edges
{
public:
  explicit Init_UploadGraphResponseValidationStatus_invalid_waypoint_ids_self_edges(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_has_empty_waypoint_ids invalid_waypoint_ids_self_edges(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_invalid_waypoint_ids_self_edges_type arg)
  {
    msg_.invalid_waypoint_ids_self_edges = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_has_empty_waypoint_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_duplicate_edge_ids
{
public:
  explicit Init_UploadGraphResponseValidationStatus_duplicate_edge_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_invalid_waypoint_ids_self_edges duplicate_edge_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_duplicate_edge_ids_type arg)
  {
    msg_.duplicate_edge_ids = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_invalid_waypoint_ids_self_edges(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_duplicate_object_anchor_ids
{
public:
  explicit Init_UploadGraphResponseValidationStatus_duplicate_object_anchor_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_duplicate_edge_ids duplicate_object_anchor_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_duplicate_object_anchor_ids_type arg)
  {
    msg_.duplicate_object_anchor_ids = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_duplicate_edge_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_duplicate_waypoint_anchor_ids
{
public:
  explicit Init_UploadGraphResponseValidationStatus_duplicate_waypoint_anchor_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_duplicate_object_anchor_ids duplicate_waypoint_anchor_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_duplicate_waypoint_anchor_ids_type arg)
  {
    msg_.duplicate_waypoint_anchor_ids = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_duplicate_object_anchor_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_duplicate_waypoint_ids
{
public:
  explicit Init_UploadGraphResponseValidationStatus_duplicate_waypoint_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_duplicate_waypoint_anchor_ids duplicate_waypoint_ids(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_duplicate_waypoint_ids_type arg)
  {
    msg_.duplicate_waypoint_ids = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_duplicate_waypoint_anchor_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_object_anchors_invalid_transform
{
public:
  explicit Init_UploadGraphResponseValidationStatus_object_anchors_invalid_transform(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_duplicate_waypoint_ids object_anchors_invalid_transform(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_object_anchors_invalid_transform_type arg)
  {
    msg_.object_anchors_invalid_transform = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_duplicate_waypoint_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_waypoint_anchors_invalid_transform
{
public:
  explicit Init_UploadGraphResponseValidationStatus_waypoint_anchors_invalid_transform(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_object_anchors_invalid_transform waypoint_anchors_invalid_transform(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_waypoint_anchors_invalid_transform_type arg)
  {
    msg_.waypoint_anchors_invalid_transform = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_object_anchors_invalid_transform(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_edge_ids_invalid_transform
{
public:
  explicit Init_UploadGraphResponseValidationStatus_edge_ids_invalid_transform(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_waypoint_anchors_invalid_transform edge_ids_invalid_transform(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_edge_ids_invalid_transform_type arg)
  {
    msg_.edge_ids_invalid_transform = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_waypoint_anchors_invalid_transform(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_missing_waypoint_ids_in_anchors
{
public:
  explicit Init_UploadGraphResponseValidationStatus_missing_waypoint_ids_in_anchors(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponseValidationStatus_edge_ids_invalid_transform missing_waypoint_ids_in_anchors(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_missing_waypoint_ids_in_anchors_type arg)
  {
    msg_.missing_waypoint_ids_in_anchors = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_edge_ids_invalid_transform(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

class Init_UploadGraphResponseValidationStatus_missing_waypoint_ids_in_edges
{
public:
  Init_UploadGraphResponseValidationStatus_missing_waypoint_ids_in_edges()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UploadGraphResponseValidationStatus_missing_waypoint_ids_in_anchors missing_waypoint_ids_in_edges(::bosdyn_msgs::msg::UploadGraphResponseValidationStatus::_missing_waypoint_ids_in_edges_type arg)
  {
    msg_.missing_waypoint_ids_in_edges = std::move(arg);
    return Init_UploadGraphResponseValidationStatus_missing_waypoint_ids_in_anchors(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponseValidationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UploadGraphResponseValidationStatus>()
{
  return bosdyn_msgs::msg::builder::Init_UploadGraphResponseValidationStatus_missing_waypoint_ids_in_edges();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE_VALIDATION_STATUS__BUILDER_HPP_
