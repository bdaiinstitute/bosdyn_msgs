// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StanceCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STANCE_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STANCE_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'stance'
#include "bosdyn_msgs/msg/detail/stance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StanceCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StanceCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StanceCommandRequest_
{
  using Type = StanceCommandRequest_<ContainerAllocator>;

  explicit StanceCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_time(_init),
    stance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_time_is_set = false;
      this->stance_is_set = false;
    }
  }

  explicit StanceCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_time(_alloc, _init),
    stance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_time_is_set = false;
      this->stance_is_set = false;
    }
  }

  // field types and members
  using _end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_time_type end_time;
  using _end_time_is_set_type =
    bool;
  _end_time_is_set_type end_time_is_set;
  using _stance_type =
    bosdyn_msgs::msg::Stance_<ContainerAllocator>;
  _stance_type stance;
  using _stance_is_set_type =
    bool;
  _stance_is_set_type stance_is_set;

  // setters for named parameter idiom
  Type & set__end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__end_time_is_set(
    const bool & _arg)
  {
    this->end_time_is_set = _arg;
    return *this;
  }
  Type & set__stance(
    const bosdyn_msgs::msg::Stance_<ContainerAllocator> & _arg)
  {
    this->stance = _arg;
    return *this;
  }
  Type & set__stance_is_set(
    const bool & _arg)
  {
    this->stance_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StanceCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StanceCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StanceCommandRequest_ & other) const
  {
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->end_time_is_set != other.end_time_is_set) {
      return false;
    }
    if (this->stance != other.stance) {
      return false;
    }
    if (this->stance_is_set != other.stance_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const StanceCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StanceCommandRequest_

// alias to use template instance with default allocator
using StanceCommandRequest =
  bosdyn_msgs::msg::StanceCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STANCE_COMMAND_REQUEST__STRUCT_HPP_
