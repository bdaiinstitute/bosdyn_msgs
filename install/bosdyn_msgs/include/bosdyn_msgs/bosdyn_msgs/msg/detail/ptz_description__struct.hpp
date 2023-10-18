// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PtzDescription.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pan_limit'
// Member 'tilt_limit'
// Member 'zoom_limit'
#include "bosdyn_msgs/msg/detail/ptz_description_limits__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PtzDescription __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PtzDescription __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PtzDescription_
{
  using Type = PtzDescription_<ContainerAllocator>;

  explicit PtzDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pan_limit(_init),
    tilt_limit(_init),
    zoom_limit(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->pan_limit_is_set = false;
      this->tilt_limit_is_set = false;
      this->zoom_limit_is_set = false;
    }
  }

  explicit PtzDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    pan_limit(_alloc, _init),
    tilt_limit(_alloc, _init),
    zoom_limit(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->pan_limit_is_set = false;
      this->tilt_limit_is_set = false;
      this->zoom_limit_is_set = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _pan_limit_type =
    bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator>;
  _pan_limit_type pan_limit;
  using _pan_limit_is_set_type =
    bool;
  _pan_limit_is_set_type pan_limit_is_set;
  using _tilt_limit_type =
    bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator>;
  _tilt_limit_type tilt_limit;
  using _tilt_limit_is_set_type =
    bool;
  _tilt_limit_is_set_type tilt_limit_is_set;
  using _zoom_limit_type =
    bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator>;
  _zoom_limit_type zoom_limit;
  using _zoom_limit_is_set_type =
    bool;
  _zoom_limit_is_set_type zoom_limit_is_set;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pan_limit(
    const bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator> & _arg)
  {
    this->pan_limit = _arg;
    return *this;
  }
  Type & set__pan_limit_is_set(
    const bool & _arg)
  {
    this->pan_limit_is_set = _arg;
    return *this;
  }
  Type & set__tilt_limit(
    const bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator> & _arg)
  {
    this->tilt_limit = _arg;
    return *this;
  }
  Type & set__tilt_limit_is_set(
    const bool & _arg)
  {
    this->tilt_limit_is_set = _arg;
    return *this;
  }
  Type & set__zoom_limit(
    const bosdyn_msgs::msg::PtzDescriptionLimits_<ContainerAllocator> & _arg)
  {
    this->zoom_limit = _arg;
    return *this;
  }
  Type & set__zoom_limit_is_set(
    const bool & _arg)
  {
    this->zoom_limit_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PtzDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PtzDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PtzDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PtzDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PtzDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PtzDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PtzDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PtzDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PtzDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PtzDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PtzDescription
    std::shared_ptr<bosdyn_msgs::msg::PtzDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PtzDescription
    std::shared_ptr<bosdyn_msgs::msg::PtzDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PtzDescription_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->pan_limit != other.pan_limit) {
      return false;
    }
    if (this->pan_limit_is_set != other.pan_limit_is_set) {
      return false;
    }
    if (this->tilt_limit != other.tilt_limit) {
      return false;
    }
    if (this->tilt_limit_is_set != other.tilt_limit_is_set) {
      return false;
    }
    if (this->zoom_limit != other.zoom_limit) {
      return false;
    }
    if (this->zoom_limit_is_set != other.zoom_limit_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PtzDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PtzDescription_

// alias to use template instance with default allocator
using PtzDescription =
  bosdyn_msgs::msg::PtzDescription_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION__STRUCT_HPP_
