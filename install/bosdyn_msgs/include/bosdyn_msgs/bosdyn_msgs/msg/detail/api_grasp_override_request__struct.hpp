// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ApiGraspOverrideRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'api_grasp_override'
#include "bosdyn_msgs/msg/detail/api_grasp_override__struct.hpp"
// Member 'carry_state_override'
#include "bosdyn_msgs/msg/detail/api_grasped_carry_state_override__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ApiGraspOverrideRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ApiGraspOverrideRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ApiGraspOverrideRequest_
{
  using Type = ApiGraspOverrideRequest_<ContainerAllocator>;

  explicit ApiGraspOverrideRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    api_grasp_override(_init),
    carry_state_override(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->api_grasp_override_is_set = false;
      this->carry_state_override_is_set = false;
    }
  }

  explicit ApiGraspOverrideRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    api_grasp_override(_alloc, _init),
    carry_state_override(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->api_grasp_override_is_set = false;
      this->carry_state_override_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _api_grasp_override_type =
    bosdyn_msgs::msg::ApiGraspOverride_<ContainerAllocator>;
  _api_grasp_override_type api_grasp_override;
  using _api_grasp_override_is_set_type =
    bool;
  _api_grasp_override_is_set_type api_grasp_override_is_set;
  using _carry_state_override_type =
    bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator>;
  _carry_state_override_type carry_state_override;
  using _carry_state_override_is_set_type =
    bool;
  _carry_state_override_is_set_type carry_state_override_is_set;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__api_grasp_override(
    const bosdyn_msgs::msg::ApiGraspOverride_<ContainerAllocator> & _arg)
  {
    this->api_grasp_override = _arg;
    return *this;
  }
  Type & set__api_grasp_override_is_set(
    const bool & _arg)
  {
    this->api_grasp_override_is_set = _arg;
    return *this;
  }
  Type & set__carry_state_override(
    const bosdyn_msgs::msg::ApiGraspedCarryStateOverride_<ContainerAllocator> & _arg)
  {
    this->carry_state_override = _arg;
    return *this;
  }
  Type & set__carry_state_override_is_set(
    const bool & _arg)
  {
    this->carry_state_override_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ApiGraspOverrideRequest
    std::shared_ptr<bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ApiGraspOverrideRequest
    std::shared_ptr<bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApiGraspOverrideRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->api_grasp_override != other.api_grasp_override) {
      return false;
    }
    if (this->api_grasp_override_is_set != other.api_grasp_override_is_set) {
      return false;
    }
    if (this->carry_state_override != other.carry_state_override) {
      return false;
    }
    if (this->carry_state_override_is_set != other.carry_state_override_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApiGraspOverrideRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApiGraspOverrideRequest_

// alias to use template instance with default allocator
using ApiGraspOverrideRequest =
  bosdyn_msgs::msg::ApiGraspOverrideRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_REQUEST__STRUCT_HPP_
