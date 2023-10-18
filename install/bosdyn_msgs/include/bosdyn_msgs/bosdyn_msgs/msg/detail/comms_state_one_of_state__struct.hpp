// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CommsStateOneOfState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'wifi_state'
#include "bosdyn_msgs/msg/detail/wi_fi_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CommsStateOneOfState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CommsStateOneOfState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommsStateOneOfState_
{
  using Type = CommsStateOneOfState_<ContainerAllocator>;

  explicit CommsStateOneOfState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wifi_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_choice = 0;
    }
  }

  explicit CommsStateOneOfState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wifi_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_choice = 0;
    }
  }

  // field types and members
  using _wifi_state_type =
    bosdyn_msgs::msg::WiFiState_<ContainerAllocator>;
  _wifi_state_type wifi_state;
  using _state_choice_type =
    int8_t;
  _state_choice_type state_choice;

  // setters for named parameter idiom
  Type & set__wifi_state(
    const bosdyn_msgs::msg::WiFiState_<ContainerAllocator> & _arg)
  {
    this->wifi_state = _arg;
    return *this;
  }
  Type & set__state_choice(
    const int8_t & _arg)
  {
    this->state_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t STATE_NOT_SET =
    0;
  static constexpr int8_t STATE_WIFI_STATE_SET =
    1;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CommsStateOneOfState
    std::shared_ptr<bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CommsStateOneOfState
    std::shared_ptr<bosdyn_msgs::msg::CommsStateOneOfState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommsStateOneOfState_ & other) const
  {
    if (this->wifi_state != other.wifi_state) {
      return false;
    }
    if (this->state_choice != other.state_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommsStateOneOfState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommsStateOneOfState_

// alias to use template instance with default allocator
using CommsStateOneOfState =
  bosdyn_msgs::msg::CommsStateOneOfState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CommsStateOneOfState_<ContainerAllocator>::STATE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t CommsStateOneOfState_<ContainerAllocator>::STATE_WIFI_STATE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__STRUCT_HPP_
