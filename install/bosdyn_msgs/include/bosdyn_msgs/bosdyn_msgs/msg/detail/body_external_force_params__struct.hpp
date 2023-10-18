// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BodyExternalForceParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'external_force_indicator'
#include "bosdyn_msgs/msg/detail/body_external_force_params_external_force_indicator__struct.hpp"
// Member 'external_force_override'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BodyExternalForceParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BodyExternalForceParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BodyExternalForceParams_
{
  using Type = BodyExternalForceParams_<ContainerAllocator>;

  explicit BodyExternalForceParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : external_force_indicator(_init),
    external_force_override(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->external_force_override_is_set = false;
    }
  }

  explicit BodyExternalForceParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : external_force_indicator(_alloc, _init),
    frame_name(_alloc),
    external_force_override(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->external_force_override_is_set = false;
    }
  }

  // field types and members
  using _external_force_indicator_type =
    bosdyn_msgs::msg::BodyExternalForceParamsExternalForceIndicator_<ContainerAllocator>;
  _external_force_indicator_type external_force_indicator;
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;
  using _external_force_override_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _external_force_override_type external_force_override;
  using _external_force_override_is_set_type =
    bool;
  _external_force_override_is_set_type external_force_override_is_set;

  // setters for named parameter idiom
  Type & set__external_force_indicator(
    const bosdyn_msgs::msg::BodyExternalForceParamsExternalForceIndicator_<ContainerAllocator> & _arg)
  {
    this->external_force_indicator = _arg;
    return *this;
  }
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }
  Type & set__external_force_override(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->external_force_override = _arg;
    return *this;
  }
  Type & set__external_force_override_is_set(
    const bool & _arg)
  {
    this->external_force_override_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BodyExternalForceParams
    std::shared_ptr<bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BodyExternalForceParams
    std::shared_ptr<bosdyn_msgs::msg::BodyExternalForceParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BodyExternalForceParams_ & other) const
  {
    if (this->external_force_indicator != other.external_force_indicator) {
      return false;
    }
    if (this->frame_name != other.frame_name) {
      return false;
    }
    if (this->external_force_override != other.external_force_override) {
      return false;
    }
    if (this->external_force_override_is_set != other.external_force_override_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const BodyExternalForceParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BodyExternalForceParams_

// alias to use template instance with default allocator
using BodyExternalForceParams =
  bosdyn_msgs::msg::BodyExternalForceParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS__STRUCT_HPP_
