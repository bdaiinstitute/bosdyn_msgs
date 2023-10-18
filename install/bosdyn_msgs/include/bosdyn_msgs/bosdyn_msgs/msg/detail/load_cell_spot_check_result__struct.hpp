// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LoadCellSpotCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'error'
#include "bosdyn_msgs/msg/detail/load_cell_spot_check_result_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LoadCellSpotCheckResult __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LoadCellSpotCheckResult __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoadCellSpotCheckResult_
{
  using Type = LoadCellSpotCheckResult_<ContainerAllocator>;

  explicit LoadCellSpotCheckResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zero = 0.0f;
      this->old_zero = 0.0f;
    }
  }

  explicit LoadCellSpotCheckResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zero = 0.0f;
      this->old_zero = 0.0f;
    }
  }

  // field types and members
  using _error_type =
    bosdyn_msgs::msg::LoadCellSpotCheckResultError_<ContainerAllocator>;
  _error_type error;
  using _zero_type =
    float;
  _zero_type zero;
  using _old_zero_type =
    float;
  _old_zero_type old_zero;

  // setters for named parameter idiom
  Type & set__error(
    const bosdyn_msgs::msg::LoadCellSpotCheckResultError_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__zero(
    const float & _arg)
  {
    this->zero = _arg;
    return *this;
  }
  Type & set__old_zero(
    const float & _arg)
  {
    this->old_zero = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LoadCellSpotCheckResult
    std::shared_ptr<bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LoadCellSpotCheckResult
    std::shared_ptr<bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadCellSpotCheckResult_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    if (this->zero != other.zero) {
      return false;
    }
    if (this->old_zero != other.old_zero) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadCellSpotCheckResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadCellSpotCheckResult_

// alias to use template instance with default allocator
using LoadCellSpotCheckResult =
  bosdyn_msgs::msg::LoadCellSpotCheckResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT__STRUCT_HPP_
