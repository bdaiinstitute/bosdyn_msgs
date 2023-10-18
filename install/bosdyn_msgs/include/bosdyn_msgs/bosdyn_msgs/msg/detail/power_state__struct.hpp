// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PowerState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'motor_power_state'
#include "bosdyn_msgs/msg/detail/power_state_motor_power_state__struct.hpp"
// Member 'shore_power_state'
#include "bosdyn_msgs/msg/detail/power_state_shore_power_state__struct.hpp"
// Member 'robot_power_state'
#include "bosdyn_msgs/msg/detail/power_state_robot_power_state__struct.hpp"
// Member 'payload_ports_power_state'
#include "bosdyn_msgs/msg/detail/power_state_payload_ports_power_state__struct.hpp"
// Member 'wifi_radio_power_state'
#include "bosdyn_msgs/msg/detail/power_state_wifi_radio_power_state__struct.hpp"
// Member 'locomotion_estimated_runtime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PowerState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PowerState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerState_
{
  using Type = PowerState_<ContainerAllocator>;

  explicit PowerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    motor_power_state(_init),
    shore_power_state(_init),
    robot_power_state(_init),
    payload_ports_power_state(_init),
    wifi_radio_power_state(_init),
    locomotion_estimated_runtime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->locomotion_charge_percentage = 0.0;
      this->locomotion_charge_percentage_is_set = false;
      this->locomotion_estimated_runtime_is_set = false;
    }
  }

  explicit PowerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    motor_power_state(_alloc, _init),
    shore_power_state(_alloc, _init),
    robot_power_state(_alloc, _init),
    payload_ports_power_state(_alloc, _init),
    wifi_radio_power_state(_alloc, _init),
    locomotion_estimated_runtime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->locomotion_charge_percentage = 0.0;
      this->locomotion_charge_percentage_is_set = false;
      this->locomotion_estimated_runtime_is_set = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _timestamp_is_set_type =
    bool;
  _timestamp_is_set_type timestamp_is_set;
  using _motor_power_state_type =
    bosdyn_msgs::msg::PowerStateMotorPowerState_<ContainerAllocator>;
  _motor_power_state_type motor_power_state;
  using _shore_power_state_type =
    bosdyn_msgs::msg::PowerStateShorePowerState_<ContainerAllocator>;
  _shore_power_state_type shore_power_state;
  using _robot_power_state_type =
    bosdyn_msgs::msg::PowerStateRobotPowerState_<ContainerAllocator>;
  _robot_power_state_type robot_power_state;
  using _payload_ports_power_state_type =
    bosdyn_msgs::msg::PowerStatePayloadPortsPowerState_<ContainerAllocator>;
  _payload_ports_power_state_type payload_ports_power_state;
  using _wifi_radio_power_state_type =
    bosdyn_msgs::msg::PowerStateWifiRadioPowerState_<ContainerAllocator>;
  _wifi_radio_power_state_type wifi_radio_power_state;
  using _locomotion_charge_percentage_type =
    double;
  _locomotion_charge_percentage_type locomotion_charge_percentage;
  using _locomotion_charge_percentage_is_set_type =
    bool;
  _locomotion_charge_percentage_is_set_type locomotion_charge_percentage_is_set;
  using _locomotion_estimated_runtime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _locomotion_estimated_runtime_type locomotion_estimated_runtime;
  using _locomotion_estimated_runtime_is_set_type =
    bool;
  _locomotion_estimated_runtime_is_set_type locomotion_estimated_runtime_is_set;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_is_set(
    const bool & _arg)
  {
    this->timestamp_is_set = _arg;
    return *this;
  }
  Type & set__motor_power_state(
    const bosdyn_msgs::msg::PowerStateMotorPowerState_<ContainerAllocator> & _arg)
  {
    this->motor_power_state = _arg;
    return *this;
  }
  Type & set__shore_power_state(
    const bosdyn_msgs::msg::PowerStateShorePowerState_<ContainerAllocator> & _arg)
  {
    this->shore_power_state = _arg;
    return *this;
  }
  Type & set__robot_power_state(
    const bosdyn_msgs::msg::PowerStateRobotPowerState_<ContainerAllocator> & _arg)
  {
    this->robot_power_state = _arg;
    return *this;
  }
  Type & set__payload_ports_power_state(
    const bosdyn_msgs::msg::PowerStatePayloadPortsPowerState_<ContainerAllocator> & _arg)
  {
    this->payload_ports_power_state = _arg;
    return *this;
  }
  Type & set__wifi_radio_power_state(
    const bosdyn_msgs::msg::PowerStateWifiRadioPowerState_<ContainerAllocator> & _arg)
  {
    this->wifi_radio_power_state = _arg;
    return *this;
  }
  Type & set__locomotion_charge_percentage(
    const double & _arg)
  {
    this->locomotion_charge_percentage = _arg;
    return *this;
  }
  Type & set__locomotion_charge_percentage_is_set(
    const bool & _arg)
  {
    this->locomotion_charge_percentage_is_set = _arg;
    return *this;
  }
  Type & set__locomotion_estimated_runtime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->locomotion_estimated_runtime = _arg;
    return *this;
  }
  Type & set__locomotion_estimated_runtime_is_set(
    const bool & _arg)
  {
    this->locomotion_estimated_runtime_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PowerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PowerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PowerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PowerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PowerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PowerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PowerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PowerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PowerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PowerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PowerState
    std::shared_ptr<bosdyn_msgs::msg::PowerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PowerState
    std::shared_ptr<bosdyn_msgs::msg::PowerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerState_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_is_set != other.timestamp_is_set) {
      return false;
    }
    if (this->motor_power_state != other.motor_power_state) {
      return false;
    }
    if (this->shore_power_state != other.shore_power_state) {
      return false;
    }
    if (this->robot_power_state != other.robot_power_state) {
      return false;
    }
    if (this->payload_ports_power_state != other.payload_ports_power_state) {
      return false;
    }
    if (this->wifi_radio_power_state != other.wifi_radio_power_state) {
      return false;
    }
    if (this->locomotion_charge_percentage != other.locomotion_charge_percentage) {
      return false;
    }
    if (this->locomotion_charge_percentage_is_set != other.locomotion_charge_percentage_is_set) {
      return false;
    }
    if (this->locomotion_estimated_runtime != other.locomotion_estimated_runtime) {
      return false;
    }
    if (this->locomotion_estimated_runtime_is_set != other.locomotion_estimated_runtime_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerState_

// alias to use template instance with default allocator
using PowerState =
  bosdyn_msgs::msg::PowerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_STATE__STRUCT_HPP_
