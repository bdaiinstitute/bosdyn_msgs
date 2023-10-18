// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ManipulationApiRequestOneOfManipulationCmd.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST_ONE_OF_MANIPULATION_CMD__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST_ONE_OF_MANIPULATION_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'walk_to_object_ray_in_world'
#include "bosdyn_msgs/msg/detail/walk_to_object_ray_in_world__struct.hpp"
// Member 'walk_to_object_in_image'
#include "bosdyn_msgs/msg/detail/walk_to_object_in_image__struct.hpp"
// Member 'pick_object'
#include "bosdyn_msgs/msg/detail/pick_object__struct.hpp"
// Member 'pick_object_in_image'
#include "bosdyn_msgs/msg/detail/pick_object_in_image__struct.hpp"
// Member 'pick_object_ray_in_world'
#include "bosdyn_msgs/msg/detail/pick_object_ray_in_world__struct.hpp"
// Member 'pick_object_execute_plan'
#include "bosdyn_msgs/msg/detail/pick_object_execute_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManipulationApiRequestOneOfManipulationCmd_
{
  using Type = ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>;

  explicit ManipulationApiRequestOneOfManipulationCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : walk_to_object_ray_in_world(_init),
    walk_to_object_in_image(_init),
    pick_object(_init),
    pick_object_in_image(_init),
    pick_object_ray_in_world(_init),
    pick_object_execute_plan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manipulation_cmd_choice = 0;
    }
  }

  explicit ManipulationApiRequestOneOfManipulationCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : walk_to_object_ray_in_world(_alloc, _init),
    walk_to_object_in_image(_alloc, _init),
    pick_object(_alloc, _init),
    pick_object_in_image(_alloc, _init),
    pick_object_ray_in_world(_alloc, _init),
    pick_object_execute_plan(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manipulation_cmd_choice = 0;
    }
  }

  // field types and members
  using _walk_to_object_ray_in_world_type =
    bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator>;
  _walk_to_object_ray_in_world_type walk_to_object_ray_in_world;
  using _walk_to_object_in_image_type =
    bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator>;
  _walk_to_object_in_image_type walk_to_object_in_image;
  using _pick_object_type =
    bosdyn_msgs::msg::PickObject_<ContainerAllocator>;
  _pick_object_type pick_object;
  using _pick_object_in_image_type =
    bosdyn_msgs::msg::PickObjectInImage_<ContainerAllocator>;
  _pick_object_in_image_type pick_object_in_image;
  using _pick_object_ray_in_world_type =
    bosdyn_msgs::msg::PickObjectRayInWorld_<ContainerAllocator>;
  _pick_object_ray_in_world_type pick_object_ray_in_world;
  using _pick_object_execute_plan_type =
    bosdyn_msgs::msg::PickObjectExecutePlan_<ContainerAllocator>;
  _pick_object_execute_plan_type pick_object_execute_plan;
  using _manipulation_cmd_choice_type =
    int8_t;
  _manipulation_cmd_choice_type manipulation_cmd_choice;

  // setters for named parameter idiom
  Type & set__walk_to_object_ray_in_world(
    const bosdyn_msgs::msg::WalkToObjectRayInWorld_<ContainerAllocator> & _arg)
  {
    this->walk_to_object_ray_in_world = _arg;
    return *this;
  }
  Type & set__walk_to_object_in_image(
    const bosdyn_msgs::msg::WalkToObjectInImage_<ContainerAllocator> & _arg)
  {
    this->walk_to_object_in_image = _arg;
    return *this;
  }
  Type & set__pick_object(
    const bosdyn_msgs::msg::PickObject_<ContainerAllocator> & _arg)
  {
    this->pick_object = _arg;
    return *this;
  }
  Type & set__pick_object_in_image(
    const bosdyn_msgs::msg::PickObjectInImage_<ContainerAllocator> & _arg)
  {
    this->pick_object_in_image = _arg;
    return *this;
  }
  Type & set__pick_object_ray_in_world(
    const bosdyn_msgs::msg::PickObjectRayInWorld_<ContainerAllocator> & _arg)
  {
    this->pick_object_ray_in_world = _arg;
    return *this;
  }
  Type & set__pick_object_execute_plan(
    const bosdyn_msgs::msg::PickObjectExecutePlan_<ContainerAllocator> & _arg)
  {
    this->pick_object_execute_plan = _arg;
    return *this;
  }
  Type & set__manipulation_cmd_choice(
    const int8_t & _arg)
  {
    this->manipulation_cmd_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t MANIPULATION_CMD_NOT_SET =
    0;
  static constexpr int8_t MANIPULATION_CMD_WALK_TO_OBJECT_RAY_IN_WORLD_SET =
    1;
  static constexpr int8_t MANIPULATION_CMD_WALK_TO_OBJECT_IN_IMAGE_SET =
    2;
  static constexpr int8_t MANIPULATION_CMD_PICK_OBJECT_SET =
    3;
  static constexpr int8_t MANIPULATION_CMD_PICK_OBJECT_IN_IMAGE_SET =
    4;
  static constexpr int8_t MANIPULATION_CMD_PICK_OBJECT_RAY_IN_WORLD_SET =
    5;
  static constexpr int8_t MANIPULATION_CMD_PICK_OBJECT_EXECUTE_PLAN_SET =
    6;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd
    std::shared_ptr<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd
    std::shared_ptr<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManipulationApiRequestOneOfManipulationCmd_ & other) const
  {
    if (this->walk_to_object_ray_in_world != other.walk_to_object_ray_in_world) {
      return false;
    }
    if (this->walk_to_object_in_image != other.walk_to_object_in_image) {
      return false;
    }
    if (this->pick_object != other.pick_object) {
      return false;
    }
    if (this->pick_object_in_image != other.pick_object_in_image) {
      return false;
    }
    if (this->pick_object_ray_in_world != other.pick_object_ray_in_world) {
      return false;
    }
    if (this->pick_object_execute_plan != other.pick_object_execute_plan) {
      return false;
    }
    if (this->manipulation_cmd_choice != other.manipulation_cmd_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManipulationApiRequestOneOfManipulationCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManipulationApiRequestOneOfManipulationCmd_

// alias to use template instance with default allocator
using ManipulationApiRequestOneOfManipulationCmd =
  bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>::MANIPULATION_CMD_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>::MANIPULATION_CMD_WALK_TO_OBJECT_RAY_IN_WORLD_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>::MANIPULATION_CMD_WALK_TO_OBJECT_IN_IMAGE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>::MANIPULATION_CMD_PICK_OBJECT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>::MANIPULATION_CMD_PICK_OBJECT_IN_IMAGE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>::MANIPULATION_CMD_PICK_OBJECT_RAY_IN_WORLD_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ManipulationApiRequestOneOfManipulationCmd_<ContainerAllocator>::MANIPULATION_CMD_PICK_OBJECT_EXECUTE_PLAN_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST_ONE_OF_MANIPULATION_CMD__STRUCT_HPP_
