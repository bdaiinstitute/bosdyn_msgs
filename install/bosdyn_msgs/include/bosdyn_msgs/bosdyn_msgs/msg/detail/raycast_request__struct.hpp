// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RaycastRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__STRUCT_HPP_

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
// Member 'ray'
#include "bosdyn_msgs/msg/detail/ray__struct.hpp"
// Member 'intersection_types'
#include "bosdyn_msgs/msg/detail/ray_intersection_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RaycastRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RaycastRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RaycastRequest_
{
  using Type = RaycastRequest_<ContainerAllocator>;

  explicit RaycastRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ray(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->ray_frame_name = "";
      this->ray_is_set = false;
      this->min_intersection_distance = 0.0f;
    }
  }

  explicit RaycastRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ray_frame_name(_alloc),
    ray(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->ray_frame_name = "";
      this->ray_is_set = false;
      this->min_intersection_distance = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _ray_frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ray_frame_name_type ray_frame_name;
  using _ray_type =
    bosdyn_msgs::msg::Ray_<ContainerAllocator>;
  _ray_type ray;
  using _ray_is_set_type =
    bool;
  _ray_is_set_type ray_is_set;
  using _min_intersection_distance_type =
    float;
  _min_intersection_distance_type min_intersection_distance;
  using _intersection_types_type =
    std::vector<bosdyn_msgs::msg::RayIntersectionType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::RayIntersectionType_<ContainerAllocator>>>;
  _intersection_types_type intersection_types;

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
  Type & set__ray_frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ray_frame_name = _arg;
    return *this;
  }
  Type & set__ray(
    const bosdyn_msgs::msg::Ray_<ContainerAllocator> & _arg)
  {
    this->ray = _arg;
    return *this;
  }
  Type & set__ray_is_set(
    const bool & _arg)
  {
    this->ray_is_set = _arg;
    return *this;
  }
  Type & set__min_intersection_distance(
    const float & _arg)
  {
    this->min_intersection_distance = _arg;
    return *this;
  }
  Type & set__intersection_types(
    const std::vector<bosdyn_msgs::msg::RayIntersectionType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::RayIntersectionType_<ContainerAllocator>>> & _arg)
  {
    this->intersection_types = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RaycastRequest
    std::shared_ptr<bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RaycastRequest
    std::shared_ptr<bosdyn_msgs::msg::RaycastRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RaycastRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->ray_frame_name != other.ray_frame_name) {
      return false;
    }
    if (this->ray != other.ray) {
      return false;
    }
    if (this->ray_is_set != other.ray_is_set) {
      return false;
    }
    if (this->min_intersection_distance != other.min_intersection_distance) {
      return false;
    }
    if (this->intersection_types != other.intersection_types) {
      return false;
    }
    return true;
  }
  bool operator!=(const RaycastRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RaycastRequest_

// alias to use template instance with default allocator
using RaycastRequest =
  bosdyn_msgs::msg::RaycastRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__STRUCT_HPP_
