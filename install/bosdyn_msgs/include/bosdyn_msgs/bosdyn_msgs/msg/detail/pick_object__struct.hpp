// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PickObject.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'object_rt_frame'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'grasp_params'
#include "bosdyn_msgs/msg/detail/grasp_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PickObject __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PickObject __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PickObject_
{
  using Type = PickObject_<ContainerAllocator>;

  explicit PickObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_rt_frame(_init),
    grasp_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->object_rt_frame_is_set = false;
      this->grasp_params_is_set = false;
    }
  }

  explicit PickObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_name(_alloc),
    object_rt_frame(_alloc, _init),
    grasp_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->object_rt_frame_is_set = false;
      this->grasp_params_is_set = false;
    }
  }

  // field types and members
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;
  using _object_rt_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _object_rt_frame_type object_rt_frame;
  using _object_rt_frame_is_set_type =
    bool;
  _object_rt_frame_is_set_type object_rt_frame_is_set;
  using _grasp_params_type =
    bosdyn_msgs::msg::GraspParams_<ContainerAllocator>;
  _grasp_params_type grasp_params;
  using _grasp_params_is_set_type =
    bool;
  _grasp_params_is_set_type grasp_params_is_set;

  // setters for named parameter idiom
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }
  Type & set__object_rt_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->object_rt_frame = _arg;
    return *this;
  }
  Type & set__object_rt_frame_is_set(
    const bool & _arg)
  {
    this->object_rt_frame_is_set = _arg;
    return *this;
  }
  Type & set__grasp_params(
    const bosdyn_msgs::msg::GraspParams_<ContainerAllocator> & _arg)
  {
    this->grasp_params = _arg;
    return *this;
  }
  Type & set__grasp_params_is_set(
    const bool & _arg)
  {
    this->grasp_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PickObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PickObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PickObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PickObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PickObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PickObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PickObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PickObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PickObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PickObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PickObject
    std::shared_ptr<bosdyn_msgs::msg::PickObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PickObject
    std::shared_ptr<bosdyn_msgs::msg::PickObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickObject_ & other) const
  {
    if (this->frame_name != other.frame_name) {
      return false;
    }
    if (this->object_rt_frame != other.object_rt_frame) {
      return false;
    }
    if (this->object_rt_frame_is_set != other.object_rt_frame_is_set) {
      return false;
    }
    if (this->grasp_params != other.grasp_params) {
      return false;
    }
    if (this->grasp_params_is_set != other.grasp_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickObject_

// alias to use template instance with default allocator
using PickObject =
  bosdyn_msgs::msg::PickObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT__STRUCT_HPP_
