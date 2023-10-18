// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GazeCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_trajectory_in_frame1'
#include "bosdyn_msgs/msg/detail/vec3_trajectory__struct.hpp"
// Member 'tool_trajectory_in_frame2'
#include "bosdyn_msgs/msg/detail/se3_trajectory__struct.hpp"
// Member 'wrist_tform_tool'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GazeCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GazeCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GazeCommandRequest_
{
  using Type = GazeCommandRequest_<ContainerAllocator>;

  explicit GazeCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_trajectory_in_frame1(_init),
    tool_trajectory_in_frame2(_init),
    wrist_tform_tool(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_trajectory_in_frame1_is_set = false;
      this->frame1_name = "";
      this->tool_trajectory_in_frame2_is_set = false;
      this->frame2_name = "";
      this->wrist_tform_tool_is_set = false;
      this->target_trajectory_initial_velocity = 0.0;
      this->target_trajectory_initial_velocity_is_set = false;
      this->maximum_acceleration = 0.0;
      this->maximum_acceleration_is_set = false;
      this->max_linear_velocity = 0.0;
      this->max_linear_velocity_is_set = false;
      this->max_angular_velocity = 0.0;
      this->max_angular_velocity_is_set = false;
    }
  }

  explicit GazeCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_trajectory_in_frame1(_alloc, _init),
    frame1_name(_alloc),
    tool_trajectory_in_frame2(_alloc, _init),
    frame2_name(_alloc),
    wrist_tform_tool(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_trajectory_in_frame1_is_set = false;
      this->frame1_name = "";
      this->tool_trajectory_in_frame2_is_set = false;
      this->frame2_name = "";
      this->wrist_tform_tool_is_set = false;
      this->target_trajectory_initial_velocity = 0.0;
      this->target_trajectory_initial_velocity_is_set = false;
      this->maximum_acceleration = 0.0;
      this->maximum_acceleration_is_set = false;
      this->max_linear_velocity = 0.0;
      this->max_linear_velocity_is_set = false;
      this->max_angular_velocity = 0.0;
      this->max_angular_velocity_is_set = false;
    }
  }

  // field types and members
  using _target_trajectory_in_frame1_type =
    bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator>;
  _target_trajectory_in_frame1_type target_trajectory_in_frame1;
  using _target_trajectory_in_frame1_is_set_type =
    bool;
  _target_trajectory_in_frame1_is_set_type target_trajectory_in_frame1_is_set;
  using _frame1_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame1_name_type frame1_name;
  using _tool_trajectory_in_frame2_type =
    bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator>;
  _tool_trajectory_in_frame2_type tool_trajectory_in_frame2;
  using _tool_trajectory_in_frame2_is_set_type =
    bool;
  _tool_trajectory_in_frame2_is_set_type tool_trajectory_in_frame2_is_set;
  using _frame2_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame2_name_type frame2_name;
  using _wrist_tform_tool_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _wrist_tform_tool_type wrist_tform_tool;
  using _wrist_tform_tool_is_set_type =
    bool;
  _wrist_tform_tool_is_set_type wrist_tform_tool_is_set;
  using _target_trajectory_initial_velocity_type =
    double;
  _target_trajectory_initial_velocity_type target_trajectory_initial_velocity;
  using _target_trajectory_initial_velocity_is_set_type =
    bool;
  _target_trajectory_initial_velocity_is_set_type target_trajectory_initial_velocity_is_set;
  using _maximum_acceleration_type =
    double;
  _maximum_acceleration_type maximum_acceleration;
  using _maximum_acceleration_is_set_type =
    bool;
  _maximum_acceleration_is_set_type maximum_acceleration_is_set;
  using _max_linear_velocity_type =
    double;
  _max_linear_velocity_type max_linear_velocity;
  using _max_linear_velocity_is_set_type =
    bool;
  _max_linear_velocity_is_set_type max_linear_velocity_is_set;
  using _max_angular_velocity_type =
    double;
  _max_angular_velocity_type max_angular_velocity;
  using _max_angular_velocity_is_set_type =
    bool;
  _max_angular_velocity_is_set_type max_angular_velocity_is_set;

  // setters for named parameter idiom
  Type & set__target_trajectory_in_frame1(
    const bosdyn_msgs::msg::Vec3Trajectory_<ContainerAllocator> & _arg)
  {
    this->target_trajectory_in_frame1 = _arg;
    return *this;
  }
  Type & set__target_trajectory_in_frame1_is_set(
    const bool & _arg)
  {
    this->target_trajectory_in_frame1_is_set = _arg;
    return *this;
  }
  Type & set__frame1_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame1_name = _arg;
    return *this;
  }
  Type & set__tool_trajectory_in_frame2(
    const bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator> & _arg)
  {
    this->tool_trajectory_in_frame2 = _arg;
    return *this;
  }
  Type & set__tool_trajectory_in_frame2_is_set(
    const bool & _arg)
  {
    this->tool_trajectory_in_frame2_is_set = _arg;
    return *this;
  }
  Type & set__frame2_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame2_name = _arg;
    return *this;
  }
  Type & set__wrist_tform_tool(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->wrist_tform_tool = _arg;
    return *this;
  }
  Type & set__wrist_tform_tool_is_set(
    const bool & _arg)
  {
    this->wrist_tform_tool_is_set = _arg;
    return *this;
  }
  Type & set__target_trajectory_initial_velocity(
    const double & _arg)
  {
    this->target_trajectory_initial_velocity = _arg;
    return *this;
  }
  Type & set__target_trajectory_initial_velocity_is_set(
    const bool & _arg)
  {
    this->target_trajectory_initial_velocity_is_set = _arg;
    return *this;
  }
  Type & set__maximum_acceleration(
    const double & _arg)
  {
    this->maximum_acceleration = _arg;
    return *this;
  }
  Type & set__maximum_acceleration_is_set(
    const bool & _arg)
  {
    this->maximum_acceleration_is_set = _arg;
    return *this;
  }
  Type & set__max_linear_velocity(
    const double & _arg)
  {
    this->max_linear_velocity = _arg;
    return *this;
  }
  Type & set__max_linear_velocity_is_set(
    const bool & _arg)
  {
    this->max_linear_velocity_is_set = _arg;
    return *this;
  }
  Type & set__max_angular_velocity(
    const double & _arg)
  {
    this->max_angular_velocity = _arg;
    return *this;
  }
  Type & set__max_angular_velocity_is_set(
    const bool & _arg)
  {
    this->max_angular_velocity_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GazeCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GazeCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::GazeCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GazeCommandRequest_ & other) const
  {
    if (this->target_trajectory_in_frame1 != other.target_trajectory_in_frame1) {
      return false;
    }
    if (this->target_trajectory_in_frame1_is_set != other.target_trajectory_in_frame1_is_set) {
      return false;
    }
    if (this->frame1_name != other.frame1_name) {
      return false;
    }
    if (this->tool_trajectory_in_frame2 != other.tool_trajectory_in_frame2) {
      return false;
    }
    if (this->tool_trajectory_in_frame2_is_set != other.tool_trajectory_in_frame2_is_set) {
      return false;
    }
    if (this->frame2_name != other.frame2_name) {
      return false;
    }
    if (this->wrist_tform_tool != other.wrist_tform_tool) {
      return false;
    }
    if (this->wrist_tform_tool_is_set != other.wrist_tform_tool_is_set) {
      return false;
    }
    if (this->target_trajectory_initial_velocity != other.target_trajectory_initial_velocity) {
      return false;
    }
    if (this->target_trajectory_initial_velocity_is_set != other.target_trajectory_initial_velocity_is_set) {
      return false;
    }
    if (this->maximum_acceleration != other.maximum_acceleration) {
      return false;
    }
    if (this->maximum_acceleration_is_set != other.maximum_acceleration_is_set) {
      return false;
    }
    if (this->max_linear_velocity != other.max_linear_velocity) {
      return false;
    }
    if (this->max_linear_velocity_is_set != other.max_linear_velocity_is_set) {
      return false;
    }
    if (this->max_angular_velocity != other.max_angular_velocity) {
      return false;
    }
    if (this->max_angular_velocity_is_set != other.max_angular_velocity_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const GazeCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GazeCommandRequest_

// alias to use template instance with default allocator
using GazeCommandRequest =
  bosdyn_msgs::msg::GazeCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_REQUEST__STRUCT_HPP_
