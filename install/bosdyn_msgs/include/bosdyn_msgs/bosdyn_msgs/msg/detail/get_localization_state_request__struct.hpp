// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GetLocalizationStateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_REQUEST__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GetLocalizationStateRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GetLocalizationStateRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GetLocalizationStateRequest_
{
  using Type = GetLocalizationStateRequest_<ContainerAllocator>;

  explicit GetLocalizationStateRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->waypoint_id = "";
      this->request_live_point_cloud = false;
      this->request_live_images = false;
      this->request_live_terrain_maps = false;
      this->request_live_world_objects = false;
      this->request_live_robot_state = false;
      this->compress_live_point_cloud = false;
    }
  }

  explicit GetLocalizationStateRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    waypoint_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->waypoint_id = "";
      this->request_live_point_cloud = false;
      this->request_live_images = false;
      this->request_live_terrain_maps = false;
      this->request_live_world_objects = false;
      this->request_live_robot_state = false;
      this->compress_live_point_cloud = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_id_type waypoint_id;
  using _request_live_point_cloud_type =
    bool;
  _request_live_point_cloud_type request_live_point_cloud;
  using _request_live_images_type =
    bool;
  _request_live_images_type request_live_images;
  using _request_live_terrain_maps_type =
    bool;
  _request_live_terrain_maps_type request_live_terrain_maps;
  using _request_live_world_objects_type =
    bool;
  _request_live_world_objects_type request_live_world_objects;
  using _request_live_robot_state_type =
    bool;
  _request_live_robot_state_type request_live_robot_state;
  using _compress_live_point_cloud_type =
    bool;
  _compress_live_point_cloud_type compress_live_point_cloud;

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
  Type & set__waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_id = _arg;
    return *this;
  }
  Type & set__request_live_point_cloud(
    const bool & _arg)
  {
    this->request_live_point_cloud = _arg;
    return *this;
  }
  Type & set__request_live_images(
    const bool & _arg)
  {
    this->request_live_images = _arg;
    return *this;
  }
  Type & set__request_live_terrain_maps(
    const bool & _arg)
  {
    this->request_live_terrain_maps = _arg;
    return *this;
  }
  Type & set__request_live_world_objects(
    const bool & _arg)
  {
    this->request_live_world_objects = _arg;
    return *this;
  }
  Type & set__request_live_robot_state(
    const bool & _arg)
  {
    this->request_live_robot_state = _arg;
    return *this;
  }
  Type & set__compress_live_point_cloud(
    const bool & _arg)
  {
    this->compress_live_point_cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GetLocalizationStateRequest
    std::shared_ptr<bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GetLocalizationStateRequest
    std::shared_ptr<bosdyn_msgs::msg::GetLocalizationStateRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLocalizationStateRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->waypoint_id != other.waypoint_id) {
      return false;
    }
    if (this->request_live_point_cloud != other.request_live_point_cloud) {
      return false;
    }
    if (this->request_live_images != other.request_live_images) {
      return false;
    }
    if (this->request_live_terrain_maps != other.request_live_terrain_maps) {
      return false;
    }
    if (this->request_live_world_objects != other.request_live_world_objects) {
      return false;
    }
    if (this->request_live_robot_state != other.request_live_robot_state) {
      return false;
    }
    if (this->compress_live_point_cloud != other.compress_live_point_cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLocalizationStateRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLocalizationStateRequest_

// alias to use template instance with default allocator
using GetLocalizationStateRequest =
  bosdyn_msgs::msg::GetLocalizationStateRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_REQUEST__STRUCT_HPP_
