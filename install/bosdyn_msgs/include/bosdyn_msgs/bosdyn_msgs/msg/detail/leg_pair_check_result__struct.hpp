// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LegPairCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEG_PAIR_CHECK_RESULT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEG_PAIR_CHECK_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/leg_pair_check_result_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LegPairCheckResult __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LegPairCheckResult __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegPairCheckResult_
{
  using Type = LegPairCheckResult_<ContainerAllocator>;

  explicit LegPairCheckResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leg_pair_distance_change = 0.0f;
    }
  }

  explicit LegPairCheckResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leg_pair_distance_change = 0.0f;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::LegPairCheckResultStatus_<ContainerAllocator>;
  _status_type status;
  using _leg_pair_distance_change_type =
    float;
  _leg_pair_distance_change_type leg_pair_distance_change;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::LegPairCheckResultStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__leg_pair_distance_change(
    const float & _arg)
  {
    this->leg_pair_distance_change = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LegPairCheckResult
    std::shared_ptr<bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LegPairCheckResult
    std::shared_ptr<bosdyn_msgs::msg::LegPairCheckResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegPairCheckResult_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->leg_pair_distance_change != other.leg_pair_distance_change) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegPairCheckResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegPairCheckResult_

// alias to use template instance with default allocator
using LegPairCheckResult =
  bosdyn_msgs::msg::LegPairCheckResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEG_PAIR_CHECK_RESULT__STRUCT_HPP_
