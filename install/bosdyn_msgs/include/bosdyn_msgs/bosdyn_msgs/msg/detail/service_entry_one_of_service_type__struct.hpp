// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ServiceEntryOneOfServiceType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY_ONE_OF_SERVICE_TYPE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY_ONE_OF_SERVICE_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ServiceEntryOneOfServiceType __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ServiceEntryOneOfServiceType __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceEntryOneOfServiceType_
{
  using Type = ServiceEntryOneOfServiceType_<ContainerAllocator>;

  explicit ServiceEntryOneOfServiceType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->service_type_choice = 0;
    }
  }

  explicit ServiceEntryOneOfServiceType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->service_type_choice = 0;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _service_type_choice_type =
    int8_t;
  _service_type_choice_type service_type_choice;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__service_type_choice(
    const int8_t & _arg)
  {
    this->service_type_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SERVICE_TYPE_NOT_SET =
    0;
  static constexpr int8_t SERVICE_TYPE_TYPE_SET =
    1;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceEntryOneOfServiceType
    std::shared_ptr<bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceEntryOneOfServiceType
    std::shared_ptr<bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceEntryOneOfServiceType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->service_type_choice != other.service_type_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceEntryOneOfServiceType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceEntryOneOfServiceType_

// alias to use template instance with default allocator
using ServiceEntryOneOfServiceType =
  bosdyn_msgs::msg::ServiceEntryOneOfServiceType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServiceEntryOneOfServiceType_<ContainerAllocator>::SERVICE_TYPE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ServiceEntryOneOfServiceType_<ContainerAllocator>::SERVICE_TYPE_TYPE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY_ONE_OF_SERVICE_TYPE__STRUCT_HPP_
