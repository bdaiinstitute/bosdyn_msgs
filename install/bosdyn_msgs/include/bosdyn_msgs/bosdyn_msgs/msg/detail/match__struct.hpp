// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Match.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MATCH__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MATCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Match __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Match __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Match_
{
  using Type = Match_<ContainerAllocator>;

  explicit Match_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_index = 0l;
      this->live_index = 0l;
      this->distance = 0.0f;
    }
  }

  explicit Match_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_index = 0l;
      this->live_index = 0l;
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _reference_index_type =
    int32_t;
  _reference_index_type reference_index;
  using _live_index_type =
    int32_t;
  _live_index_type live_index;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__reference_index(
    const int32_t & _arg)
  {
    this->reference_index = _arg;
    return *this;
  }
  Type & set__live_index(
    const int32_t & _arg)
  {
    this->live_index = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Match_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Match_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Match_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Match_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Match_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Match_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Match_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Match_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Match_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Match_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Match
    std::shared_ptr<bosdyn_msgs::msg::Match_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Match
    std::shared_ptr<bosdyn_msgs::msg::Match_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Match_ & other) const
  {
    if (this->reference_index != other.reference_index) {
      return false;
    }
    if (this->live_index != other.live_index) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Match_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Match_

// alias to use template instance with default allocator
using Match =
  bosdyn_msgs::msg::Match_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MATCH__STRUCT_HPP_
