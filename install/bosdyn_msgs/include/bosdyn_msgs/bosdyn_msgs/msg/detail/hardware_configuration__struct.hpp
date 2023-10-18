// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/HardwareConfiguration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__HARDWARE_CONFIGURATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__HARDWARE_CONFIGURATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'skeleton'
#include "bosdyn_msgs/msg/detail/skeleton__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__HardwareConfiguration __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__HardwareConfiguration __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HardwareConfiguration_
{
  using Type = HardwareConfiguration_<ContainerAllocator>;

  explicit HardwareConfiguration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : skeleton(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->skeleton_is_set = false;
      this->can_power_command_request_off_robot = false;
      this->can_power_command_request_cycle_robot = false;
      this->can_power_command_request_payload_ports = false;
      this->can_power_command_request_wifi_radio = false;
      this->has_audio_visual_system = false;
    }
  }

  explicit HardwareConfiguration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : skeleton(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->skeleton_is_set = false;
      this->can_power_command_request_off_robot = false;
      this->can_power_command_request_cycle_robot = false;
      this->can_power_command_request_payload_ports = false;
      this->can_power_command_request_wifi_radio = false;
      this->has_audio_visual_system = false;
    }
  }

  // field types and members
  using _skeleton_type =
    bosdyn_msgs::msg::Skeleton_<ContainerAllocator>;
  _skeleton_type skeleton;
  using _skeleton_is_set_type =
    bool;
  _skeleton_is_set_type skeleton_is_set;
  using _can_power_command_request_off_robot_type =
    bool;
  _can_power_command_request_off_robot_type can_power_command_request_off_robot;
  using _can_power_command_request_cycle_robot_type =
    bool;
  _can_power_command_request_cycle_robot_type can_power_command_request_cycle_robot;
  using _can_power_command_request_payload_ports_type =
    bool;
  _can_power_command_request_payload_ports_type can_power_command_request_payload_ports;
  using _can_power_command_request_wifi_radio_type =
    bool;
  _can_power_command_request_wifi_radio_type can_power_command_request_wifi_radio;
  using _has_audio_visual_system_type =
    bool;
  _has_audio_visual_system_type has_audio_visual_system;

  // setters for named parameter idiom
  Type & set__skeleton(
    const bosdyn_msgs::msg::Skeleton_<ContainerAllocator> & _arg)
  {
    this->skeleton = _arg;
    return *this;
  }
  Type & set__skeleton_is_set(
    const bool & _arg)
  {
    this->skeleton_is_set = _arg;
    return *this;
  }
  Type & set__can_power_command_request_off_robot(
    const bool & _arg)
  {
    this->can_power_command_request_off_robot = _arg;
    return *this;
  }
  Type & set__can_power_command_request_cycle_robot(
    const bool & _arg)
  {
    this->can_power_command_request_cycle_robot = _arg;
    return *this;
  }
  Type & set__can_power_command_request_payload_ports(
    const bool & _arg)
  {
    this->can_power_command_request_payload_ports = _arg;
    return *this;
  }
  Type & set__can_power_command_request_wifi_radio(
    const bool & _arg)
  {
    this->can_power_command_request_wifi_radio = _arg;
    return *this;
  }
  Type & set__has_audio_visual_system(
    const bool & _arg)
  {
    this->has_audio_visual_system = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__HardwareConfiguration
    std::shared_ptr<bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__HardwareConfiguration
    std::shared_ptr<bosdyn_msgs::msg::HardwareConfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareConfiguration_ & other) const
  {
    if (this->skeleton != other.skeleton) {
      return false;
    }
    if (this->skeleton_is_set != other.skeleton_is_set) {
      return false;
    }
    if (this->can_power_command_request_off_robot != other.can_power_command_request_off_robot) {
      return false;
    }
    if (this->can_power_command_request_cycle_robot != other.can_power_command_request_cycle_robot) {
      return false;
    }
    if (this->can_power_command_request_payload_ports != other.can_power_command_request_payload_ports) {
      return false;
    }
    if (this->can_power_command_request_wifi_radio != other.can_power_command_request_wifi_radio) {
      return false;
    }
    if (this->has_audio_visual_system != other.has_audio_visual_system) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareConfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareConfiguration_

// alias to use template instance with default allocator
using HardwareConfiguration =
  bosdyn_msgs::msg::HardwareConfiguration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__HARDWARE_CONFIGURATION__STRUCT_HPP_
