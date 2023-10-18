// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackErrorOneOfResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR_ONE_OF_RESPONSE_ERROR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR_ONE_OF_RESPONSE_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'begin_callback'
#include "bosdyn_msgs/msg/detail/begin_callback_response__struct.hpp"
// Member 'begin_control'
#include "bosdyn_msgs/msg/detail/begin_control_response__struct.hpp"
// Member 'update_callback'
#include "bosdyn_msgs/msg/detail/update_callback_response__struct.hpp"
// Member 'end_callback'
#include "bosdyn_msgs/msg/detail/end_callback_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AreaCallbackErrorOneOfResponseError_
{
  using Type = AreaCallbackErrorOneOfResponseError_<ContainerAllocator>;

  explicit AreaCallbackErrorOneOfResponseError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : begin_callback(_init),
    begin_control(_init),
    update_callback(_init),
    end_callback(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_error_choice = 0;
    }
  }

  explicit AreaCallbackErrorOneOfResponseError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : begin_callback(_alloc, _init),
    begin_control(_alloc, _init),
    update_callback(_alloc, _init),
    end_callback(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_error_choice = 0;
    }
  }

  // field types and members
  using _begin_callback_type =
    bosdyn_msgs::msg::BeginCallbackResponse_<ContainerAllocator>;
  _begin_callback_type begin_callback;
  using _begin_control_type =
    bosdyn_msgs::msg::BeginControlResponse_<ContainerAllocator>;
  _begin_control_type begin_control;
  using _update_callback_type =
    bosdyn_msgs::msg::UpdateCallbackResponse_<ContainerAllocator>;
  _update_callback_type update_callback;
  using _end_callback_type =
    bosdyn_msgs::msg::EndCallbackResponse_<ContainerAllocator>;
  _end_callback_type end_callback;
  using _response_error_choice_type =
    int8_t;
  _response_error_choice_type response_error_choice;

  // setters for named parameter idiom
  Type & set__begin_callback(
    const bosdyn_msgs::msg::BeginCallbackResponse_<ContainerAllocator> & _arg)
  {
    this->begin_callback = _arg;
    return *this;
  }
  Type & set__begin_control(
    const bosdyn_msgs::msg::BeginControlResponse_<ContainerAllocator> & _arg)
  {
    this->begin_control = _arg;
    return *this;
  }
  Type & set__update_callback(
    const bosdyn_msgs::msg::UpdateCallbackResponse_<ContainerAllocator> & _arg)
  {
    this->update_callback = _arg;
    return *this;
  }
  Type & set__end_callback(
    const bosdyn_msgs::msg::EndCallbackResponse_<ContainerAllocator> & _arg)
  {
    this->end_callback = _arg;
    return *this;
  }
  Type & set__response_error_choice(
    const int8_t & _arg)
  {
    this->response_error_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t RESPONSE_ERROR_NOT_SET =
    0;
  static constexpr int8_t RESPONSE_ERROR_BEGIN_CALLBACK_SET =
    1;
  static constexpr int8_t RESPONSE_ERROR_BEGIN_CONTROL_SET =
    2;
  static constexpr int8_t RESPONSE_ERROR_UPDATE_CALLBACK_SET =
    3;
  static constexpr int8_t RESPONSE_ERROR_END_CALLBACK_SET =
    4;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AreaCallbackErrorOneOfResponseError_ & other) const
  {
    if (this->begin_callback != other.begin_callback) {
      return false;
    }
    if (this->begin_control != other.begin_control) {
      return false;
    }
    if (this->update_callback != other.update_callback) {
      return false;
    }
    if (this->end_callback != other.end_callback) {
      return false;
    }
    if (this->response_error_choice != other.response_error_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const AreaCallbackErrorOneOfResponseError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AreaCallbackErrorOneOfResponseError_

// alias to use template instance with default allocator
using AreaCallbackErrorOneOfResponseError =
  bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AreaCallbackErrorOneOfResponseError_<ContainerAllocator>::RESPONSE_ERROR_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AreaCallbackErrorOneOfResponseError_<ContainerAllocator>::RESPONSE_ERROR_BEGIN_CALLBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AreaCallbackErrorOneOfResponseError_<ContainerAllocator>::RESPONSE_ERROR_BEGIN_CONTROL_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AreaCallbackErrorOneOfResponseError_<ContainerAllocator>::RESPONSE_ERROR_UPDATE_CALLBACK_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t AreaCallbackErrorOneOfResponseError_<ContainerAllocator>::RESPONSE_ERROR_END_CALLBACK_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR_ONE_OF_RESPONSE_ERROR__STRUCT_HPP_
