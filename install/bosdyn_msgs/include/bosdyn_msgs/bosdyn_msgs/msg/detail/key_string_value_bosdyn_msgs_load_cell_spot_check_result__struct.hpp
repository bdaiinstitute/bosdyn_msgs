// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/KeyStringValueBosdynMsgsLoadCellSpotCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_LOAD_CELL_SPOT_CHECK_RESULT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_LOAD_CELL_SPOT_CHECK_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'value'
#include "bosdyn_msgs/msg/detail/load_cell_spot_check_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyStringValueBosdynMsgsLoadCellSpotCheckResult_
{
  using Type = KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>;

  explicit KeyStringValueBosdynMsgsLoadCellSpotCheckResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
    }
  }

  explicit KeyStringValueBosdynMsgsLoadCellSpotCheckResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc),
    value(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;
  using _value_type =
    bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__value(
    const bosdyn_msgs::msg::LoadCellSpotCheckResult_<ContainerAllocator> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult
    std::shared_ptr<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult
    std::shared_ptr<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyStringValueBosdynMsgsLoadCellSpotCheckResult_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyStringValueBosdynMsgsLoadCellSpotCheckResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyStringValueBosdynMsgsLoadCellSpotCheckResult_

// alias to use template instance with default allocator
using KeyStringValueBosdynMsgsLoadCellSpotCheckResult =
  bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_LOAD_CELL_SPOT_CHECK_RESULT__STRUCT_HPP_
