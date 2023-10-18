// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'init_wrench_direction_in_frame_name'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"
// Member 'task_speed'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_speed__struct.hpp"
// Member 'task_type'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_task_type__struct.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'control_mode'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_control_mode__struct.hpp"
// Member 'task_target_position'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_target_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstrainedManipulationCommandRequest_
{
  using Type = ConstrainedManipulationCommandRequest_<ContainerAllocator>;

  explicit ConstrainedManipulationCommandRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : init_wrench_direction_in_frame_name(_init),
    task_speed(_init),
    task_type(_init),
    end_time(_init),
    control_mode(_init),
    task_target_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->init_wrench_direction_in_frame_name_is_set = false;
      this->force_limit = 0.0;
      this->force_limit_is_set = false;
      this->torque_limit = 0.0;
      this->torque_limit_is_set = false;
      this->end_time_is_set = false;
      this->enable_robot_locomotion = false;
      this->enable_robot_locomotion_is_set = false;
      this->accel_limit = 0.0;
      this->accel_limit_is_set = false;
      this->reset_estimator = false;
      this->reset_estimator_is_set = false;
    }
  }

  explicit ConstrainedManipulationCommandRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_name(_alloc),
    init_wrench_direction_in_frame_name(_alloc, _init),
    task_speed(_alloc, _init),
    task_type(_alloc, _init),
    end_time(_alloc, _init),
    control_mode(_alloc, _init),
    task_target_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_name = "";
      this->init_wrench_direction_in_frame_name_is_set = false;
      this->force_limit = 0.0;
      this->force_limit_is_set = false;
      this->torque_limit = 0.0;
      this->torque_limit_is_set = false;
      this->end_time_is_set = false;
      this->enable_robot_locomotion = false;
      this->enable_robot_locomotion_is_set = false;
      this->accel_limit = 0.0;
      this->accel_limit_is_set = false;
      this->reset_estimator = false;
      this->reset_estimator_is_set = false;
    }
  }

  // field types and members
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;
  using _init_wrench_direction_in_frame_name_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _init_wrench_direction_in_frame_name_type init_wrench_direction_in_frame_name;
  using _init_wrench_direction_in_frame_name_is_set_type =
    bool;
  _init_wrench_direction_in_frame_name_is_set_type init_wrench_direction_in_frame_name_is_set;
  using _task_speed_type =
    bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator>;
  _task_speed_type task_speed;
  using _force_limit_type =
    double;
  _force_limit_type force_limit;
  using _force_limit_is_set_type =
    bool;
  _force_limit_is_set_type force_limit_is_set;
  using _torque_limit_type =
    double;
  _torque_limit_type torque_limit;
  using _torque_limit_is_set_type =
    bool;
  _torque_limit_is_set_type torque_limit_is_set;
  using _task_type_type =
    bosdyn_msgs::msg::ConstrainedManipulationCommandRequestTaskType_<ContainerAllocator>;
  _task_type_type task_type;
  using _end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_time_type end_time;
  using _end_time_is_set_type =
    bool;
  _end_time_is_set_type end_time_is_set;
  using _enable_robot_locomotion_type =
    bool;
  _enable_robot_locomotion_type enable_robot_locomotion;
  using _enable_robot_locomotion_is_set_type =
    bool;
  _enable_robot_locomotion_is_set_type enable_robot_locomotion_is_set;
  using _control_mode_type =
    bosdyn_msgs::msg::ConstrainedManipulationCommandRequestControlMode_<ContainerAllocator>;
  _control_mode_type control_mode;
  using _task_target_position_type =
    bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator>;
  _task_target_position_type task_target_position;
  using _accel_limit_type =
    double;
  _accel_limit_type accel_limit;
  using _accel_limit_is_set_type =
    bool;
  _accel_limit_is_set_type accel_limit_is_set;
  using _reset_estimator_type =
    bool;
  _reset_estimator_type reset_estimator;
  using _reset_estimator_is_set_type =
    bool;
  _reset_estimator_is_set_type reset_estimator_is_set;

  // setters for named parameter idiom
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }
  Type & set__init_wrench_direction_in_frame_name(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->init_wrench_direction_in_frame_name = _arg;
    return *this;
  }
  Type & set__init_wrench_direction_in_frame_name_is_set(
    const bool & _arg)
  {
    this->init_wrench_direction_in_frame_name_is_set = _arg;
    return *this;
  }
  Type & set__task_speed(
    const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskSpeed_<ContainerAllocator> & _arg)
  {
    this->task_speed = _arg;
    return *this;
  }
  Type & set__force_limit(
    const double & _arg)
  {
    this->force_limit = _arg;
    return *this;
  }
  Type & set__force_limit_is_set(
    const bool & _arg)
  {
    this->force_limit_is_set = _arg;
    return *this;
  }
  Type & set__torque_limit(
    const double & _arg)
  {
    this->torque_limit = _arg;
    return *this;
  }
  Type & set__torque_limit_is_set(
    const bool & _arg)
  {
    this->torque_limit_is_set = _arg;
    return *this;
  }
  Type & set__task_type(
    const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestTaskType_<ContainerAllocator> & _arg)
  {
    this->task_type = _arg;
    return *this;
  }
  Type & set__end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__end_time_is_set(
    const bool & _arg)
  {
    this->end_time_is_set = _arg;
    return *this;
  }
  Type & set__enable_robot_locomotion(
    const bool & _arg)
  {
    this->enable_robot_locomotion = _arg;
    return *this;
  }
  Type & set__enable_robot_locomotion_is_set(
    const bool & _arg)
  {
    this->enable_robot_locomotion_is_set = _arg;
    return *this;
  }
  Type & set__control_mode(
    const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestControlMode_<ContainerAllocator> & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__task_target_position(
    const bosdyn_msgs::msg::ConstrainedManipulationCommandRequestOneOfTaskTargetPosition_<ContainerAllocator> & _arg)
  {
    this->task_target_position = _arg;
    return *this;
  }
  Type & set__accel_limit(
    const double & _arg)
  {
    this->accel_limit = _arg;
    return *this;
  }
  Type & set__accel_limit_is_set(
    const bool & _arg)
  {
    this->accel_limit_is_set = _arg;
    return *this;
  }
  Type & set__reset_estimator(
    const bool & _arg)
  {
    this->reset_estimator = _arg;
    return *this;
  }
  Type & set__reset_estimator_is_set(
    const bool & _arg)
  {
    this->reset_estimator_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ConstrainedManipulationCommandRequest
    std::shared_ptr<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstrainedManipulationCommandRequest_ & other) const
  {
    if (this->frame_name != other.frame_name) {
      return false;
    }
    if (this->init_wrench_direction_in_frame_name != other.init_wrench_direction_in_frame_name) {
      return false;
    }
    if (this->init_wrench_direction_in_frame_name_is_set != other.init_wrench_direction_in_frame_name_is_set) {
      return false;
    }
    if (this->task_speed != other.task_speed) {
      return false;
    }
    if (this->force_limit != other.force_limit) {
      return false;
    }
    if (this->force_limit_is_set != other.force_limit_is_set) {
      return false;
    }
    if (this->torque_limit != other.torque_limit) {
      return false;
    }
    if (this->torque_limit_is_set != other.torque_limit_is_set) {
      return false;
    }
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->end_time_is_set != other.end_time_is_set) {
      return false;
    }
    if (this->enable_robot_locomotion != other.enable_robot_locomotion) {
      return false;
    }
    if (this->enable_robot_locomotion_is_set != other.enable_robot_locomotion_is_set) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->task_target_position != other.task_target_position) {
      return false;
    }
    if (this->accel_limit != other.accel_limit) {
      return false;
    }
    if (this->accel_limit_is_set != other.accel_limit_is_set) {
      return false;
    }
    if (this->reset_estimator != other.reset_estimator) {
      return false;
    }
    if (this->reset_estimator_is_set != other.reset_estimator_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstrainedManipulationCommandRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstrainedManipulationCommandRequest_

// alias to use template instance with default allocator
using ConstrainedManipulationCommandRequest =
  bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST__STRUCT_HPP_
