// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BatteryMonitor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BATTERY_MONITOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BATTERY_MONITOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BatteryMonitor __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BatteryMonitor __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryMonitor_
{
  using Type = BatteryMonitor_<ContainerAllocator>;

  explicit BatteryMonitor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_start_threshold = 0.0f;
      this->battery_stop_threshold = 0.0f;
    }
  }

  explicit BatteryMonitor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_start_threshold = 0.0f;
      this->battery_stop_threshold = 0.0f;
    }
  }

  // field types and members
  using _battery_start_threshold_type =
    float;
  _battery_start_threshold_type battery_start_threshold;
  using _battery_stop_threshold_type =
    float;
  _battery_stop_threshold_type battery_stop_threshold;

  // setters for named parameter idiom
  Type & set__battery_start_threshold(
    const float & _arg)
  {
    this->battery_start_threshold = _arg;
    return *this;
  }
  Type & set__battery_stop_threshold(
    const float & _arg)
  {
    this->battery_stop_threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BatteryMonitor
    std::shared_ptr<bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BatteryMonitor
    std::shared_ptr<bosdyn_msgs::msg::BatteryMonitor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryMonitor_ & other) const
  {
    if (this->battery_start_threshold != other.battery_start_threshold) {
      return false;
    }
    if (this->battery_stop_threshold != other.battery_stop_threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryMonitor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryMonitor_

// alias to use template instance with default allocator
using BatteryMonitor =
  bosdyn_msgs::msg::BatteryMonitor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BATTERY_MONITOR__STRUCT_HPP_
