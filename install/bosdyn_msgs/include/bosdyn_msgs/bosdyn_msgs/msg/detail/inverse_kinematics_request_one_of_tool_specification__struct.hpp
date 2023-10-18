// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfToolSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TOOL_SPECIFICATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TOOL_SPECIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'wrist_mounted_tool'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_wrist_mounted_tool__struct.hpp"
// Member 'body_mounted_tool'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_body_mounted_tool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsRequestOneOfToolSpecification_
{
  using Type = InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>;

  explicit InverseKinematicsRequestOneOfToolSpecification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wrist_mounted_tool(_init),
    body_mounted_tool(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_specification_choice = 0;
    }
  }

  explicit InverseKinematicsRequestOneOfToolSpecification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wrist_mounted_tool(_alloc, _init),
    body_mounted_tool(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_specification_choice = 0;
    }
  }

  // field types and members
  using _wrist_mounted_tool_type =
    bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator>;
  _wrist_mounted_tool_type wrist_mounted_tool;
  using _body_mounted_tool_type =
    bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool_<ContainerAllocator>;
  _body_mounted_tool_type body_mounted_tool;
  using _tool_specification_choice_type =
    int8_t;
  _tool_specification_choice_type tool_specification_choice;

  // setters for named parameter idiom
  Type & set__wrist_mounted_tool(
    const bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool_<ContainerAllocator> & _arg)
  {
    this->wrist_mounted_tool = _arg;
    return *this;
  }
  Type & set__body_mounted_tool(
    const bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool_<ContainerAllocator> & _arg)
  {
    this->body_mounted_tool = _arg;
    return *this;
  }
  Type & set__tool_specification_choice(
    const int8_t & _arg)
  {
    this->tool_specification_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TOOL_SPECIFICATION_NOT_SET =
    0;
  static constexpr int8_t TOOL_SPECIFICATION_WRIST_MOUNTED_TOOL_SET =
    1;
  static constexpr int8_t TOOL_SPECIFICATION_BODY_MOUNTED_TOOL_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsRequestOneOfToolSpecification_ & other) const
  {
    if (this->wrist_mounted_tool != other.wrist_mounted_tool) {
      return false;
    }
    if (this->body_mounted_tool != other.body_mounted_tool) {
      return false;
    }
    if (this->tool_specification_choice != other.tool_specification_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsRequestOneOfToolSpecification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsRequestOneOfToolSpecification_

// alias to use template instance with default allocator
using InverseKinematicsRequestOneOfToolSpecification =
  bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>::TOOL_SPECIFICATION_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>::TOOL_SPECIFICATION_WRIST_MOUNTED_TOOL_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>::TOOL_SPECIFICATION_BODY_MOUNTED_TOOL_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TOOL_SPECIFICATION__STRUCT_HPP_
