// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
#include "bosdyn_msgs/msg/detail/edge_id__struct.hpp"
// Member 'from_tform_to'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'annotations'
#include "bosdyn_msgs/msg/detail/edge_annotations__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Edge __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Edge __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Edge_
{
  using Type = Edge_<ContainerAllocator>;

  explicit Edge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    from_tform_to(_init),
    annotations(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_is_set = false;
      this->snapshot_id = "";
      this->from_tform_to_is_set = false;
      this->annotations_is_set = false;
    }
  }

  explicit Edge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    snapshot_id(_alloc),
    from_tform_to(_alloc, _init),
    annotations(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_is_set = false;
      this->snapshot_id = "";
      this->from_tform_to_is_set = false;
      this->annotations_is_set = false;
    }
  }

  // field types and members
  using _id_type =
    bosdyn_msgs::msg::EdgeId_<ContainerAllocator>;
  _id_type id;
  using _id_is_set_type =
    bool;
  _id_is_set_type id_is_set;
  using _snapshot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _snapshot_id_type snapshot_id;
  using _from_tform_to_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _from_tform_to_type from_tform_to;
  using _from_tform_to_is_set_type =
    bool;
  _from_tform_to_is_set_type from_tform_to_is_set;
  using _annotations_type =
    bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator>;
  _annotations_type annotations;
  using _annotations_is_set_type =
    bool;
  _annotations_is_set_type annotations_is_set;

  // setters for named parameter idiom
  Type & set__id(
    const bosdyn_msgs::msg::EdgeId_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__id_is_set(
    const bool & _arg)
  {
    this->id_is_set = _arg;
    return *this;
  }
  Type & set__snapshot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->snapshot_id = _arg;
    return *this;
  }
  Type & set__from_tform_to(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->from_tform_to = _arg;
    return *this;
  }
  Type & set__from_tform_to_is_set(
    const bool & _arg)
  {
    this->from_tform_to_is_set = _arg;
    return *this;
  }
  Type & set__annotations(
    const bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator> & _arg)
  {
    this->annotations = _arg;
    return *this;
  }
  Type & set__annotations_is_set(
    const bool & _arg)
  {
    this->annotations_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Edge_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Edge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Edge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Edge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Edge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Edge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Edge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Edge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Edge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Edge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Edge
    std::shared_ptr<bosdyn_msgs::msg::Edge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Edge
    std::shared_ptr<bosdyn_msgs::msg::Edge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Edge_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->id_is_set != other.id_is_set) {
      return false;
    }
    if (this->snapshot_id != other.snapshot_id) {
      return false;
    }
    if (this->from_tform_to != other.from_tform_to) {
      return false;
    }
    if (this->from_tform_to_is_set != other.from_tform_to_is_set) {
      return false;
    }
    if (this->annotations != other.annotations) {
      return false;
    }
    if (this->annotations_is_set != other.annotations_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Edge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Edge_

// alias to use template instance with default allocator
using Edge =
  bosdyn_msgs::msg::Edge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE__STRUCT_HPP_
