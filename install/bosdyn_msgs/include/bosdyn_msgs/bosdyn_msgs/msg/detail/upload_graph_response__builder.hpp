// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UploadGraphResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/upload_graph_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UploadGraphResponse_validation_status_is_set
{
public:
  explicit Init_UploadGraphResponse_validation_status_is_set(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UploadGraphResponse validation_status_is_set(::bosdyn_msgs::msg::UploadGraphResponse::_validation_status_is_set_type arg)
  {
    msg_.validation_status_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_validation_status
{
public:
  explicit Init_UploadGraphResponse_validation_status(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_validation_status_is_set validation_status(::bosdyn_msgs::msg::UploadGraphResponse::_validation_status_type arg)
  {
    msg_.validation_status = std::move(arg);
    return Init_UploadGraphResponse_validation_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_map_stats_is_set
{
public:
  explicit Init_UploadGraphResponse_map_stats_is_set(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_validation_status map_stats_is_set(::bosdyn_msgs::msg::UploadGraphResponse::_map_stats_is_set_type arg)
  {
    msg_.map_stats_is_set = std::move(arg);
    return Init_UploadGraphResponse_validation_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_map_stats
{
public:
  explicit Init_UploadGraphResponse_map_stats(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_map_stats_is_set map_stats(::bosdyn_msgs::msg::UploadGraphResponse::_map_stats_type arg)
  {
    msg_.map_stats = std::move(arg);
    return Init_UploadGraphResponse_map_stats_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_area_callback_error_is_set
{
public:
  explicit Init_UploadGraphResponse_area_callback_error_is_set(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_map_stats area_callback_error_is_set(::bosdyn_msgs::msg::UploadGraphResponse::_area_callback_error_is_set_type arg)
  {
    msg_.area_callback_error_is_set = std::move(arg);
    return Init_UploadGraphResponse_map_stats(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_area_callback_error
{
public:
  explicit Init_UploadGraphResponse_area_callback_error(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_area_callback_error_is_set area_callback_error(::bosdyn_msgs::msg::UploadGraphResponse::_area_callback_error_type arg)
  {
    msg_.area_callback_error = std::move(arg);
    return Init_UploadGraphResponse_area_callback_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_sensor_status_is_set
{
public:
  explicit Init_UploadGraphResponse_sensor_status_is_set(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_area_callback_error sensor_status_is_set(::bosdyn_msgs::msg::UploadGraphResponse::_sensor_status_is_set_type arg)
  {
    msg_.sensor_status_is_set = std::move(arg);
    return Init_UploadGraphResponse_area_callback_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_sensor_status
{
public:
  explicit Init_UploadGraphResponse_sensor_status(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_sensor_status_is_set sensor_status(::bosdyn_msgs::msg::UploadGraphResponse::_sensor_status_type arg)
  {
    msg_.sensor_status = std::move(arg);
    return Init_UploadGraphResponse_sensor_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_license_status
{
public:
  explicit Init_UploadGraphResponse_license_status(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_sensor_status license_status(::bosdyn_msgs::msg::UploadGraphResponse::_license_status_type arg)
  {
    msg_.license_status = std::move(arg);
    return Init_UploadGraphResponse_sensor_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_unknown_edge_snapshot_ids
{
public:
  explicit Init_UploadGraphResponse_unknown_edge_snapshot_ids(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_license_status unknown_edge_snapshot_ids(::bosdyn_msgs::msg::UploadGraphResponse::_unknown_edge_snapshot_ids_type arg)
  {
    msg_.unknown_edge_snapshot_ids = std::move(arg);
    return Init_UploadGraphResponse_license_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_loaded_edge_snapshot_ids
{
public:
  explicit Init_UploadGraphResponse_loaded_edge_snapshot_ids(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_unknown_edge_snapshot_ids loaded_edge_snapshot_ids(::bosdyn_msgs::msg::UploadGraphResponse::_loaded_edge_snapshot_ids_type arg)
  {
    msg_.loaded_edge_snapshot_ids = std::move(arg);
    return Init_UploadGraphResponse_unknown_edge_snapshot_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_unknown_waypoint_snapshot_ids
{
public:
  explicit Init_UploadGraphResponse_unknown_waypoint_snapshot_ids(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_loaded_edge_snapshot_ids unknown_waypoint_snapshot_ids(::bosdyn_msgs::msg::UploadGraphResponse::_unknown_waypoint_snapshot_ids_type arg)
  {
    msg_.unknown_waypoint_snapshot_ids = std::move(arg);
    return Init_UploadGraphResponse_loaded_edge_snapshot_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_loaded_waypoint_snapshot_ids
{
public:
  explicit Init_UploadGraphResponse_loaded_waypoint_snapshot_ids(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_unknown_waypoint_snapshot_ids loaded_waypoint_snapshot_ids(::bosdyn_msgs::msg::UploadGraphResponse::_loaded_waypoint_snapshot_ids_type arg)
  {
    msg_.loaded_waypoint_snapshot_ids = std::move(arg);
    return Init_UploadGraphResponse_unknown_waypoint_snapshot_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_lease_use_result_is_set
{
public:
  explicit Init_UploadGraphResponse_lease_use_result_is_set(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_loaded_waypoint_snapshot_ids lease_use_result_is_set(::bosdyn_msgs::msg::UploadGraphResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_UploadGraphResponse_loaded_waypoint_snapshot_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_lease_use_result
{
public:
  explicit Init_UploadGraphResponse_lease_use_result(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::UploadGraphResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_UploadGraphResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_status
{
public:
  explicit Init_UploadGraphResponse_status(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_lease_use_result status(::bosdyn_msgs::msg::UploadGraphResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_UploadGraphResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_header_is_set
{
public:
  explicit Init_UploadGraphResponse_header_is_set(::bosdyn_msgs::msg::UploadGraphResponse & msg)
  : msg_(msg)
  {}
  Init_UploadGraphResponse_status header_is_set(::bosdyn_msgs::msg::UploadGraphResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UploadGraphResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

class Init_UploadGraphResponse_header
{
public:
  Init_UploadGraphResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UploadGraphResponse_header_is_set header(::bosdyn_msgs::msg::UploadGraphResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UploadGraphResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UploadGraphResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UploadGraphResponse>()
{
  return bosdyn_msgs::msg::builder::Init_UploadGraphResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE__BUILDER_HPP_
