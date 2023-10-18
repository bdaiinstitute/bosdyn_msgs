// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmImpedanceCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'root_tform_task'
// Member 'wrist_tform_tool'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'task_tform_desired_tool'
#include "bosdyn_msgs/msg/detail/se3_trajectory__struct.hpp"
// Member 'feed_forward_wrench_at_tool_in_desired_tool'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"
// Member 'diagonal_stiffness_matrix'
// Member 'diagonal_damping_matrix'
#include "bosdyn_msgs/msg/detail/vector__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmImpedanceCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmImpedanceCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmImpedanceCommandRequest_
{
  using Type = ArmImpedanceCommandRequest_<ContainerAllocator>;

  explicit ArmImpedanceCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : root_tform_task(_init),
    wrist_tform_tool(_init),
    task_tform_desired_tool(_init),
    feed_forward_wrench_at_tool_in_desired_tool(_init),
    diagonal_stiffness_matrix(_init),
    diagonal_damping_matrix(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root_frame_name = "";
      this->root_tform_task_is_set = false;
      this->wrist_tform_tool_is_set = false;
      this->task_tform_desired_tool_is_set = false;
      this->feed_forward_wrench_at_tool_in_desired_tool_is_set = false;
      this->diagonal_stiffness_matrix_is_set = false;
      this->diagonal_damping_matrix_is_set = false;
      this->max_force_mag = 0.0;
      this->max_force_mag_is_set = false;
      this->max_torque_mag = 0.0;
      this->max_torque_mag_is_set = false;
    }
  }

  explicit ArmImpedanceCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : root_frame_name(_alloc),
    root_tform_task(_alloc, _init),
    wrist_tform_tool(_alloc, _init),
    task_tform_desired_tool(_alloc, _init),
    feed_forward_wrench_at_tool_in_desired_tool(_alloc, _init),
    diagonal_stiffness_matrix(_alloc, _init),
    diagonal_damping_matrix(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root_frame_name = "";
      this->root_tform_task_is_set = false;
      this->wrist_tform_tool_is_set = false;
      this->task_tform_desired_tool_is_set = false;
      this->feed_forward_wrench_at_tool_in_desired_tool_is_set = false;
      this->diagonal_stiffness_matrix_is_set = false;
      this->diagonal_damping_matrix_is_set = false;
      this->max_force_mag = 0.0;
      this->max_force_mag_is_set = false;
      this->max_torque_mag = 0.0;
      this->max_torque_mag_is_set = false;
    }
  }

  // field types and members
  using _root_frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _root_frame_name_type root_frame_name;
  using _root_tform_task_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _root_tform_task_type root_tform_task;
  using _root_tform_task_is_set_type =
    bool;
  _root_tform_task_is_set_type root_tform_task_is_set;
  using _wrist_tform_tool_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _wrist_tform_tool_type wrist_tform_tool;
  using _wrist_tform_tool_is_set_type =
    bool;
  _wrist_tform_tool_is_set_type wrist_tform_tool_is_set;
  using _task_tform_desired_tool_type =
    bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator>;
  _task_tform_desired_tool_type task_tform_desired_tool;
  using _task_tform_desired_tool_is_set_type =
    bool;
  _task_tform_desired_tool_is_set_type task_tform_desired_tool_is_set;
  using _feed_forward_wrench_at_tool_in_desired_tool_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _feed_forward_wrench_at_tool_in_desired_tool_type feed_forward_wrench_at_tool_in_desired_tool;
  using _feed_forward_wrench_at_tool_in_desired_tool_is_set_type =
    bool;
  _feed_forward_wrench_at_tool_in_desired_tool_is_set_type feed_forward_wrench_at_tool_in_desired_tool_is_set;
  using _diagonal_stiffness_matrix_type =
    bosdyn_msgs::msg::Vector_<ContainerAllocator>;
  _diagonal_stiffness_matrix_type diagonal_stiffness_matrix;
  using _diagonal_stiffness_matrix_is_set_type =
    bool;
  _diagonal_stiffness_matrix_is_set_type diagonal_stiffness_matrix_is_set;
  using _diagonal_damping_matrix_type =
    bosdyn_msgs::msg::Vector_<ContainerAllocator>;
  _diagonal_damping_matrix_type diagonal_damping_matrix;
  using _diagonal_damping_matrix_is_set_type =
    bool;
  _diagonal_damping_matrix_is_set_type diagonal_damping_matrix_is_set;
  using _max_force_mag_type =
    double;
  _max_force_mag_type max_force_mag;
  using _max_force_mag_is_set_type =
    bool;
  _max_force_mag_is_set_type max_force_mag_is_set;
  using _max_torque_mag_type =
    double;
  _max_torque_mag_type max_torque_mag;
  using _max_torque_mag_is_set_type =
    bool;
  _max_torque_mag_is_set_type max_torque_mag_is_set;

  // setters for named parameter idiom
  Type & set__root_frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->root_frame_name = _arg;
    return *this;
  }
  Type & set__root_tform_task(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->root_tform_task = _arg;
    return *this;
  }
  Type & set__root_tform_task_is_set(
    const bool & _arg)
  {
    this->root_tform_task_is_set = _arg;
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
  Type & set__task_tform_desired_tool(
    const bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator> & _arg)
  {
    this->task_tform_desired_tool = _arg;
    return *this;
  }
  Type & set__task_tform_desired_tool_is_set(
    const bool & _arg)
  {
    this->task_tform_desired_tool_is_set = _arg;
    return *this;
  }
  Type & set__feed_forward_wrench_at_tool_in_desired_tool(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->feed_forward_wrench_at_tool_in_desired_tool = _arg;
    return *this;
  }
  Type & set__feed_forward_wrench_at_tool_in_desired_tool_is_set(
    const bool & _arg)
  {
    this->feed_forward_wrench_at_tool_in_desired_tool_is_set = _arg;
    return *this;
  }
  Type & set__diagonal_stiffness_matrix(
    const bosdyn_msgs::msg::Vector_<ContainerAllocator> & _arg)
  {
    this->diagonal_stiffness_matrix = _arg;
    return *this;
  }
  Type & set__diagonal_stiffness_matrix_is_set(
    const bool & _arg)
  {
    this->diagonal_stiffness_matrix_is_set = _arg;
    return *this;
  }
  Type & set__diagonal_damping_matrix(
    const bosdyn_msgs::msg::Vector_<ContainerAllocator> & _arg)
  {
    this->diagonal_damping_matrix = _arg;
    return *this;
  }
  Type & set__diagonal_damping_matrix_is_set(
    const bool & _arg)
  {
    this->diagonal_damping_matrix_is_set = _arg;
    return *this;
  }
  Type & set__max_force_mag(
    const double & _arg)
  {
    this->max_force_mag = _arg;
    return *this;
  }
  Type & set__max_force_mag_is_set(
    const bool & _arg)
  {
    this->max_force_mag_is_set = _arg;
    return *this;
  }
  Type & set__max_torque_mag(
    const double & _arg)
  {
    this->max_torque_mag = _arg;
    return *this;
  }
  Type & set__max_torque_mag_is_set(
    const bool & _arg)
  {
    this->max_torque_mag_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmImpedanceCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmImpedanceCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ArmImpedanceCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmImpedanceCommandRequest_ & other) const
  {
    if (this->root_frame_name != other.root_frame_name) {
      return false;
    }
    if (this->root_tform_task != other.root_tform_task) {
      return false;
    }
    if (this->root_tform_task_is_set != other.root_tform_task_is_set) {
      return false;
    }
    if (this->wrist_tform_tool != other.wrist_tform_tool) {
      return false;
    }
    if (this->wrist_tform_tool_is_set != other.wrist_tform_tool_is_set) {
      return false;
    }
    if (this->task_tform_desired_tool != other.task_tform_desired_tool) {
      return false;
    }
    if (this->task_tform_desired_tool_is_set != other.task_tform_desired_tool_is_set) {
      return false;
    }
    if (this->feed_forward_wrench_at_tool_in_desired_tool != other.feed_forward_wrench_at_tool_in_desired_tool) {
      return false;
    }
    if (this->feed_forward_wrench_at_tool_in_desired_tool_is_set != other.feed_forward_wrench_at_tool_in_desired_tool_is_set) {
      return false;
    }
    if (this->diagonal_stiffness_matrix != other.diagonal_stiffness_matrix) {
      return false;
    }
    if (this->diagonal_stiffness_matrix_is_set != other.diagonal_stiffness_matrix_is_set) {
      return false;
    }
    if (this->diagonal_damping_matrix != other.diagonal_damping_matrix) {
      return false;
    }
    if (this->diagonal_damping_matrix_is_set != other.diagonal_damping_matrix_is_set) {
      return false;
    }
    if (this->max_force_mag != other.max_force_mag) {
      return false;
    }
    if (this->max_force_mag_is_set != other.max_force_mag_is_set) {
      return false;
    }
    if (this->max_torque_mag != other.max_torque_mag) {
      return false;
    }
    if (this->max_torque_mag_is_set != other.max_torque_mag_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmImpedanceCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmImpedanceCommandRequest_

// alias to use template instance with default allocator
using ArmImpedanceCommandRequest =
  bosdyn_msgs::msg::ArmImpedanceCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_REQUEST__STRUCT_HPP_
