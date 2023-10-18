// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'root'
#include "bosdyn_msgs/msg/detail/node_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MissionInfo __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MissionInfo __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionInfo_
{
  using Type = MissionInfo_<ContainerAllocator>;

  explicit MissionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : root(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->root_is_set = false;
    }
  }

  explicit MissionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : root(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->root_is_set = false;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _root_type =
    bosdyn_msgs::msg::NodeInfo_<ContainerAllocator>;
  _root_type root;
  using _root_is_set_type =
    bool;
  _root_is_set_type root_is_set;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__root(
    const bosdyn_msgs::msg::NodeInfo_<ContainerAllocator> & _arg)
  {
    this->root = _arg;
    return *this;
  }
  Type & set__root_is_set(
    const bool & _arg)
  {
    this->root_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MissionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MissionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MissionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MissionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MissionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MissionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MissionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MissionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MissionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MissionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MissionInfo
    std::shared_ptr<bosdyn_msgs::msg::MissionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MissionInfo
    std::shared_ptr<bosdyn_msgs::msg::MissionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->root != other.root) {
      return false;
    }
    if (this->root_is_set != other.root_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionInfo_

// alias to use template instance with default allocator
using MissionInfo =
  bosdyn_msgs::msg::MissionInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_HPP_
