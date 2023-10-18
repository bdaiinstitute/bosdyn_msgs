// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SensorCompatibilityStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SENSOR_COMPATIBILITY_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SENSOR_COMPATIBILITY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SensorCompatibilityStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SensorCompatibilityStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorCompatibilityStatus_
{
  using Type = SensorCompatibilityStatus_<ContainerAllocator>;

  explicit SensorCompatibilityStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_has_lidar_data = false;
      this->robot_configured_for_lidar = false;
    }
  }

  explicit SensorCompatibilityStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_has_lidar_data = false;
      this->robot_configured_for_lidar = false;
    }
  }

  // field types and members
  using _map_has_lidar_data_type =
    bool;
  _map_has_lidar_data_type map_has_lidar_data;
  using _robot_configured_for_lidar_type =
    bool;
  _robot_configured_for_lidar_type robot_configured_for_lidar;

  // setters for named parameter idiom
  Type & set__map_has_lidar_data(
    const bool & _arg)
  {
    this->map_has_lidar_data = _arg;
    return *this;
  }
  Type & set__robot_configured_for_lidar(
    const bool & _arg)
  {
    this->robot_configured_for_lidar = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SensorCompatibilityStatus
    std::shared_ptr<bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SensorCompatibilityStatus
    std::shared_ptr<bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorCompatibilityStatus_ & other) const
  {
    if (this->map_has_lidar_data != other.map_has_lidar_data) {
      return false;
    }
    if (this->robot_configured_for_lidar != other.robot_configured_for_lidar) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorCompatibilityStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorCompatibilityStatus_

// alias to use template instance with default allocator
using SensorCompatibilityStatus =
  bosdyn_msgs::msg::SensorCompatibilityStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SENSOR_COMPATIBILITY_STATUS__STRUCT_HPP_
