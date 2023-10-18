// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SpotCamPtzAdjustParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ_ADJUST_PARAMETERS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ_ADJUST_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoint_tform_body'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SpotCamPtzAdjustParameters __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SpotCamPtzAdjustParameters __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpotCamPtzAdjustParameters_
{
  using Type = SpotCamPtzAdjustParameters_<ContainerAllocator>;

  explicit SpotCamPtzAdjustParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint_tform_body(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->localization_varname = "";
      this->waypoint_id = "";
      this->waypoint_tform_body_is_set = false;
    }
  }

  explicit SpotCamPtzAdjustParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : localization_varname(_alloc),
    waypoint_id(_alloc),
    waypoint_tform_body(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->localization_varname = "";
      this->waypoint_id = "";
      this->waypoint_tform_body_is_set = false;
    }
  }

  // field types and members
  using _localization_varname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _localization_varname_type localization_varname;
  using _waypoint_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waypoint_id_type waypoint_id;
  using _waypoint_tform_body_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _waypoint_tform_body_type waypoint_tform_body;
  using _waypoint_tform_body_is_set_type =
    bool;
  _waypoint_tform_body_is_set_type waypoint_tform_body_is_set;

  // setters for named parameter idiom
  Type & set__localization_varname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->localization_varname = _arg;
    return *this;
  }
  Type & set__waypoint_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waypoint_id = _arg;
    return *this;
  }
  Type & set__waypoint_tform_body(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->waypoint_tform_body = _arg;
    return *this;
  }
  Type & set__waypoint_tform_body_is_set(
    const bool & _arg)
  {
    this->waypoint_tform_body_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCamPtzAdjustParameters
    std::shared_ptr<bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCamPtzAdjustParameters
    std::shared_ptr<bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpotCamPtzAdjustParameters_ & other) const
  {
    if (this->localization_varname != other.localization_varname) {
      return false;
    }
    if (this->waypoint_id != other.waypoint_id) {
      return false;
    }
    if (this->waypoint_tform_body != other.waypoint_tform_body) {
      return false;
    }
    if (this->waypoint_tform_body_is_set != other.waypoint_tform_body_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpotCamPtzAdjustParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpotCamPtzAdjustParameters_

// alias to use template instance with default allocator
using SpotCamPtzAdjustParameters =
  bosdyn_msgs::msg::SpotCamPtzAdjustParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ_ADJUST_PARAMETERS__STRUCT_HPP_
