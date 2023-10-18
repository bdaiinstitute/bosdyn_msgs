// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'error'
#include "bosdyn_msgs/msg/detail/area_callback_error_call_error__struct.hpp"
// Member 'response_error'
#include "bosdyn_msgs/msg/detail/area_callback_error_one_of_response_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackError __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackError __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AreaCallbackError_
{
  using Type = AreaCallbackError_<ContainerAllocator>;

  explicit AreaCallbackError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_init),
    response_error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
    }
  }

  explicit AreaCallbackError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    error(_alloc, _init),
    response_error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _error_type =
    bosdyn_msgs::msg::AreaCallbackErrorCallError_<ContainerAllocator>;
  _error_type error;
  using _response_error_type =
    bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator>;
  _response_error_type response_error;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__error(
    const bosdyn_msgs::msg::AreaCallbackErrorCallError_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__response_error(
    const bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator> & _arg)
  {
    this->response_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackError
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackError
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AreaCallbackError_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->response_error != other.response_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const AreaCallbackError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AreaCallbackError_

// alias to use template instance with default allocator
using AreaCallbackError =
  bosdyn_msgs::msg::AreaCallbackError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR__STRUCT_HPP_
