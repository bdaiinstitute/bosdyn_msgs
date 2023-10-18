// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StaircaseKnowledgeType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_KNOWLEDGE_TYPE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_KNOWLEDGE_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StaircaseKnowledgeType __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StaircaseKnowledgeType __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaircaseKnowledgeType_
{
  using Type = StaircaseKnowledgeType_<ContainerAllocator>;

  explicit StaircaseKnowledgeType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit StaircaseKnowledgeType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int8_t KNOWLEDGE_TYPE_UNKNOWN =
    0;
  static constexpr int8_t KNOWLEDGE_TYPE_MAPPED =
    1;
  static constexpr int8_t KNOWLEDGE_TYPE_TRACKED_ONGOING =
    2;
  static constexpr int8_t KNOWLEDGE_TYPE_TRACKED_COMPLETED =
    3;
  static constexpr int8_t KNOWLEDGE_TYPE_OTHER =
    4;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseKnowledgeType
    std::shared_ptr<bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StaircaseKnowledgeType
    std::shared_ptr<bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaircaseKnowledgeType_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaircaseKnowledgeType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaircaseKnowledgeType_

// alias to use template instance with default allocator
using StaircaseKnowledgeType =
  bosdyn_msgs::msg::StaircaseKnowledgeType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaircaseKnowledgeType_<ContainerAllocator>::KNOWLEDGE_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaircaseKnowledgeType_<ContainerAllocator>::KNOWLEDGE_TYPE_MAPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaircaseKnowledgeType_<ContainerAllocator>::KNOWLEDGE_TYPE_TRACKED_ONGOING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaircaseKnowledgeType_<ContainerAllocator>::KNOWLEDGE_TYPE_TRACKED_COMPLETED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StaircaseKnowledgeType_<ContainerAllocator>::KNOWLEDGE_TYPE_OTHER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_KNOWLEDGE_TYPE__STRUCT_HPP_
