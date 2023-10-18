// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DockState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/dock_state_docked_status__struct.hpp"
// Member 'dock_type'
#include "bosdyn_msgs/msg/detail/dock_type__struct.hpp"
// Member 'power_status'
#include "bosdyn_msgs/msg/detail/dock_state_link_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DockState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DockState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockState_
{
  using Type = DockState_<ContainerAllocator>;

  explicit DockState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    dock_type(_init),
    power_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_id = 0ul;
    }
  }

  explicit DockState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    dock_type(_alloc, _init),
    power_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_id = 0ul;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::DockStateDockedStatus_<ContainerAllocator>;
  _status_type status;
  using _dock_type_type =
    bosdyn_msgs::msg::DockType_<ContainerAllocator>;
  _dock_type_type dock_type;
  using _dock_id_type =
    uint32_t;
  _dock_id_type dock_id;
  using _power_status_type =
    bosdyn_msgs::msg::DockStateLinkStatus_<ContainerAllocator>;
  _power_status_type power_status;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::DockStateDockedStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__dock_type(
    const bosdyn_msgs::msg::DockType_<ContainerAllocator> & _arg)
  {
    this->dock_type = _arg;
    return *this;
  }
  Type & set__dock_id(
    const uint32_t & _arg)
  {
    this->dock_id = _arg;
    return *this;
  }
  Type & set__power_status(
    const bosdyn_msgs::msg::DockStateLinkStatus_<ContainerAllocator> & _arg)
  {
    this->power_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DockState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DockState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DockState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DockState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DockState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DockState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DockState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DockState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DockState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DockState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DockState
    std::shared_ptr<bosdyn_msgs::msg::DockState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DockState
    std::shared_ptr<bosdyn_msgs::msg::DockState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockState_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->dock_type != other.dock_type) {
      return false;
    }
    if (this->dock_id != other.dock_id) {
      return false;
    }
    if (this->power_status != other.power_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockState_

// alias to use template instance with default allocator
using DockState =
  bosdyn_msgs::msg::DockState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__STRUCT_HPP_
