// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StraightStaircaseOneOfLocation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_ONE_OF_LOCATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_ONE_OF_LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'from_ko_tform_stairs'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'tform'
#include "bosdyn_msgs/msg/detail/stair_transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StraightStaircaseOneOfLocation __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StraightStaircaseOneOfLocation __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StraightStaircaseOneOfLocation_
{
  using Type = StraightStaircaseOneOfLocation_<ContainerAllocator>;

  explicit StraightStaircaseOneOfLocation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : from_ko_tform_stairs(_init),
    tform(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location_choice = 0;
    }
  }

  explicit StraightStaircaseOneOfLocation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : from_ko_tform_stairs(_alloc, _init),
    tform(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location_choice = 0;
    }
  }

  // field types and members
  using _from_ko_tform_stairs_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _from_ko_tform_stairs_type from_ko_tform_stairs;
  using _tform_type =
    bosdyn_msgs::msg::StairTransform_<ContainerAllocator>;
  _tform_type tform;
  using _location_choice_type =
    int8_t;
  _location_choice_type location_choice;

  // setters for named parameter idiom
  Type & set__from_ko_tform_stairs(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->from_ko_tform_stairs = _arg;
    return *this;
  }
  Type & set__tform(
    const bosdyn_msgs::msg::StairTransform_<ContainerAllocator> & _arg)
  {
    this->tform = _arg;
    return *this;
  }
  Type & set__location_choice(
    const int8_t & _arg)
  {
    this->location_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t LOCATION_NOT_SET =
    0;
  static constexpr int8_t LOCATION_FROM_KO_TFORM_STAIRS_SET =
    1;
  static constexpr int8_t LOCATION_TFORM_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StraightStaircaseOneOfLocation
    std::shared_ptr<bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StraightStaircaseOneOfLocation
    std::shared_ptr<bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StraightStaircaseOneOfLocation_ & other) const
  {
    if (this->from_ko_tform_stairs != other.from_ko_tform_stairs) {
      return false;
    }
    if (this->tform != other.tform) {
      return false;
    }
    if (this->location_choice != other.location_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const StraightStaircaseOneOfLocation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StraightStaircaseOneOfLocation_

// alias to use template instance with default allocator
using StraightStaircaseOneOfLocation =
  bosdyn_msgs::msg::StraightStaircaseOneOfLocation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StraightStaircaseOneOfLocation_<ContainerAllocator>::LOCATION_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StraightStaircaseOneOfLocation_<ContainerAllocator>::LOCATION_FROM_KO_TFORM_STAIRS_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StraightStaircaseOneOfLocation_<ContainerAllocator>::LOCATION_TFORM_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_ONE_OF_LOCATION__STRUCT_HPP_
