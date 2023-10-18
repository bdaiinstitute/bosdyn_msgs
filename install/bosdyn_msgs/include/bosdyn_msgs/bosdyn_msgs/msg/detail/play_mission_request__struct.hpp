// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PlayMissionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAY_MISSION_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAY_MISSION_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'pause_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__struct.hpp"
// Member 'settings'
#include "bosdyn_msgs/msg/detail/play_settings__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PlayMissionRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PlayMissionRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlayMissionRequest_
{
  using Type = PlayMissionRequest_<ContainerAllocator>;

  explicit PlayMissionRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pause_time(_init),
    settings(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->pause_time_is_set = false;
      this->settings_is_set = false;
    }
  }

  explicit PlayMissionRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pause_time(_alloc, _init),
    settings(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->pause_time_is_set = false;
      this->settings_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _pause_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _pause_time_type pause_time;
  using _pause_time_is_set_type =
    bool;
  _pause_time_is_set_type pause_time_is_set;
  using _leases_type =
    std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>>;
  _leases_type leases;
  using _settings_type =
    bosdyn_msgs::msg::PlaySettings_<ContainerAllocator>;
  _settings_type settings;
  using _settings_is_set_type =
    bool;
  _settings_is_set_type settings_is_set;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__pause_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->pause_time = _arg;
    return *this;
  }
  Type & set__pause_time_is_set(
    const bool & _arg)
  {
    this->pause_time_is_set = _arg;
    return *this;
  }
  Type & set__leases(
    const std::vector<bosdyn_msgs::msg::Lease_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Lease_<ContainerAllocator>>> & _arg)
  {
    this->leases = _arg;
    return *this;
  }
  Type & set__settings(
    const bosdyn_msgs::msg::PlaySettings_<ContainerAllocator> & _arg)
  {
    this->settings = _arg;
    return *this;
  }
  Type & set__settings_is_set(
    const bool & _arg)
  {
    this->settings_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PlayMissionRequest
    std::shared_ptr<bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PlayMissionRequest
    std::shared_ptr<bosdyn_msgs::msg::PlayMissionRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlayMissionRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->pause_time != other.pause_time) {
      return false;
    }
    if (this->pause_time_is_set != other.pause_time_is_set) {
      return false;
    }
    if (this->leases != other.leases) {
      return false;
    }
    if (this->settings != other.settings) {
      return false;
    }
    if (this->settings_is_set != other.settings_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlayMissionRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlayMissionRequest_

// alias to use template instance with default allocator
using PlayMissionRequest =
  bosdyn_msgs::msg::PlayMissionRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAY_MISSION_REQUEST__STRUCT_HPP_
