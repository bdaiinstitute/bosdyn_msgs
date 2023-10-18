// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignmentAlignment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'reference'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment_one_of_reference__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionWrapperSpotCamAlignmentAlignment_
{
  using Type = ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>;

  explicit ActionWrapperSpotCamAlignmentAlignment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zoom = 0.0f;
      this->sensor_id = "";
      this->is_skipped = false;
    }
  }

  explicit ActionWrapperSpotCamAlignmentAlignment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_id(_alloc),
    reference(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zoom = 0.0f;
      this->sensor_id = "";
      this->is_skipped = false;
    }
  }

  // field types and members
  using _zoom_type =
    float;
  _zoom_type zoom;
  using _sensor_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_id_type sensor_id;
  using _reference_type =
    bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>;
  _reference_type reference;
  using _is_skipped_type =
    bool;
  _is_skipped_type is_skipped;

  // setters for named parameter idiom
  Type & set__zoom(
    const float & _arg)
  {
    this->zoom = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__reference(
    const bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator> & _arg)
  {
    this->reference = _arg;
    return *this;
  }
  Type & set__is_skipped(
    const bool & _arg)
  {
    this->is_skipped = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionWrapperSpotCamAlignmentAlignment_ & other) const
  {
    if (this->zoom != other.zoom) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->reference != other.reference) {
      return false;
    }
    if (this->is_skipped != other.is_skipped) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionWrapperSpotCamAlignmentAlignment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionWrapperSpotCamAlignmentAlignment_

// alias to use template instance with default allocator
using ActionWrapperSpotCamAlignmentAlignment =
  bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__STRUCT_HPP_
