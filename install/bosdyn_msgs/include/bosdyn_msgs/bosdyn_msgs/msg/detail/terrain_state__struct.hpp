// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TerrainState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TERRAIN_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TERRAIN_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TerrainState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TerrainState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TerrainState_
{
  using Type = TerrainState_<ContainerAllocator>;

  explicit TerrainState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_unsafe_to_sit = false;
    }
  }

  explicit TerrainState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_unsafe_to_sit = false;
    }
  }

  // field types and members
  using _is_unsafe_to_sit_type =
    bool;
  _is_unsafe_to_sit_type is_unsafe_to_sit;

  // setters for named parameter idiom
  Type & set__is_unsafe_to_sit(
    const bool & _arg)
  {
    this->is_unsafe_to_sit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TerrainState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TerrainState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TerrainState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TerrainState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TerrainState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TerrainState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TerrainState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TerrainState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TerrainState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TerrainState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TerrainState
    std::shared_ptr<bosdyn_msgs::msg::TerrainState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TerrainState
    std::shared_ptr<bosdyn_msgs::msg::TerrainState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TerrainState_ & other) const
  {
    if (this->is_unsafe_to_sit != other.is_unsafe_to_sit) {
      return false;
    }
    return true;
  }
  bool operator!=(const TerrainState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TerrainState_

// alias to use template instance with default allocator
using TerrainState =
  bosdyn_msgs::msg::TerrainState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TERRAIN_STATE__STRUCT_HPP_
