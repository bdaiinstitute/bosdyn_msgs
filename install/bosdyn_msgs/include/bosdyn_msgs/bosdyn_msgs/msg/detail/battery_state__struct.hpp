// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_

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
// Member 'estimated_runtime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/battery_state_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BatteryState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BatteryState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryState_
{
  using Type = BatteryState_<ContainerAllocator>;

  explicit BatteryState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    estimated_runtime(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->identifier = "";
      this->charge_percentage = 0.0;
      this->charge_percentage_is_set = false;
      this->estimated_runtime_is_set = false;
      this->current = 0.0;
      this->current_is_set = false;
      this->voltage = 0.0;
      this->voltage_is_set = false;
    }
  }

  explicit BatteryState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    identifier(_alloc),
    estimated_runtime(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_is_set = false;
      this->identifier = "";
      this->charge_percentage = 0.0;
      this->charge_percentage_is_set = false;
      this->estimated_runtime_is_set = false;
      this->current = 0.0;
      this->current_is_set = false;
      this->voltage = 0.0;
      this->voltage_is_set = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _timestamp_is_set_type =
    bool;
  _timestamp_is_set_type timestamp_is_set;
  using _identifier_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _identifier_type identifier;
  using _charge_percentage_type =
    double;
  _charge_percentage_type charge_percentage;
  using _charge_percentage_is_set_type =
    bool;
  _charge_percentage_is_set_type charge_percentage_is_set;
  using _estimated_runtime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _estimated_runtime_type estimated_runtime;
  using _estimated_runtime_is_set_type =
    bool;
  _estimated_runtime_is_set_type estimated_runtime_is_set;
  using _current_type =
    double;
  _current_type current;
  using _current_is_set_type =
    bool;
  _current_is_set_type current_is_set;
  using _voltage_type =
    double;
  _voltage_type voltage;
  using _voltage_is_set_type =
    bool;
  _voltage_is_set_type voltage_is_set;
  using _temperatures_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _temperatures_type temperatures;
  using _status_type =
    bosdyn_msgs::msg::BatteryStateStatus_<ContainerAllocator>;
  _status_type status;

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
  Type & set__identifier(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->identifier = _arg;
    return *this;
  }
  Type & set__charge_percentage(
    const double & _arg)
  {
    this->charge_percentage = _arg;
    return *this;
  }
  Type & set__charge_percentage_is_set(
    const bool & _arg)
  {
    this->charge_percentage_is_set = _arg;
    return *this;
  }
  Type & set__estimated_runtime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->estimated_runtime = _arg;
    return *this;
  }
  Type & set__estimated_runtime_is_set(
    const bool & _arg)
  {
    this->estimated_runtime_is_set = _arg;
    return *this;
  }
  Type & set__current(
    const double & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__current_is_set(
    const bool & _arg)
  {
    this->current_is_set = _arg;
    return *this;
  }
  Type & set__voltage(
    const double & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__voltage_is_set(
    const bool & _arg)
  {
    this->voltage_is_set = _arg;
    return *this;
  }
  Type & set__temperatures(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->temperatures = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::BatteryStateStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BatteryState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BatteryState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BatteryState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BatteryState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BatteryState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BatteryState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BatteryState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BatteryState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BatteryState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BatteryState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BatteryState
    std::shared_ptr<bosdyn_msgs::msg::BatteryState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BatteryState
    std::shared_ptr<bosdyn_msgs::msg::BatteryState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryState_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_is_set != other.timestamp_is_set) {
      return false;
    }
    if (this->identifier != other.identifier) {
      return false;
    }
    if (this->charge_percentage != other.charge_percentage) {
      return false;
    }
    if (this->charge_percentage_is_set != other.charge_percentage_is_set) {
      return false;
    }
    if (this->estimated_runtime != other.estimated_runtime) {
      return false;
    }
    if (this->estimated_runtime_is_set != other.estimated_runtime_is_set) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->current_is_set != other.current_is_set) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->voltage_is_set != other.voltage_is_set) {
      return false;
    }
    if (this->temperatures != other.temperatures) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryState_

// alias to use template instance with default allocator
using BatteryState =
  bosdyn_msgs::msg::BatteryState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
