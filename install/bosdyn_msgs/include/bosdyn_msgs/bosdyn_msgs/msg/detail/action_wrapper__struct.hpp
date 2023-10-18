// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapper.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robot_body_sit'
#include "bosdyn_msgs/msg/detail/action_wrapper_robot_body_sit__struct.hpp"
// Member 'robot_body_pose'
#include "bosdyn_msgs/msg/detail/action_wrapper_robot_body_pose__struct.hpp"
// Member 'spot_cam_led'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_led__struct.hpp"
// Member 'spot_cam_ptz'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_ptz__struct.hpp"
// Member 'arm_sensor_pointing'
#include "bosdyn_msgs/msg/detail/action_wrapper_arm_sensor_pointing__struct.hpp"
// Member 'spot_cam_alignment'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__struct.hpp"
// Member 'gripper_camera_params'
#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_camera_params__struct.hpp"
// Member 'gripper_command'
#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapper __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapper __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionWrapper_
{
  using Type = ActionWrapper_<ContainerAllocator>;

  explicit ActionWrapper_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_body_sit(_init),
    robot_body_pose(_init),
    spot_cam_led(_init),
    spot_cam_ptz(_init),
    arm_sensor_pointing(_init),
    spot_cam_alignment(_init),
    gripper_camera_params(_init),
    gripper_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_body_sit_is_set = false;
      this->robot_body_pose_is_set = false;
      this->spot_cam_led_is_set = false;
      this->spot_cam_ptz_is_set = false;
      this->arm_sensor_pointing_is_set = false;
      this->spot_cam_alignment_is_set = false;
      this->gripper_camera_params_is_set = false;
      this->gripper_command_is_set = false;
    }
  }

  explicit ActionWrapper_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_body_sit(_alloc, _init),
    robot_body_pose(_alloc, _init),
    spot_cam_led(_alloc, _init),
    spot_cam_ptz(_alloc, _init),
    arm_sensor_pointing(_alloc, _init),
    spot_cam_alignment(_alloc, _init),
    gripper_camera_params(_alloc, _init),
    gripper_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_body_sit_is_set = false;
      this->robot_body_pose_is_set = false;
      this->spot_cam_led_is_set = false;
      this->spot_cam_ptz_is_set = false;
      this->arm_sensor_pointing_is_set = false;
      this->spot_cam_alignment_is_set = false;
      this->gripper_camera_params_is_set = false;
      this->gripper_command_is_set = false;
    }
  }

  // field types and members
  using _robot_body_sit_type =
    bosdyn_msgs::msg::ActionWrapperRobotBodySit_<ContainerAllocator>;
  _robot_body_sit_type robot_body_sit;
  using _robot_body_sit_is_set_type =
    bool;
  _robot_body_sit_is_set_type robot_body_sit_is_set;
  using _robot_body_pose_type =
    bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator>;
  _robot_body_pose_type robot_body_pose;
  using _robot_body_pose_is_set_type =
    bool;
  _robot_body_pose_is_set_type robot_body_pose_is_set;
  using _spot_cam_led_type =
    bosdyn_msgs::msg::ActionWrapperSpotCamLed_<ContainerAllocator>;
  _spot_cam_led_type spot_cam_led;
  using _spot_cam_led_is_set_type =
    bool;
  _spot_cam_led_is_set_type spot_cam_led_is_set;
  using _spot_cam_ptz_type =
    bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator>;
  _spot_cam_ptz_type spot_cam_ptz;
  using _spot_cam_ptz_is_set_type =
    bool;
  _spot_cam_ptz_is_set_type spot_cam_ptz_is_set;
  using _arm_sensor_pointing_type =
    bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator>;
  _arm_sensor_pointing_type arm_sensor_pointing;
  using _arm_sensor_pointing_is_set_type =
    bool;
  _arm_sensor_pointing_is_set_type arm_sensor_pointing_is_set;
  using _spot_cam_alignment_type =
    bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator>;
  _spot_cam_alignment_type spot_cam_alignment;
  using _spot_cam_alignment_is_set_type =
    bool;
  _spot_cam_alignment_is_set_type spot_cam_alignment_is_set;
  using _gripper_camera_params_type =
    bosdyn_msgs::msg::ActionWrapperGripperCameraParams_<ContainerAllocator>;
  _gripper_camera_params_type gripper_camera_params;
  using _gripper_camera_params_is_set_type =
    bool;
  _gripper_camera_params_is_set_type gripper_camera_params_is_set;
  using _gripper_command_type =
    bosdyn_msgs::msg::ActionWrapperGripperCommand_<ContainerAllocator>;
  _gripper_command_type gripper_command;
  using _gripper_command_is_set_type =
    bool;
  _gripper_command_is_set_type gripper_command_is_set;

  // setters for named parameter idiom
  Type & set__robot_body_sit(
    const bosdyn_msgs::msg::ActionWrapperRobotBodySit_<ContainerAllocator> & _arg)
  {
    this->robot_body_sit = _arg;
    return *this;
  }
  Type & set__robot_body_sit_is_set(
    const bool & _arg)
  {
    this->robot_body_sit_is_set = _arg;
    return *this;
  }
  Type & set__robot_body_pose(
    const bosdyn_msgs::msg::ActionWrapperRobotBodyPose_<ContainerAllocator> & _arg)
  {
    this->robot_body_pose = _arg;
    return *this;
  }
  Type & set__robot_body_pose_is_set(
    const bool & _arg)
  {
    this->robot_body_pose_is_set = _arg;
    return *this;
  }
  Type & set__spot_cam_led(
    const bosdyn_msgs::msg::ActionWrapperSpotCamLed_<ContainerAllocator> & _arg)
  {
    this->spot_cam_led = _arg;
    return *this;
  }
  Type & set__spot_cam_led_is_set(
    const bool & _arg)
  {
    this->spot_cam_led_is_set = _arg;
    return *this;
  }
  Type & set__spot_cam_ptz(
    const bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator> & _arg)
  {
    this->spot_cam_ptz = _arg;
    return *this;
  }
  Type & set__spot_cam_ptz_is_set(
    const bool & _arg)
  {
    this->spot_cam_ptz_is_set = _arg;
    return *this;
  }
  Type & set__arm_sensor_pointing(
    const bosdyn_msgs::msg::ActionWrapperArmSensorPointing_<ContainerAllocator> & _arg)
  {
    this->arm_sensor_pointing = _arg;
    return *this;
  }
  Type & set__arm_sensor_pointing_is_set(
    const bool & _arg)
  {
    this->arm_sensor_pointing_is_set = _arg;
    return *this;
  }
  Type & set__spot_cam_alignment(
    const bosdyn_msgs::msg::ActionWrapperSpotCamAlignment_<ContainerAllocator> & _arg)
  {
    this->spot_cam_alignment = _arg;
    return *this;
  }
  Type & set__spot_cam_alignment_is_set(
    const bool & _arg)
  {
    this->spot_cam_alignment_is_set = _arg;
    return *this;
  }
  Type & set__gripper_camera_params(
    const bosdyn_msgs::msg::ActionWrapperGripperCameraParams_<ContainerAllocator> & _arg)
  {
    this->gripper_camera_params = _arg;
    return *this;
  }
  Type & set__gripper_camera_params_is_set(
    const bool & _arg)
  {
    this->gripper_camera_params_is_set = _arg;
    return *this;
  }
  Type & set__gripper_command(
    const bosdyn_msgs::msg::ActionWrapperGripperCommand_<ContainerAllocator> & _arg)
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

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapper
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapper
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapper_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionWrapper_ & other) const
  {
    if (this->robot_body_sit != other.robot_body_sit) {
      return false;
    }
    if (this->robot_body_sit_is_set != other.robot_body_sit_is_set) {
      return false;
    }
    if (this->robot_body_pose != other.robot_body_pose) {
      return false;
    }
    if (this->robot_body_pose_is_set != other.robot_body_pose_is_set) {
      return false;
    }
    if (this->spot_cam_led != other.spot_cam_led) {
      return false;
    }
    if (this->spot_cam_led_is_set != other.spot_cam_led_is_set) {
      return false;
    }
    if (this->spot_cam_ptz != other.spot_cam_ptz) {
      return false;
    }
    if (this->spot_cam_ptz_is_set != other.spot_cam_ptz_is_set) {
      return false;
    }
    if (this->arm_sensor_pointing != other.arm_sensor_pointing) {
      return false;
    }
    if (this->arm_sensor_pointing_is_set != other.arm_sensor_pointing_is_set) {
      return false;
    }
    if (this->spot_cam_alignment != other.spot_cam_alignment) {
      return false;
    }
    if (this->spot_cam_alignment_is_set != other.spot_cam_alignment_is_set) {
      return false;
    }
    if (this->gripper_camera_params != other.gripper_camera_params) {
      return false;
    }
    if (this->gripper_camera_params_is_set != other.gripper_camera_params_is_set) {
      return false;
    }
    if (this->gripper_command != other.gripper_command) {
      return false;
    }
    if (this->gripper_command_is_set != other.gripper_command_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionWrapper_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionWrapper_

// alias to use template instance with default allocator
using ActionWrapper =
  bosdyn_msgs::msg::ActionWrapper_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER__STRUCT_HPP_
