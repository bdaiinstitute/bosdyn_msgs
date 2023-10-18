// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsAwbMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_AWB_MODE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_AWB_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'awb'
#include "bosdyn_msgs/msg/detail/stream_params_awb_mode_enum__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StreamParamsAwbMode __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StreamParamsAwbMode __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StreamParamsAwbMode_
{
  using Type = StreamParamsAwbMode_<ContainerAllocator>;

  explicit StreamParamsAwbMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : awb(_init)
  {
    (void)_init;
  }

  explicit StreamParamsAwbMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : awb(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _awb_type =
    bosdyn_msgs::msg::StreamParamsAwbModeEnum_<ContainerAllocator>;
  _awb_type awb;

  // setters for named parameter idiom
  Type & set__awb(
    const bosdyn_msgs::msg::StreamParamsAwbModeEnum_<ContainerAllocator> & _arg)
  {
    this->awb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParamsAwbMode
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParamsAwbMode
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StreamParamsAwbMode_ & other) const
  {
    if (this->awb != other.awb) {
      return false;
    }
    return true;
  }
  bool operator!=(const StreamParamsAwbMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StreamParamsAwbMode_

// alias to use template instance with default allocator
using StreamParamsAwbMode =
  bosdyn_msgs::msg::StreamParamsAwbMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_AWB_MODE__STRUCT_HPP_
