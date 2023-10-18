// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ManipulationFeedbackState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_FEEDBACK_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_FEEDBACK_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ManipulationFeedbackState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ManipulationFeedbackState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManipulationFeedbackState_
{
  using Type = ManipulationFeedbackState_<ContainerAllocator>;

  explicit ManipulationFeedbackState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit ManipulationFeedbackState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    int8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t MANIP_STATE_UNKNOWN =
    0;
  static constexpr int8_t MANIP_STATE_DONE =
    1;
  static constexpr int8_t MANIP_STATE_SEARCHING_FOR_GRASP =
    2;
  static constexpr int8_t MANIP_STATE_MOVING_TO_GRASP =
    3;
  static constexpr int8_t MANIP_STATE_GRASPING_OBJECT =
    4;
  static constexpr int8_t MANIP_STATE_PLACING_OBJECT =
    5;
  static constexpr int8_t MANIP_STATE_GRASP_SUCCEEDED =
    6;
  static constexpr int8_t MANIP_STATE_GRASP_FAILED =
    7;
  static constexpr int8_t MANIP_STATE_GRASP_PLANNING_SUCCEEDED =
    8;
  static constexpr int8_t MANIP_STATE_GRASP_PLANNING_NO_SOLUTION =
    9;
  static constexpr int8_t MANIP_STATE_GRASP_FAILED_TO_RAYCAST_INTO_MAP =
    10;
  static constexpr int8_t MANIP_STATE_GRASP_PLANNING_WAITING_DATA_AT_EDGE =
    11;
  static constexpr int8_t MANIP_STATE_WALKING_TO_OBJECT =
    12;
  static constexpr int8_t MANIP_STATE_ATTEMPTING_RAYCASTING =
    13;
  static constexpr int8_t MANIP_STATE_MOVING_TO_PLACE =
    14;
  static constexpr int8_t MANIP_STATE_PLACE_FAILED_TO_RAYCAST_INTO_MAP =
    15;
  static constexpr int8_t MANIP_STATE_PLACE_SUCCEEDED =
    16;
  static constexpr int8_t MANIP_STATE_PLACE_FAILED =
    17;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ManipulationFeedbackState
    std::shared_ptr<bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ManipulationFeedbackState
    std::shared_ptr<bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManipulationFeedbackState_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManipulationFeedbackState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManipulationFeedbackState_

// alias to use template instance with default allocator
using ManipulationFeedbackState =
  bosdyn_msgs::msg::ManipulationFeedbackState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_DONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_SEARCHING_FOR_GRASP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_MOVING_TO_GRASP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_GRASPING_OBJECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_PLACING_OBJECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_GRASP_SUCCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_GRASP_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_GRASP_PLANNING_SUCCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_GRASP_PLANNING_NO_SOLUTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_GRASP_FAILED_TO_RAYCAST_INTO_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_GRASP_PLANNING_WAITING_DATA_AT_EDGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_WALKING_TO_OBJECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_ATTEMPTING_RAYCASTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_MOVING_TO_PLACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_PLACE_FAILED_TO_RAYCAST_INTO_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_PLACE_SUCCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationFeedbackState_<ContainerAllocator>::MANIP_STATE_PLACE_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_FEEDBACK_STATE__STRUCT_HPP_
