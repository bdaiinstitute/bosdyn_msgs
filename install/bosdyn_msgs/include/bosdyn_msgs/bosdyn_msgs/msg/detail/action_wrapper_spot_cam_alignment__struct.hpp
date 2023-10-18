// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'alignments'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment__struct.hpp"
// Member 'target_tform_sensor'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignment __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignment __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionWrapperSpotCamAlignment_
{
  using Type = ActionWrapperSpotCamAlignment_<ContainerAllocator>;

  explicit ActionWrapperSpotCamAlignment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_tform_sensor(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_tform_sensor_is_set = false;
      this->final_zoom = 0.0f;
    }
  }

  explicit ActionWrapperSpotCamAlignment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_tform_sensor(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_tform_sensor_is_set = false;
      this->final_zoom = 0.0f;
    }
  }

  // field types and members
  using _alignments_type =
    std::vector<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>>>;
  _alignments_type alignments;
  using _target_tform_sensor_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _target_tform_sensor_type target_tform_sensor;
  using _target_tform_sensor_is_set_type =
    bool;
  _target_tform_sensor_is_set_type target_tform_sensor_is_set;
  using _final_zoom_type =
    float;
  _final_zoom_type final_zoom;
  using _target_sensor_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _target_sensor_ids_type target_sensor_ids;

  // setters for named parameter idiom
  Type & set__alignments(
    const std::vector<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment_<ContainerAllocator>>> & _arg)
  {
    this->alignments = _arg;
    return *this;
  }
  Type & set__target_tform_sensor(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->target_tform_sensor = _arg;
    return *this;
  }
  Type & set__target_tform_sensor_is_set(
    const bool & _arg)
  {
    this->target_tform_sensor_is_set = _arg;
    return *this;
  }
  Type & set__final_zoom(
    const float & _arg)
  {
    this->final_zoom = _arg;
    return *this;
  }
  Type & set__target_sensor_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->target_sensor_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignment
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignment
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionWrapperSpotCamAlignment_ & other) const
  {
    if (this->alignments != other.alignments) {
      return false;
    }
    if (this->target_tform_sensor != other.target_tform_sensor) {
      return false;
    }
    if (this->target_tform_sensor_is_set != other.target_tform_sensor_is_set) {
      return false;
    }
    if (this->final_zoom != other.final_zoom) {
      return false;
    }
    if (this->target_sensor_ids != other.target_sensor_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionWrapperSpotCamAlignment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionWrapperSpotCamAlignment_

// alias to use template instance with default allocator
using ActionWrapperSpotCamAlignment =
  bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT__STRUCT_HPP_
