// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PowerStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PowerStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PowerStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerStatus_
{
  using Type = PowerStatus_<ContainerAllocator>;

  explicit PowerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ptz = false;
      this->ptz_is_set = false;
      this->aux1 = false;
      this->aux1_is_set = false;
      this->aux2 = false;
      this->aux2_is_set = false;
      this->external_mic = false;
      this->external_mic_is_set = false;
    }
  }

  explicit PowerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ptz = false;
      this->ptz_is_set = false;
      this->aux1 = false;
      this->aux1_is_set = false;
      this->aux2 = false;
      this->aux2_is_set = false;
      this->external_mic = false;
      this->external_mic_is_set = false;
    }
  }

  // field types and members
  using _ptz_type =
    bool;
  _ptz_type ptz;
  using _ptz_is_set_type =
    bool;
  _ptz_is_set_type ptz_is_set;
  using _aux1_type =
    bool;
  _aux1_type aux1;
  using _aux1_is_set_type =
    bool;
  _aux1_is_set_type aux1_is_set;
  using _aux2_type =
    bool;
  _aux2_type aux2;
  using _aux2_is_set_type =
    bool;
  _aux2_is_set_type aux2_is_set;
  using _external_mic_type =
    bool;
  _external_mic_type external_mic;
  using _external_mic_is_set_type =
    bool;
  _external_mic_is_set_type external_mic_is_set;

  // setters for named parameter idiom
  Type & set__ptz(
    const bool & _arg)
  {
    this->ptz = _arg;
    return *this;
  }
  Type & set__ptz_is_set(
    const bool & _arg)
  {
    this->ptz_is_set = _arg;
    return *this;
  }
  Type & set__aux1(
    const bool & _arg)
  {
    this->aux1 = _arg;
    return *this;
  }
  Type & set__aux1_is_set(
    const bool & _arg)
  {
    this->aux1_is_set = _arg;
    return *this;
  }
  Type & set__aux2(
    const bool & _arg)
  {
    this->aux2 = _arg;
    return *this;
  }
  Type & set__aux2_is_set(
    const bool & _arg)
  {
    this->aux2_is_set = _arg;
    return *this;
  }
  Type & set__external_mic(
    const bool & _arg)
  {
    this->external_mic = _arg;
    return *this;
  }
  Type & set__external_mic_is_set(
    const bool & _arg)
  {
    this->external_mic_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PowerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PowerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PowerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PowerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PowerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PowerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PowerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PowerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PowerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PowerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PowerStatus
    std::shared_ptr<bosdyn_msgs::msg::PowerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PowerStatus
    std::shared_ptr<bosdyn_msgs::msg::PowerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerStatus_ & other) const
  {
    if (this->ptz != other.ptz) {
      return false;
    }
    if (this->ptz_is_set != other.ptz_is_set) {
      return false;
    }
    if (this->aux1 != other.aux1) {
      return false;
    }
    if (this->aux1_is_set != other.aux1_is_set) {
      return false;
    }
    if (this->aux2 != other.aux2) {
      return false;
    }
    if (this->aux2_is_set != other.aux2_is_set) {
      return false;
    }
    if (this->external_mic != other.external_mic) {
      return false;
    }
    if (this->external_mic_is_set != other.external_mic_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerStatus_

// alias to use template instance with default allocator
using PowerStatus =
  bosdyn_msgs::msg::PowerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_STATUS__STRUCT_HPP_
