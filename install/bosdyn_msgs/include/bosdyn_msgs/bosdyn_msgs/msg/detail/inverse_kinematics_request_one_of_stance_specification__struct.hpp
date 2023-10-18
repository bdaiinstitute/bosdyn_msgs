// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfStanceSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fixed_stance'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_fixed_stance__struct.hpp"
// Member 'on_ground_plane_stance'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_on_ground_plane_stance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsRequestOneOfStanceSpecification_
{
  using Type = InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>;

  explicit InverseKinematicsRequestOneOfStanceSpecification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fixed_stance(_init),
    on_ground_plane_stance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stance_specification_choice = 0;
    }
  }

  explicit InverseKinematicsRequestOneOfStanceSpecification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fixed_stance(_alloc, _init),
    on_ground_plane_stance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stance_specification_choice = 0;
    }
  }

  // field types and members
  using _fixed_stance_type =
    bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator>;
  _fixed_stance_type fixed_stance;
  using _on_ground_plane_stance_type =
    bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator>;
  _on_ground_plane_stance_type on_ground_plane_stance;
  using _stance_specification_choice_type =
    int8_t;
  _stance_specification_choice_type stance_specification_choice;

  // setters for named parameter idiom
  Type & set__fixed_stance(
    const bosdyn_msgs::msg::InverseKinematicsRequestFixedStance_<ContainerAllocator> & _arg)
  {
    this->fixed_stance = _arg;
    return *this;
  }
  Type & set__on_ground_plane_stance(
    const bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance_<ContainerAllocator> & _arg)
  {
    this->on_ground_plane_stance = _arg;
    return *this;
  }
  Type & set__stance_specification_choice(
    const int8_t & _arg)
  {
    this->stance_specification_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t STANCE_SPECIFICATION_NOT_SET =
    0;
  static constexpr int8_t STANCE_SPECIFICATION_FIXED_STANCE_SET =
    1;
  static constexpr int8_t STANCE_SPECIFICATION_ON_GROUND_PLANE_STANCE_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsRequestOneOfStanceSpecification_ & other) const
  {
    if (this->fixed_stance != other.fixed_stance) {
      return false;
    }
    if (this->on_ground_plane_stance != other.on_ground_plane_stance) {
      return false;
    }
    if (this->stance_specification_choice != other.stance_specification_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsRequestOneOfStanceSpecification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsRequestOneOfStanceSpecification_

// alias to use template instance with default allocator
using InverseKinematicsRequestOneOfStanceSpecification =
  bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>::STANCE_SPECIFICATION_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>::STANCE_SPECIFICATION_FIXED_STANCE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>::STANCE_SPECIFICATION_ON_GROUND_PLANE_STANCE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__STRUCT_HPP_
