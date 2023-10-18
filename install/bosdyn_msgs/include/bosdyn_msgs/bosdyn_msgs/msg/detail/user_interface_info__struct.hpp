// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UserInterfaceInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__USER_INTERFACE_INFO__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__USER_INTERFACE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UserInterfaceInfo __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UserInterfaceInfo __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserInterfaceInfo_
{
  using Type = UserInterfaceInfo_<ContainerAllocator>;

  explicit UserInterfaceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->display_name = "";
      this->description = "";
      this->display_order = 0ll;
    }
  }

  explicit UserInterfaceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : display_name(_alloc),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->display_name = "";
      this->description = "";
      this->display_order = 0ll;
    }
  }

  // field types and members
  using _display_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _display_name_type display_name;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _display_order_type =
    int64_t;
  _display_order_type display_order;

  // setters for named parameter idiom
  Type & set__display_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->display_name = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__display_order(
    const int64_t & _arg)
  {
    this->display_order = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UserInterfaceInfo
    std::shared_ptr<bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UserInterfaceInfo
    std::shared_ptr<bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserInterfaceInfo_ & other) const
  {
    if (this->display_name != other.display_name) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->display_order != other.display_order) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserInterfaceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserInterfaceInfo_

// alias to use template instance with default allocator
using UserInterfaceInfo =
  bosdyn_msgs::msg::UserInterfaceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__USER_INTERFACE_INFO__STRUCT_HPP_
