// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsSyncAutoExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_SYNC_AUTO_EXPOSURE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_SYNC_AUTO_EXPOSURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StreamParamsSyncAutoExposure __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StreamParamsSyncAutoExposure __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StreamParamsSyncAutoExposure_
{
  using Type = StreamParamsSyncAutoExposure_<ContainerAllocator>;

  explicit StreamParamsSyncAutoExposure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness_target = 0l;
      this->brightness_target_is_set = false;
    }
  }

  explicit StreamParamsSyncAutoExposure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness_target = 0l;
      this->brightness_target_is_set = false;
    }
  }

  // field types and members
  using _brightness_target_type =
    int32_t;
  _brightness_target_type brightness_target;
  using _brightness_target_is_set_type =
    bool;
  _brightness_target_is_set_type brightness_target_is_set;

  // setters for named parameter idiom
  Type & set__brightness_target(
    const int32_t & _arg)
  {
    this->brightness_target = _arg;
    return *this;
  }
  Type & set__brightness_target_is_set(
    const bool & _arg)
  {
    this->brightness_target_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParamsSyncAutoExposure
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParamsSyncAutoExposure
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StreamParamsSyncAutoExposure_ & other) const
  {
    if (this->brightness_target != other.brightness_target) {
      return false;
    }
    if (this->brightness_target_is_set != other.brightness_target_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const StreamParamsSyncAutoExposure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StreamParamsSyncAutoExposure_

// alias to use template instance with default allocator
using StreamParamsSyncAutoExposure =
  bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_SYNC_AUTO_EXPOSURE__STRUCT_HPP_
