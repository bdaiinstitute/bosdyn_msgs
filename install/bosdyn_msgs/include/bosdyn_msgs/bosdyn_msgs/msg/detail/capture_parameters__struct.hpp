// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CaptureParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'exposure_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CaptureParameters __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CaptureParameters __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CaptureParameters_
{
  using Type = CaptureParameters_<ContainerAllocator>;

  explicit CaptureParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : exposure_duration(_init),
    custom_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_duration_is_set = false;
      this->gain = 0.0;
      this->custom_params_is_set = false;
    }
  }

  explicit CaptureParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : exposure_duration(_alloc, _init),
    custom_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_duration_is_set = false;
      this->gain = 0.0;
      this->custom_params_is_set = false;
    }
  }

  // field types and members
  using _exposure_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _exposure_duration_type exposure_duration;
  using _exposure_duration_is_set_type =
    bool;
  _exposure_duration_is_set_type exposure_duration_is_set;
  using _gain_type =
    double;
  _gain_type gain;
  using _custom_params_type =
    bosdyn_msgs::msg::DictParam_<ContainerAllocator>;
  _custom_params_type custom_params;
  using _custom_params_is_set_type =
    bool;
  _custom_params_is_set_type custom_params_is_set;

  // setters for named parameter idiom
  Type & set__exposure_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->exposure_duration = _arg;
    return *this;
  }
  Type & set__exposure_duration_is_set(
    const bool & _arg)
  {
    this->exposure_duration_is_set = _arg;
    return *this;
  }
  Type & set__gain(
    const double & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__custom_params(
    const bosdyn_msgs::msg::DictParam_<ContainerAllocator> & _arg)
  {
    this->custom_params = _arg;
    return *this;
  }
  Type & set__custom_params_is_set(
    const bool & _arg)
  {
    this->custom_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CaptureParameters
    std::shared_ptr<bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CaptureParameters
    std::shared_ptr<bosdyn_msgs::msg::CaptureParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureParameters_ & other) const
  {
    if (this->exposure_duration != other.exposure_duration) {
      return false;
    }
    if (this->exposure_duration_is_set != other.exposure_duration_is_set) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->custom_params != other.custom_params) {
      return false;
    }
    if (this->custom_params_is_set != other.custom_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureParameters_

// alias to use template instance with default allocator
using CaptureParameters =
  bosdyn_msgs::msg::CaptureParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAPTURE_PARAMETERS__STRUCT_HPP_
