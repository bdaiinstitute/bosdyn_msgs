// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LocalGridResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/local_grid_response_status__struct.hpp"
// Member 'local_grid'
#include "bosdyn_msgs/msg/detail/local_grid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LocalGridResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LocalGridResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalGridResponse_
{
  using Type = LocalGridResponse_<ContainerAllocator>;

  explicit LocalGridResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    local_grid(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_grid_type_name = "";
      this->local_grid_is_set = false;
    }
  }

  explicit LocalGridResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : local_grid_type_name(_alloc),
    status(_alloc, _init),
    local_grid(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_grid_type_name = "";
      this->local_grid_is_set = false;
    }
  }

  // field types and members
  using _local_grid_type_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _local_grid_type_name_type local_grid_type_name;
  using _status_type =
    bosdyn_msgs::msg::LocalGridResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _local_grid_type =
    bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>;
  _local_grid_type local_grid;
  using _local_grid_is_set_type =
    bool;
  _local_grid_is_set_type local_grid_is_set;

  // setters for named parameter idiom
  Type & set__local_grid_type_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->local_grid_type_name = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::LocalGridResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__local_grid(
    const bosdyn_msgs::msg::LocalGrid_<ContainerAllocator> & _arg)
  {
    this->local_grid = _arg;
    return *this;
  }
  Type & set__local_grid_is_set(
    const bool & _arg)
  {
    this->local_grid_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LocalGridResponse
    std::shared_ptr<bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LocalGridResponse
    std::shared_ptr<bosdyn_msgs::msg::LocalGridResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalGridResponse_ & other) const
  {
    if (this->local_grid_type_name != other.local_grid_type_name) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->local_grid != other.local_grid) {
      return false;
    }
    if (this->local_grid_is_set != other.local_grid_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalGridResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalGridResponse_

// alias to use template instance with default allocator
using LocalGridResponse =
  bosdyn_msgs::msg::LocalGridResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_RESPONSE__STRUCT_HPP_
