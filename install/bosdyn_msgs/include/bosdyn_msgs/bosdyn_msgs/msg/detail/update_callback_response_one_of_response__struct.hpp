// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseOneOfResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ONE_OF_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ONE_OF_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'policy'
#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy__struct.hpp"
// Member 'error'
#include "bosdyn_msgs/msg/detail/update_callback_response_error__struct.hpp"
// Member 'complete'
#include "bosdyn_msgs/msg/detail/update_callback_response_complete__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdateCallbackResponseOneOfResponse_
{
  using Type = UpdateCallbackResponseOneOfResponse_<ContainerAllocator>;

  explicit UpdateCallbackResponseOneOfResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : policy(_init),
    error(_init),
    complete(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_choice = 0;
    }
  }

  explicit UpdateCallbackResponseOneOfResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : policy(_alloc, _init),
    error(_alloc, _init),
    complete(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_choice = 0;
    }
  }

  // field types and members
  using _policy_type =
    bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator>;
  _policy_type policy;
  using _error_type =
    bosdyn_msgs::msg::UpdateCallbackResponseError_<ContainerAllocator>;
  _error_type error;
  using _complete_type =
    bosdyn_msgs::msg::UpdateCallbackResponseComplete_<ContainerAllocator>;
  _complete_type complete;
  using _response_choice_type =
    int8_t;
  _response_choice_type response_choice;

  // setters for named parameter idiom
  Type & set__policy(
    const bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy_<ContainerAllocator> & _arg)
  {
    this->policy = _arg;
    return *this;
  }
  Type & set__error(
    const bosdyn_msgs::msg::UpdateCallbackResponseError_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__complete(
    const bosdyn_msgs::msg::UpdateCallbackResponseComplete_<ContainerAllocator> & _arg)
  {
    this->complete = _arg;
    return *this;
  }
  Type & set__response_choice(
    const int8_t & _arg)
  {
    this->response_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t RESPONSE_NOT_SET =
    0;
  static constexpr int8_t RESPONSE_POLICY_SET =
    1;
  static constexpr int8_t RESPONSE_ERROR_SET =
    2;
  static constexpr int8_t RESPONSE_COMPLETE_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateCallbackResponseOneOfResponse_ & other) const
  {
    if (this->policy != other.policy) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->complete != other.complete) {
      return false;
    }
    if (this->response_choice != other.response_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateCallbackResponseOneOfResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateCallbackResponseOneOfResponse_

// alias to use template instance with default allocator
using UpdateCallbackResponseOneOfResponse =
  bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t UpdateCallbackResponseOneOfResponse_<ContainerAllocator>::RESPONSE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t UpdateCallbackResponseOneOfResponse_<ContainerAllocator>::RESPONSE_POLICY_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t UpdateCallbackResponseOneOfResponse_<ContainerAllocator>::RESPONSE_ERROR_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t UpdateCallbackResponseOneOfResponse_<ContainerAllocator>::RESPONSE_COMPLETE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ONE_OF_RESPONSE__STRUCT_HPP_
