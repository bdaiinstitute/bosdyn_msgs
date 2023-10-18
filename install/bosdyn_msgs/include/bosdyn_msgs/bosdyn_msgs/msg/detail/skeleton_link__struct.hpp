// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SkeletonLink.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obj_model'
#include "bosdyn_msgs/msg/detail/skeleton_link_obj_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SkeletonLink __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SkeletonLink __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkeletonLink_
{
  using Type = SkeletonLink_<ContainerAllocator>;

  explicit SkeletonLink_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_model(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->obj_model_is_set = false;
    }
  }

  explicit SkeletonLink_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    obj_model(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->obj_model_is_set = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _obj_model_type =
    bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator>;
  _obj_model_type obj_model;
  using _obj_model_is_set_type =
    bool;
  _obj_model_is_set_type obj_model_is_set;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__obj_model(
    const bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator> & _arg)
  {
    this->obj_model = _arg;
    return *this;
  }
  Type & set__obj_model_is_set(
    const bool & _arg)
  {
    this->obj_model_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SkeletonLink
    std::shared_ptr<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SkeletonLink
    std::shared_ptr<bosdyn_msgs::msg::SkeletonLink_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkeletonLink_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->obj_model != other.obj_model) {
      return false;
    }
    if (this->obj_model_is_set != other.obj_model_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkeletonLink_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkeletonLink_

// alias to use template instance with default allocator
using SkeletonLink =
  bosdyn_msgs::msg::SkeletonLink_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK__STRUCT_HPP_
