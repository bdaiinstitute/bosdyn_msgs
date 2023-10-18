// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandCartesianVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CARTESIAN_VELOCITY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CARTESIAN_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'velocity_in_frame_name'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmVelocityCommandCartesianVelocity_
{
  using Type = ArmVelocityCommandCartesianVelocity_<ContainerAllocator>;

  explicit ArmVelocityCommandCartesianVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity_in_frame_name(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->velocity_in_frame_name_is_set = false;
    }
  }

  explicit ArmVelocityCommandCartesianVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_name(_alloc),
    velocity_in_frame_name(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->velocity_in_frame_name_is_set = false;
    }
  }

  // field types and members
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;
  using _velocity_in_frame_name_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_in_frame_name_type velocity_in_frame_name;
  using _velocity_in_frame_name_is_set_type =
    bool;
  _velocity_in_frame_name_is_set_type velocity_in_frame_name_is_set;

  // setters for named parameter idiom
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }
  Type & set__velocity_in_frame_name(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity_in_frame_name = _arg;
    return *this;
  }
  Type & set__velocity_in_frame_name_is_set(
    const bool & _arg)
  {
    this->velocity_in_frame_name_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity
    std::shared_ptr<bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmVelocityCommandCartesianVelocity_ & other) const
  {
    if (this->frame_name != other.frame_name) {
      return false;
    }
    if (this->velocity_in_frame_name != other.velocity_in_frame_name) {
      return false;
    }
    if (this->velocity_in_frame_name_is_set != other.velocity_in_frame_name_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmVelocityCommandCartesianVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmVelocityCommandCartesianVelocity_

// alias to use template instance with default allocator
using ArmVelocityCommandCartesianVelocity =
  bosdyn_msgs::msg::ArmVelocityCommandCartesianVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_CARTESIAN_VELOCITY__STRUCT_HPP_
