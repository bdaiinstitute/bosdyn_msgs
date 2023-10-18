// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackServiceError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_SERVICE_ERROR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_SERVICE_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'faulted_services'
#include "bosdyn_msgs/msg/detail/service_fault__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackServiceError __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackServiceError __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AreaCallbackServiceError_
{
  using Type = AreaCallbackServiceError_<ContainerAllocator>;

  explicit AreaCallbackServiceError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AreaCallbackServiceError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _missing_services_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _missing_services_type missing_services;
  using _faulted_services_type =
    std::vector<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>>;
  _faulted_services_type faulted_services;

  // setters for named parameter idiom
  Type & set__missing_services(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->missing_services = _arg;
    return *this;
  }
  Type & set__faulted_services(
    const std::vector<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>> & _arg)
  {
    this->faulted_services = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackServiceError
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackServiceError
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AreaCallbackServiceError_ & other) const
  {
    if (this->missing_services != other.missing_services) {
      return false;
    }
    if (this->faulted_services != other.faulted_services) {
      return false;
    }
    return true;
  }
  bool operator!=(const AreaCallbackServiceError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AreaCallbackServiceError_

// alias to use template instance with default allocator
using AreaCallbackServiceError =
  bosdyn_msgs::msg::AreaCallbackServiceError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_SERVICE_ERROR__STRUCT_HPP_
