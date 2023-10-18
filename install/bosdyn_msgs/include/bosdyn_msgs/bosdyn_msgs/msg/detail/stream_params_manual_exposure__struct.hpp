// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsManualExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_MANUAL_EXPOSURE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_MANUAL_EXPOSURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'exposure'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StreamParamsManualExposure __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StreamParamsManualExposure __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StreamParamsManualExposure_
{
  using Type = StreamParamsManualExposure_<ContainerAllocator>;

  explicit StreamParamsManualExposure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : exposure(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_is_set = false;
      this->gain = 0.0f;
      this->gain_is_set = false;
    }
  }

  explicit StreamParamsManualExposure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : exposure(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_is_set = false;
      this->gain = 0.0f;
      this->gain_is_set = false;
    }
  }

  // field types and members
  using _exposure_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _exposure_type exposure;
  using _exposure_is_set_type =
    bool;
  _exposure_is_set_type exposure_is_set;
  using _gain_type =
    float;
  _gain_type gain;
  using _gain_is_set_type =
    bool;
  _gain_is_set_type gain_is_set;

  // setters for named parameter idiom
  Type & set__exposure(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->exposure = _arg;
    return *this;
  }
  Type & set__exposure_is_set(
    const bool & _arg)
  {
    this->exposure_is_set = _arg;
    return *this;
  }
  Type & set__gain(
    const float & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__gain_is_set(
    const bool & _arg)
  {
    this->gain_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParamsManualExposure
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParamsManualExposure
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StreamParamsManualExposure_ & other) const
  {
    if (this->exposure != other.exposure) {
      return false;
    }
    if (this->exposure_is_set != other.exposure_is_set) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->gain_is_set != other.gain_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const StreamParamsManualExposure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StreamParamsManualExposure_

// alias to use template instance with default allocator
using StreamParamsManualExposure =
  bosdyn_msgs::msg::StreamParamsManualExposure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_MANUAL_EXPOSURE__STRUCT_HPP_
