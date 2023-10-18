// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EdgeSnapshot.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stances'
#include "bosdyn_msgs/msg/detail/edge_snapshot_stance__struct.hpp"
// Member 'area_callbacks'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EdgeSnapshot __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EdgeSnapshot __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EdgeSnapshot_
{
  using Type = EdgeSnapshot_<ContainerAllocator>;

  explicit EdgeSnapshot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  explicit EdgeSnapshot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _stances_type =
    std::vector<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>>>;
  _stances_type stances;
  using _area_callbacks_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData_<ContainerAllocator>>>;
  _area_callbacks_type area_callbacks;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__stances(
    const std::vector<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EdgeSnapshotStance_<ContainerAllocator>>> & _arg)
  {
    this->stances = _arg;
    return *this;
  }
  Type & set__area_callbacks(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackData_<ContainerAllocator>>> & _arg)
  {
    this->area_callbacks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EdgeSnapshot
    std::shared_ptr<bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EdgeSnapshot
    std::shared_ptr<bosdyn_msgs::msg::EdgeSnapshot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EdgeSnapshot_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->stances != other.stances) {
      return false;
    }
    if (this->area_callbacks != other.area_callbacks) {
      return false;
    }
    return true;
  }
  bool operator!=(const EdgeSnapshot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EdgeSnapshot_

// alias to use template instance with default allocator
using EdgeSnapshot =
  bosdyn_msgs::msg::EdgeSnapshot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT__STRUCT_HPP_
