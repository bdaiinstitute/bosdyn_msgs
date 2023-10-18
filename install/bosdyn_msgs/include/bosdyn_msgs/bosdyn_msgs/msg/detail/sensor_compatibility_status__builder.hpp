// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SensorCompatibilityStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SENSOR_COMPATIBILITY_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SENSOR_COMPATIBILITY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/sensor_compatibility_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorCompatibilityStatus_robot_configured_for_lidar
{
public:
  explicit Init_SensorCompatibilityStatus_robot_configured_for_lidar(::bosdyn_msgs::msg::SensorCompatibilityStatus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SensorCompatibilityStatus robot_configured_for_lidar(::bosdyn_msgs::msg::SensorCompatibilityStatus::_robot_configured_for_lidar_type arg)
  {
    msg_.robot_configured_for_lidar = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SensorCompatibilityStatus msg_;
};

class Init_SensorCompatibilityStatus_map_has_lidar_data
{
public:
  Init_SensorCompatibilityStatus_map_has_lidar_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorCompatibilityStatus_robot_configured_for_lidar map_has_lidar_data(::bosdyn_msgs::msg::SensorCompatibilityStatus::_map_has_lidar_data_type arg)
  {
    msg_.map_has_lidar_data = std::move(arg);
    return Init_SensorCompatibilityStatus_robot_configured_for_lidar(msg_);
  }

private:
  ::bosdyn_msgs::msg::SensorCompatibilityStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SensorCompatibilityStatus>()
{
  return bosdyn_msgs::msg::builder::Init_SensorCompatibilityStatus_map_has_lidar_data();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SENSOR_COMPATIBILITY_STATUS__BUILDER_HPP_
