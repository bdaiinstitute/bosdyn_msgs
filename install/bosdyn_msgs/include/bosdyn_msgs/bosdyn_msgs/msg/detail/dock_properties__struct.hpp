// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DockProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK_PROPERTIES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/dock_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DockProperties __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DockProperties __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockProperties_
{
  using Type = DockProperties_<ContainerAllocator>;

  explicit DockProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_id = 0ul;
      this->frame_name_dock = "";
      this->unavailable = false;
      this->from_prior = false;
    }
  }

  explicit DockProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    frame_name_dock(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_id = 0ul;
      this->frame_name_dock = "";
      this->unavailable = false;
      this->from_prior = false;
    }
  }

  // field types and members
  using _dock_id_type =
    uint32_t;
  _dock_id_type dock_id;
  using _type_type =
    bosdyn_msgs::msg::DockType_<ContainerAllocator>;
  _type_type type;
  using _frame_name_dock_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_dock_type frame_name_dock;
  using _unavailable_type =
    bool;
  _unavailable_type unavailable;
  using _from_prior_type =
    bool;
  _from_prior_type from_prior;

  // setters for named parameter idiom
  Type & set__dock_id(
    const uint32_t & _arg)
  {
    this->dock_id = _arg;
    return *this;
  }
  Type & set__type(
    const bosdyn_msgs::msg::DockType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__frame_name_dock(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_dock = _arg;
    return *this;
  }
  Type & set__unavailable(
    const bool & _arg)
  {
    this->unavailable = _arg;
    return *this;
  }
  Type & set__from_prior(
    const bool & _arg)
  {
    this->from_prior = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DockProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DockProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DockProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DockProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DockProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DockProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DockProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DockProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DockProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DockProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DockProperties
    std::shared_ptr<bosdyn_msgs::msg::DockProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DockProperties
    std::shared_ptr<bosdyn_msgs::msg::DockProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockProperties_ & other) const
  {
    if (this->dock_id != other.dock_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->frame_name_dock != other.frame_name_dock) {
      return false;
    }
    if (this->unavailable != other.unavailable) {
      return false;
    }
    if (this->from_prior != other.from_prior) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockProperties_

// alias to use template instance with default allocator
using DockProperties =
  bosdyn_msgs::msg::DockProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK_PROPERTIES__STRUCT_HPP_
