// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Walk.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WALK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WALK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'global_parameters'
#include "bosdyn_msgs/msg/detail/global_parameters__struct.hpp"
// Member 'playback_mode'
#include "bosdyn_msgs/msg/detail/playback_mode__struct.hpp"
// Member 'elements'
#include "bosdyn_msgs/msg/detail/element__struct.hpp"
// Member 'docks'
#include "bosdyn_msgs/msg/detail/dock__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Walk __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Walk __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Walk_
{
  using Type = Walk_<ContainerAllocator>;

  explicit Walk_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : global_parameters(_init),
    playback_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_parameters_is_set = false;
      this->playback_mode_is_set = false;
      this->map_name = "";
      this->mission_name = "";
      this->id = "";
    }
  }

  explicit Walk_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : global_parameters(_alloc, _init),
    playback_mode(_alloc, _init),
    map_name(_alloc),
    mission_name(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_parameters_is_set = false;
      this->playback_mode_is_set = false;
      this->map_name = "";
      this->mission_name = "";
      this->id = "";
    }
  }

  // field types and members
  using _global_parameters_type =
    bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator>;
  _global_parameters_type global_parameters;
  using _global_parameters_is_set_type =
    bool;
  _global_parameters_is_set_type global_parameters_is_set;
  using _playback_mode_type =
    bosdyn_msgs::msg::PlaybackMode_<ContainerAllocator>;
  _playback_mode_type playback_mode;
  using _playback_mode_is_set_type =
    bool;
  _playback_mode_is_set_type playback_mode_is_set;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _mission_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_name_type mission_name;
  using _elements_type =
    std::vector<bosdyn_msgs::msg::Element_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Element_<ContainerAllocator>>>;
  _elements_type elements;
  using _docks_type =
    std::vector<bosdyn_msgs::msg::Dock_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Dock_<ContainerAllocator>>>;
  _docks_type docks;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__global_parameters(
    const bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator> & _arg)
  {
    this->global_parameters = _arg;
    return *this;
  }
  Type & set__global_parameters_is_set(
    const bool & _arg)
  {
    this->global_parameters_is_set = _arg;
    return *this;
  }
  Type & set__playback_mode(
    const bosdyn_msgs::msg::PlaybackMode_<ContainerAllocator> & _arg)
  {
    this->playback_mode = _arg;
    return *this;
  }
  Type & set__playback_mode_is_set(
    const bool & _arg)
  {
    this->playback_mode_is_set = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__mission_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_name = _arg;
    return *this;
  }
  Type & set__elements(
    const std::vector<bosdyn_msgs::msg::Element_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Element_<ContainerAllocator>>> & _arg)
  {
    this->elements = _arg;
    return *this;
  }
  Type & set__docks(
    const std::vector<bosdyn_msgs::msg::Dock_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Dock_<ContainerAllocator>>> & _arg)
  {
    this->docks = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Walk_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Walk_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Walk_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Walk_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Walk_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Walk_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Walk_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Walk_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Walk_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Walk_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Walk
    std::shared_ptr<bosdyn_msgs::msg::Walk_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Walk
    std::shared_ptr<bosdyn_msgs::msg::Walk_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Walk_ & other) const
  {
    if (this->global_parameters != other.global_parameters) {
      return false;
    }
    if (this->global_parameters_is_set != other.global_parameters_is_set) {
      return false;
    }
    if (this->playback_mode != other.playback_mode) {
      return false;
    }
    if (this->playback_mode_is_set != other.playback_mode_is_set) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->mission_name != other.mission_name) {
      return false;
    }
    if (this->elements != other.elements) {
      return false;
    }
    if (this->docks != other.docks) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Walk_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Walk_

// alias to use template instance with default allocator
using Walk =
  bosdyn_msgs::msg::Walk_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WALK__STRUCT_HPP_
