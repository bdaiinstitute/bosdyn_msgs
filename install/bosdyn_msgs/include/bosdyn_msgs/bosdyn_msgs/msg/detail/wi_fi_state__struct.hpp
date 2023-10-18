// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WiFiState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WI_FI_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WI_FI_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'current_mode'
#include "bosdyn_msgs/msg/detail/wi_fi_state_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WiFiState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WiFiState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WiFiState_
{
  using Type = WiFiState_<ContainerAllocator>;

  explicit WiFiState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->essid = "";
    }
  }

  explicit WiFiState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_mode(_alloc, _init),
    essid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->essid = "";
    }
  }

  // field types and members
  using _current_mode_type =
    bosdyn_msgs::msg::WiFiStateMode_<ContainerAllocator>;
  _current_mode_type current_mode;
  using _essid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _essid_type essid;

  // setters for named parameter idiom
  Type & set__current_mode(
    const bosdyn_msgs::msg::WiFiStateMode_<ContainerAllocator> & _arg)
  {
    this->current_mode = _arg;
    return *this;
  }
  Type & set__essid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->essid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WiFiState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WiFiState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WiFiState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WiFiState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WiFiState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WiFiState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WiFiState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WiFiState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WiFiState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WiFiState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WiFiState
    std::shared_ptr<bosdyn_msgs::msg::WiFiState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WiFiState
    std::shared_ptr<bosdyn_msgs::msg::WiFiState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WiFiState_ & other) const
  {
    if (this->current_mode != other.current_mode) {
      return false;
    }
    if (this->essid != other.essid) {
      return false;
    }
    return true;
  }
  bool operator!=(const WiFiState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WiFiState_

// alias to use template instance with default allocator
using WiFiState =
  bosdyn_msgs::msg::WiFiState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WI_FI_STATE__STRUCT_HPP_
