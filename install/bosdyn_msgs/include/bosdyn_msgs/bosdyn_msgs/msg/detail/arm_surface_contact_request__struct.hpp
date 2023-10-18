// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'wrist_tform_tool'
// Member 'root_tform_task'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'pose_trajectory_in_task'
#include "bosdyn_msgs/msg/detail/se3_trajectory__struct.hpp"
// Member 'joint_configuration'
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_one_of_joint_configuration__struct.hpp"
// Member 'x_axis'
// Member 'y_axis'
// Member 'z_axis'
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_axis_mode__struct.hpp"
// Member 'press_force_percentage'
// Member 'bias_force_ewrt_body'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'xy_admittance'
// Member 'z_admittance'
// Member 'xy_to_z_cross_term_admittance'
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_admittance_setting__struct.hpp"
// Member 'gripper_command'
#include "bosdyn_msgs/msg/detail/claw_gripper_command_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmSurfaceContactRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmSurfaceContactRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmSurfaceContactRequest_
{
  using Type = ArmSurfaceContactRequest_<ContainerAllocator>;

  explicit ArmSurfaceContactRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wrist_tform_tool(_init),
    root_tform_task(_init),
    pose_trajectory_in_task(_init),
    joint_configuration(_init),
    x_axis(_init),
    y_axis(_init),
    z_axis(_init),
    press_force_percentage(_init),
    xy_admittance(_init),
    z_admittance(_init),
    xy_to_z_cross_term_admittance(_init),
    bias_force_ewrt_body(_init),
    gripper_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root_frame_name = "";
      this->wrist_tform_tool_is_set = false;
      this->root_tform_task_is_set = false;
      this->pose_trajectory_in_task_is_set = false;
      this->maximum_acceleration = 0.0;
      this->maximum_acceleration_is_set = false;
      this->max_linear_velocity = 0.0;
      this->max_linear_velocity_is_set = false;
      this->max_angular_velocity = 0.0;
      this->max_angular_velocity_is_set = false;
      this->max_pos_tracking_error = 0.0;
      this->max_pos_tracking_error_is_set = false;
      this->max_rot_tracking_error = 0.0;
      this->max_rot_tracking_error_is_set = false;
      this->press_force_percentage_is_set = false;
      this->bias_force_ewrt_body_is_set = false;
      this->gripper_command_is_set = false;
      this->is_robot_following_hand = false;
    }
  }

  explicit ArmSurfaceContactRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : root_frame_name(_alloc),
    wrist_tform_tool(_alloc, _init),
    root_tform_task(_alloc, _init),
    pose_trajectory_in_task(_alloc, _init),
    joint_configuration(_alloc, _init),
    x_axis(_alloc, _init),
    y_axis(_alloc, _init),
    z_axis(_alloc, _init),
    press_force_percentage(_alloc, _init),
    xy_admittance(_alloc, _init),
    z_admittance(_alloc, _init),
    xy_to_z_cross_term_admittance(_alloc, _init),
    bias_force_ewrt_body(_alloc, _init),
    gripper_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root_frame_name = "";
      this->wrist_tform_tool_is_set = false;
      this->root_tform_task_is_set = false;
      this->pose_trajectory_in_task_is_set = false;
      this->maximum_acceleration = 0.0;
      this->maximum_acceleration_is_set = false;
      this->max_linear_velocity = 0.0;
      this->max_linear_velocity_is_set = false;
      this->max_angular_velocity = 0.0;
      this->max_angular_velocity_is_set = false;
      this->max_pos_tracking_error = 0.0;
      this->max_pos_tracking_error_is_set = false;
      this->max_rot_tracking_error = 0.0;
      this->max_rot_tracking_error_is_set = false;
      this->press_force_percentage_is_set = false;
      this->bias_force_ewrt_body_is_set = false;
      this->gripper_command_is_set = false;
      this->is_robot_following_hand = false;
    }
  }

  // field types and members
  using _root_frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _root_frame_name_type root_frame_name;
  using _wrist_tform_tool_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _wrist_tform_tool_type wrist_tform_tool;
  using _wrist_tform_tool_is_set_type =
    bool;
  _wrist_tform_tool_is_set_type wrist_tform_tool_is_set;
  using _root_tform_task_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _root_tform_task_type root_tform_task;
  using _root_tform_task_is_set_type =
    bool;
  _root_tform_task_is_set_type root_tform_task_is_set;
  using _pose_trajectory_in_task_type =
    bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator>;
  _pose_trajectory_in_task_type pose_trajectory_in_task;
  using _pose_trajectory_in_task_is_set_type =
    bool;
  _pose_trajectory_in_task_is_set_type pose_trajectory_in_task_is_set;
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
  using _max_pos_tracking_error_type =
    double;
  _max_pos_tracking_error_type max_pos_tracking_error;
  using _max_pos_tracking_error_is_set_type =
    bool;
  _max_pos_tracking_error_is_set_type max_pos_tracking_error_is_set;
  using _max_rot_tracking_error_type =
    double;
  _max_rot_tracking_error_type max_rot_tracking_error;
  using _max_rot_tracking_error_is_set_type =
    bool;
  _max_rot_tracking_error_is_set_type max_rot_tracking_error_is_set;
  using _joint_configuration_type =
    bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration_<ContainerAllocator>;
  _joint_configuration_type joint_configuration;
  using _x_axis_type =
    bosdyn_msgs::msg::ArmSurfaceContactRequestAxisMode_<ContainerAllocator>;
  _x_axis_type x_axis;
  using _y_axis_type =
    bosdyn_msgs::msg::ArmSurfaceContactRequestAxisMode_<ContainerAllocator>;
  _y_axis_type y_axis;
  using _z_axis_type =
    bosdyn_msgs::msg::ArmSurfaceContactRequestAxisMode_<ContainerAllocator>;
  _z_axis_type z_axis;
  using _press_force_percentage_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _press_force_percentage_type press_force_percentage;
  using _press_force_percentage_is_set_type =
    bool;
  _press_force_percentage_is_set_type press_force_percentage_is_set;
  using _xy_admittance_type =
    bosdyn_msgs::msg::ArmSurfaceContactRequestAdmittanceSetting_<ContainerAllocator>;
  _xy_admittance_type xy_admittance;
  using _z_admittance_type =
    bosdyn_msgs::msg::ArmSurfaceContactRequestAdmittanceSetting_<ContainerAllocator>;
  _z_admittance_type z_admittance;
  using _xy_to_z_cross_term_admittance_type =
    bosdyn_msgs::msg::ArmSurfaceContactRequestAdmittanceSetting_<ContainerAllocator>;
  _xy_to_z_cross_term_admittance_type xy_to_z_cross_term_admittance;
  using _bias_force_ewrt_body_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _bias_force_ewrt_body_type bias_force_ewrt_body;
  using _bias_force_ewrt_body_is_set_type =
    bool;
  _bias_force_ewrt_body_is_set_type bias_force_ewrt_body_is_set;
  using _gripper_command_type =
    bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator>;
  _gripper_command_type gripper_command;
  using _gripper_command_is_set_type =
    bool;
  _gripper_command_is_set_type gripper_command_is_set;
  using _is_robot_following_hand_type =
    bool;
  _is_robot_following_hand_type is_robot_following_hand;

  // setters for named parameter idiom
  Type & set__root_frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->root_frame_name = _arg;
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
  Type & set__pose_trajectory_in_task(
    const bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator> & _arg)
  {
    this->pose_trajectory_in_task = _arg;
    return *this;
  }
  Type & set__pose_trajectory_in_task_is_set(
    const bool & _arg)
  {
    this->pose_trajectory_in_task_is_set = _arg;
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
  Type & set__max_pos_tracking_error(
    const double & _arg)
  {
    this->max_pos_tracking_error = _arg;
    return *this;
  }
  Type & set__max_pos_tracking_error_is_set(
    const bool & _arg)
  {
    this->max_pos_tracking_error_is_set = _arg;
    return *this;
  }
  Type & set__max_rot_tracking_error(
    const double & _arg)
  {
    this->max_rot_tracking_error = _arg;
    return *this;
  }
  Type & set__max_rot_tracking_error_is_set(
    const bool & _arg)
  {
    this->max_rot_tracking_error_is_set = _arg;
    return *this;
  }
  Type & set__joint_configuration(
    const bosdyn_msgs::msg::ArmSurfaceContactRequestOneOfJointConfiguration_<ContainerAllocator> & _arg)
  {
    this->joint_configuration = _arg;
    return *this;
  }
  Type & set__x_axis(
    const bosdyn_msgs::msg::ArmSurfaceContactRequestAxisMode_<ContainerAllocator> & _arg)
  {
    this->x_axis = _arg;
    return *this;
  }
  Type & set__y_axis(
    const bosdyn_msgs::msg::ArmSurfaceContactRequestAxisMode_<ContainerAllocator> & _arg)
  {
    this->y_axis = _arg;
    return *this;
  }
  Type & set__z_axis(
    const bosdyn_msgs::msg::ArmSurfaceContactRequestAxisMode_<ContainerAllocator> & _arg)
  {
    this->z_axis = _arg;
    return *this;
  }
  Type & set__press_force_percentage(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->press_force_percentage = _arg;
    return *this;
  }
  Type & set__press_force_percentage_is_set(
    const bool & _arg)
  {
    this->press_force_percentage_is_set = _arg;
    return *this;
  }
  Type & set__xy_admittance(
    const bosdyn_msgs::msg::ArmSurfaceContactRequestAdmittanceSetting_<ContainerAllocator> & _arg)
  {
    this->xy_admittance = _arg;
    return *this;
  }
  Type & set__z_admittance(
    const bosdyn_msgs::msg::ArmSurfaceContactRequestAdmittanceSetting_<ContainerAllocator> & _arg)
  {
    this->z_admittance = _arg;
    return *this;
  }
  Type & set__xy_to_z_cross_term_admittance(
    const bosdyn_msgs::msg::ArmSurfaceContactRequestAdmittanceSetting_<ContainerAllocator> & _arg)
  {
    this->xy_to_z_cross_term_admittance = _arg;
    return *this;
  }
  Type & set__bias_force_ewrt_body(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->bias_force_ewrt_body = _arg;
    return *this;
  }
  Type & set__bias_force_ewrt_body_is_set(
    const bool & _arg)
  {
    this->bias_force_ewrt_body_is_set = _arg;
    return *this;
  }
  Type & set__gripper_command(
    const bosdyn_msgs::msg::ClawGripperCommandRequest_<ContainerAllocator> & _arg)
  {
    this->gripper_command = _arg;
    return *this;
  }
  Type & set__gripper_command_is_set(
    const bool & _arg)
  {
    this->gripper_command_is_set = _arg;
    return *this;
  }
  Type & set__is_robot_following_hand(
    const bool & _arg)
  {
    this->is_robot_following_hand = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmSurfaceContactRequest
    std::shared_ptr<bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmSurfaceContactRequest
    std::shared_ptr<bosdyn_msgs::msg::ArmSurfaceContactRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmSurfaceContactRequest_ & other) const
  {
    if (this->root_frame_name != other.root_frame_name) {
      return false;
    }
    if (this->wrist_tform_tool != other.wrist_tform_tool) {
      return false;
    }
    if (this->wrist_tform_tool_is_set != other.wrist_tform_tool_is_set) {
      return false;
    }
    if (this->root_tform_task != other.root_tform_task) {
      return false;
    }
    if (this->root_tform_task_is_set != other.root_tform_task_is_set) {
      return false;
    }
    if (this->pose_trajectory_in_task != other.pose_trajectory_in_task) {
      return false;
    }
    if (this->pose_trajectory_in_task_is_set != other.pose_trajectory_in_task_is_set) {
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
    if (this->max_pos_tracking_error != other.max_pos_tracking_error) {
      return false;
    }
    if (this->max_pos_tracking_error_is_set != other.max_pos_tracking_error_is_set) {
      return false;
    }
    if (this->max_rot_tracking_error != other.max_rot_tracking_error) {
      return false;
    }
    if (this->max_rot_tracking_error_is_set != other.max_rot_tracking_error_is_set) {
      return false;
    }
    if (this->joint_configuration != other.joint_configuration) {
      return false;
    }
    if (this->x_axis != other.x_axis) {
      return false;
    }
    if (this->y_axis != other.y_axis) {
      return false;
    }
    if (this->z_axis != other.z_axis) {
      return false;
    }
    if (this->press_force_percentage != other.press_force_percentage) {
      return false;
    }
    if (this->press_force_percentage_is_set != other.press_force_percentage_is_set) {
      return false;
    }
    if (this->xy_admittance != other.xy_admittance) {
      return false;
    }
    if (this->z_admittance != other.z_admittance) {
      return false;
    }
    if (this->xy_to_z_cross_term_admittance != other.xy_to_z_cross_term_admittance) {
      return false;
    }
    if (this->bias_force_ewrt_body != other.bias_force_ewrt_body) {
      return false;
    }
    if (this->bias_force_ewrt_body_is_set != other.bias_force_ewrt_body_is_set) {
      return false;
    }
    if (this->gripper_command != other.gripper_command) {
      return false;
    }
    if (this->gripper_command_is_set != other.gripper_command_is_set) {
      return false;
    }
    if (this->is_robot_following_hand != other.is_robot_following_hand) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmSurfaceContactRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmSurfaceContactRequest_

// alias to use template instance with default allocator
using ArmSurfaceContactRequest =
  bosdyn_msgs::msg::ArmSurfaceContactRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_REQUEST__STRUCT_HPP_
