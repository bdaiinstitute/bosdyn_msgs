// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RecordingEnvironment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORDING_ENVIRONMENT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORDING_ENVIRONMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoint_environment'
#include "bosdyn_msgs/msg/detail/waypoint_annotations__struct.hpp"
// Member 'edge_environment'
#include "bosdyn_msgs/msg/detail/edge_annotations__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RecordingEnvironment __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RecordingEnvironment __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RecordingEnvironment_
{
  using Type = RecordingEnvironment_<ContainerAllocator>;

  explicit RecordingEnvironment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_environment(_init),
    edge_environment(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name_prefix = "";
      this->waypoint_environment_is_set = false;
      this->edge_environment_is_set = false;
    }
  }

  explicit RecordingEnvironment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name_prefix(_alloc),
    waypoint_environment(_alloc, _init),
    edge_environment(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name_prefix = "";
      this->waypoint_environment_is_set = false;
      this->edge_environment_is_set = false;
    }
  }

  // field types and members
  using _name_prefix_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_prefix_type name_prefix;
  using _waypoint_environment_type =
    bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator>;
  _waypoint_environment_type waypoint_environment;
  using _waypoint_environment_is_set_type =
    bool;
  _waypoint_environment_is_set_type waypoint_environment_is_set;
  using _edge_environment_type =
    bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator>;
  _edge_environment_type edge_environment;
  using _edge_environment_is_set_type =
    bool;
  _edge_environment_is_set_type edge_environment_is_set;

  // setters for named parameter idiom
  Type & set__name_prefix(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name_prefix = _arg;
    return *this;
  }
  Type & set__waypoint_environment(
    const bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator> & _arg)
  {
    this->waypoint_environment = _arg;
    return *this;
  }
  Type & set__waypoint_environment_is_set(
    const bool & _arg)
  {
    this->waypoint_environment_is_set = _arg;
    return *this;
  }
  Type & set__edge_environment(
    const bosdyn_msgs::msg::EdgeAnnotations_<ContainerAllocator> & _arg)
  {
    this->edge_environment = _arg;
    return *this;
  }
  Type & set__edge_environment_is_set(
    const bool & _arg)
  {
    this->edge_environment_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RecordingEnvironment
    std::shared_ptr<bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RecordingEnvironment
    std::shared_ptr<bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordingEnvironment_ & other) const
  {
    if (this->name_prefix != other.name_prefix) {
      return false;
    }
    if (this->waypoint_environment != other.waypoint_environment) {
      return false;
    }
    if (this->waypoint_environment_is_set != other.waypoint_environment_is_set) {
      return false;
    }
    if (this->edge_environment != other.edge_environment) {
      return false;
    }
    if (this->edge_environment_is_set != other.edge_environment_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordingEnvironment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordingEnvironment_

// alias to use template instance with default allocator
using RecordingEnvironment =
  bosdyn_msgs::msg::RecordingEnvironment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORDING_ENVIRONMENT__STRUCT_HPP_
