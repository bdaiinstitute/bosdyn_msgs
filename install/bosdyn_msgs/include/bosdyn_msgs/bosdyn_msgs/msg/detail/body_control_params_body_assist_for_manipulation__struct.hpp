// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParamsBodyAssistForManipulation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_ASSIST_FOR_MANIPULATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_ASSIST_FOR_MANIPULATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BodyControlParamsBodyAssistForManipulation_
{
  using Type = BodyControlParamsBodyAssistForManipulation_<ContainerAllocator>;

  explicit BodyControlParamsBodyAssistForManipulation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_body_yaw_assist = false;
      this->enable_hip_height_assist = false;
    }
  }

  explicit BodyControlParamsBodyAssistForManipulation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_body_yaw_assist = false;
      this->enable_hip_height_assist = false;
    }
  }

  // field types and members
  using _enable_body_yaw_assist_type =
    bool;
  _enable_body_yaw_assist_type enable_body_yaw_assist;
  using _enable_hip_height_assist_type =
    bool;
  _enable_hip_height_assist_type enable_hip_height_assist;

  // setters for named parameter idiom
  Type & set__enable_body_yaw_assist(
    const bool & _arg)
  {
    this->enable_body_yaw_assist = _arg;
    return *this;
  }
  Type & set__enable_hip_height_assist(
    const bool & _arg)
  {
    this->enable_hip_height_assist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BodyControlParamsBodyAssistForManipulation_ & other) const
  {
    if (this->enable_body_yaw_assist != other.enable_body_yaw_assist) {
      return false;
    }
    if (this->enable_hip_height_assist != other.enable_hip_height_assist) {
      return false;
    }
    return true;
  }
  bool operator!=(const BodyControlParamsBodyAssistForManipulation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BodyControlParamsBodyAssistForManipulation_

// alias to use template instance with default allocator
using BodyControlParamsBodyAssistForManipulation =
  bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_ASSIST_FOR_MANIPULATION__STRUCT_HPP_
