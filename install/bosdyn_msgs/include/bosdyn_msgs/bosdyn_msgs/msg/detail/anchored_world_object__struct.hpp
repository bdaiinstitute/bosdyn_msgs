// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AnchoredWorldObject.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHORED_WORLD_OBJECT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHORED_WORLD_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'seed_tform_object'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AnchoredWorldObject __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AnchoredWorldObject __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnchoredWorldObject_
{
  using Type = AnchoredWorldObject_<ContainerAllocator>;

  explicit AnchoredWorldObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : seed_tform_object(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->seed_tform_object_is_set = false;
    }
  }

  explicit AnchoredWorldObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    seed_tform_object(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->seed_tform_object_is_set = false;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _seed_tform_object_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _seed_tform_object_type seed_tform_object;
  using _seed_tform_object_is_set_type =
    bool;
  _seed_tform_object_is_set_type seed_tform_object_is_set;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__seed_tform_object(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->seed_tform_object = _arg;
    return *this;
  }
  Type & set__seed_tform_object_is_set(
    const bool & _arg)
  {
    this->seed_tform_object_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AnchoredWorldObject
    std::shared_ptr<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AnchoredWorldObject
    std::shared_ptr<bosdyn_msgs::msg::AnchoredWorldObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnchoredWorldObject_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->seed_tform_object != other.seed_tform_object) {
      return false;
    }
    if (this->seed_tform_object_is_set != other.seed_tform_object_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnchoredWorldObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnchoredWorldObject_

// alias to use template instance with default allocator
using AnchoredWorldObject =
  bosdyn_msgs::msg::AnchoredWorldObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHORED_WORLD_OBJECT__STRUCT_HPP_
