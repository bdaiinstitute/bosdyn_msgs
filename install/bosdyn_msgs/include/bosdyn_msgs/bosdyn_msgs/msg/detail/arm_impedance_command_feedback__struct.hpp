// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ArmImpedanceCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback_status__struct.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__struct.hpp"
// Member 'commanded_wrench_from_stiffness_at_tool_in_desired_tool'
// Member 'commanded_wrench_from_damping_at_tool_in_desired_tool'
// Member 'commanded_wrench_from_feed_forward_at_tool_in_desired_tool'
// Member 'total_commanded_wrench_at_tool_in_desired_tool'
// Member 'total_measured_wrench_at_tool_in_desired_tool'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ArmImpedanceCommandFeedback __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ArmImpedanceCommandFeedback __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmImpedanceCommandFeedback_
{
  using Type = ArmImpedanceCommandFeedback_<ContainerAllocator>;

  explicit ArmImpedanceCommandFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    transforms_snapshot(_init),
    commanded_wrench_from_stiffness_at_tool_in_desired_tool(_init),
    commanded_wrench_from_damping_at_tool_in_desired_tool(_init),
    commanded_wrench_from_feed_forward_at_tool_in_desired_tool(_init),
    total_commanded_wrench_at_tool_in_desired_tool(_init),
    total_measured_wrench_at_tool_in_desired_tool(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->transforms_snapshot_is_set = false;
      this->commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set = false;
      this->commanded_wrench_from_damping_at_tool_in_desired_tool_is_set = false;
      this->commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set = false;
      this->total_commanded_wrench_at_tool_in_desired_tool_is_set = false;
      this->total_measured_wrench_at_tool_in_desired_tool_is_set = false;
    }
  }

  explicit ArmImpedanceCommandFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    transforms_snapshot(_alloc, _init),
    commanded_wrench_from_stiffness_at_tool_in_desired_tool(_alloc, _init),
    commanded_wrench_from_damping_at_tool_in_desired_tool(_alloc, _init),
    commanded_wrench_from_feed_forward_at_tool_in_desired_tool(_alloc, _init),
    total_commanded_wrench_at_tool_in_desired_tool(_alloc, _init),
    total_measured_wrench_at_tool_in_desired_tool(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->transforms_snapshot_is_set = false;
      this->commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set = false;
      this->commanded_wrench_from_damping_at_tool_in_desired_tool_is_set = false;
      this->commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set = false;
      this->total_commanded_wrench_at_tool_in_desired_tool_is_set = false;
      this->total_measured_wrench_at_tool_in_desired_tool_is_set = false;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::ArmImpedanceCommandFeedbackStatus_<ContainerAllocator>;
  _status_type status;
  using _transforms_snapshot_type =
    bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator>;
  _transforms_snapshot_type transforms_snapshot;
  using _transforms_snapshot_is_set_type =
    bool;
  _transforms_snapshot_is_set_type transforms_snapshot_is_set;
  using _commanded_wrench_from_stiffness_at_tool_in_desired_tool_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _commanded_wrench_from_stiffness_at_tool_in_desired_tool_type commanded_wrench_from_stiffness_at_tool_in_desired_tool;
  using _commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set_type =
    bool;
  _commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set_type commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set;
  using _commanded_wrench_from_damping_at_tool_in_desired_tool_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _commanded_wrench_from_damping_at_tool_in_desired_tool_type commanded_wrench_from_damping_at_tool_in_desired_tool;
  using _commanded_wrench_from_damping_at_tool_in_desired_tool_is_set_type =
    bool;
  _commanded_wrench_from_damping_at_tool_in_desired_tool_is_set_type commanded_wrench_from_damping_at_tool_in_desired_tool_is_set;
  using _commanded_wrench_from_feed_forward_at_tool_in_desired_tool_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _commanded_wrench_from_feed_forward_at_tool_in_desired_tool_type commanded_wrench_from_feed_forward_at_tool_in_desired_tool;
  using _commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set_type =
    bool;
  _commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set_type commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set;
  using _total_commanded_wrench_at_tool_in_desired_tool_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _total_commanded_wrench_at_tool_in_desired_tool_type total_commanded_wrench_at_tool_in_desired_tool;
  using _total_commanded_wrench_at_tool_in_desired_tool_is_set_type =
    bool;
  _total_commanded_wrench_at_tool_in_desired_tool_is_set_type total_commanded_wrench_at_tool_in_desired_tool_is_set;
  using _total_measured_wrench_at_tool_in_desired_tool_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _total_measured_wrench_at_tool_in_desired_tool_type total_measured_wrench_at_tool_in_desired_tool;
  using _total_measured_wrench_at_tool_in_desired_tool_is_set_type =
    bool;
  _total_measured_wrench_at_tool_in_desired_tool_is_set_type total_measured_wrench_at_tool_in_desired_tool_is_set;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::ArmImpedanceCommandFeedbackStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__transforms_snapshot(
    const bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator> & _arg)
  {
    this->transforms_snapshot = _arg;
    return *this;
  }
  Type & set__transforms_snapshot_is_set(
    const bool & _arg)
  {
    this->transforms_snapshot_is_set = _arg;
    return *this;
  }
  Type & set__commanded_wrench_from_stiffness_at_tool_in_desired_tool(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->commanded_wrench_from_stiffness_at_tool_in_desired_tool = _arg;
    return *this;
  }
  Type & set__commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set(
    const bool & _arg)
  {
    this->commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set = _arg;
    return *this;
  }
  Type & set__commanded_wrench_from_damping_at_tool_in_desired_tool(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->commanded_wrench_from_damping_at_tool_in_desired_tool = _arg;
    return *this;
  }
  Type & set__commanded_wrench_from_damping_at_tool_in_desired_tool_is_set(
    const bool & _arg)
  {
    this->commanded_wrench_from_damping_at_tool_in_desired_tool_is_set = _arg;
    return *this;
  }
  Type & set__commanded_wrench_from_feed_forward_at_tool_in_desired_tool(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->commanded_wrench_from_feed_forward_at_tool_in_desired_tool = _arg;
    return *this;
  }
  Type & set__commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set(
    const bool & _arg)
  {
    this->commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set = _arg;
    return *this;
  }
  Type & set__total_commanded_wrench_at_tool_in_desired_tool(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->total_commanded_wrench_at_tool_in_desired_tool = _arg;
    return *this;
  }
  Type & set__total_commanded_wrench_at_tool_in_desired_tool_is_set(
    const bool & _arg)
  {
    this->total_commanded_wrench_at_tool_in_desired_tool_is_set = _arg;
    return *this;
  }
  Type & set__total_measured_wrench_at_tool_in_desired_tool(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->total_measured_wrench_at_tool_in_desired_tool = _arg;
    return *this;
  }
  Type & set__total_measured_wrench_at_tool_in_desired_tool_is_set(
    const bool & _arg)
  {
    this->total_measured_wrench_at_tool_in_desired_tool_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ArmImpedanceCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ArmImpedanceCommandFeedback
    std::shared_ptr<bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmImpedanceCommandFeedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->transforms_snapshot != other.transforms_snapshot) {
      return false;
    }
    if (this->transforms_snapshot_is_set != other.transforms_snapshot_is_set) {
      return false;
    }
    if (this->commanded_wrench_from_stiffness_at_tool_in_desired_tool != other.commanded_wrench_from_stiffness_at_tool_in_desired_tool) {
      return false;
    }
    if (this->commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set != other.commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set) {
      return false;
    }
    if (this->commanded_wrench_from_damping_at_tool_in_desired_tool != other.commanded_wrench_from_damping_at_tool_in_desired_tool) {
      return false;
    }
    if (this->commanded_wrench_from_damping_at_tool_in_desired_tool_is_set != other.commanded_wrench_from_damping_at_tool_in_desired_tool_is_set) {
      return false;
    }
    if (this->commanded_wrench_from_feed_forward_at_tool_in_desired_tool != other.commanded_wrench_from_feed_forward_at_tool_in_desired_tool) {
      return false;
    }
    if (this->commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set != other.commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set) {
      return false;
    }
    if (this->total_commanded_wrench_at_tool_in_desired_tool != other.total_commanded_wrench_at_tool_in_desired_tool) {
      return false;
    }
    if (this->total_commanded_wrench_at_tool_in_desired_tool_is_set != other.total_commanded_wrench_at_tool_in_desired_tool_is_set) {
      return false;
    }
    if (this->total_measured_wrench_at_tool_in_desired_tool != other.total_measured_wrench_at_tool_in_desired_tool) {
      return false;
    }
    if (this->total_measured_wrench_at_tool_in_desired_tool_is_set != other.total_measured_wrench_at_tool_in_desired_tool_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmImpedanceCommandFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmImpedanceCommandFeedback_

// alias to use template instance with default allocator
using ArmImpedanceCommandFeedback =
  bosdyn_msgs::msg::ArmImpedanceCommandFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK__STRUCT_HPP_
