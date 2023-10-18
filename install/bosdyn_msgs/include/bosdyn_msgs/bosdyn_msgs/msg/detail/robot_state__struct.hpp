// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'power_state'
#include "bosdyn_msgs/msg/detail/power_state__struct.hpp"
// Member 'battery_states'
#include "bosdyn_msgs/msg/detail/battery_state__struct.hpp"
// Member 'comms_states'
#include "bosdyn_msgs/msg/detail/comms_state__struct.hpp"
// Member 'system_fault_state'
#include "bosdyn_msgs/msg/detail/system_fault_state__struct.hpp"
// Member 'estop_states'
#include "bosdyn_msgs/msg/detail/e_stop_state__struct.hpp"
// Member 'kinematic_state'
#include "bosdyn_msgs/msg/detail/kinematic_state__struct.hpp"
// Member 'behavior_fault_state'
#include "bosdyn_msgs/msg/detail/behavior_fault_state__struct.hpp"
// Member 'foot_state'
#include "bosdyn_msgs/msg/detail/foot_state__struct.hpp"
// Member 'manipulator_state'
#include "bosdyn_msgs/msg/detail/manipulator_state__struct.hpp"
// Member 'service_fault_state'
#include "bosdyn_msgs/msg/detail/service_fault_state__struct.hpp"
// Member 'terrain_state'
#include "bosdyn_msgs/msg/detail/terrain_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RobotState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : power_state(_init),
    system_fault_state(_init),
    kinematic_state(_init),
    behavior_fault_state(_init),
    manipulator_state(_init),
    service_fault_state(_init),
    terrain_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power_state_is_set = false;
      this->system_fault_state_is_set = false;
      this->kinematic_state_is_set = false;
      this->behavior_fault_state_is_set = false;
      this->manipulator_state_is_set = false;
      this->service_fault_state_is_set = false;
      this->terrain_state_is_set = false;
    }
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : power_state(_alloc, _init),
    system_fault_state(_alloc, _init),
    kinematic_state(_alloc, _init),
    behavior_fault_state(_alloc, _init),
    manipulator_state(_alloc, _init),
    service_fault_state(_alloc, _init),
    terrain_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power_state_is_set = false;
      this->system_fault_state_is_set = false;
      this->kinematic_state_is_set = false;
      this->behavior_fault_state_is_set = false;
      this->manipulator_state_is_set = false;
      this->service_fault_state_is_set = false;
      this->terrain_state_is_set = false;
    }
  }

  // field types and members
  using _power_state_type =
    bosdyn_msgs::msg::PowerState_<ContainerAllocator>;
  _power_state_type power_state;
  using _power_state_is_set_type =
    bool;
  _power_state_is_set_type power_state_is_set;
  using _battery_states_type =
    std::vector<bosdyn_msgs::msg::BatteryState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BatteryState_<ContainerAllocator>>>;
  _battery_states_type battery_states;
  using _comms_states_type =
    std::vector<bosdyn_msgs::msg::CommsState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::CommsState_<ContainerAllocator>>>;
  _comms_states_type comms_states;
  using _system_fault_state_type =
    bosdyn_msgs::msg::SystemFaultState_<ContainerAllocator>;
  _system_fault_state_type system_fault_state;
  using _system_fault_state_is_set_type =
    bool;
  _system_fault_state_is_set_type system_fault_state_is_set;
  using _estop_states_type =
    std::vector<bosdyn_msgs::msg::EStopState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EStopState_<ContainerAllocator>>>;
  _estop_states_type estop_states;
  using _kinematic_state_type =
    bosdyn_msgs::msg::KinematicState_<ContainerAllocator>;
  _kinematic_state_type kinematic_state;
  using _kinematic_state_is_set_type =
    bool;
  _kinematic_state_is_set_type kinematic_state_is_set;
  using _behavior_fault_state_type =
    bosdyn_msgs::msg::BehaviorFaultState_<ContainerAllocator>;
  _behavior_fault_state_type behavior_fault_state;
  using _behavior_fault_state_is_set_type =
    bool;
  _behavior_fault_state_is_set_type behavior_fault_state_is_set;
  using _foot_state_type =
    std::vector<bosdyn_msgs::msg::FootState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::FootState_<ContainerAllocator>>>;
  _foot_state_type foot_state;
  using _manipulator_state_type =
    bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator>;
  _manipulator_state_type manipulator_state;
  using _manipulator_state_is_set_type =
    bool;
  _manipulator_state_is_set_type manipulator_state_is_set;
  using _service_fault_state_type =
    bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator>;
  _service_fault_state_type service_fault_state;
  using _service_fault_state_is_set_type =
    bool;
  _service_fault_state_is_set_type service_fault_state_is_set;
  using _terrain_state_type =
    bosdyn_msgs::msg::TerrainState_<ContainerAllocator>;
  _terrain_state_type terrain_state;
  using _terrain_state_is_set_type =
    bool;
  _terrain_state_is_set_type terrain_state_is_set;

  // setters for named parameter idiom
  Type & set__power_state(
    const bosdyn_msgs::msg::PowerState_<ContainerAllocator> & _arg)
  {
    this->power_state = _arg;
    return *this;
  }
  Type & set__power_state_is_set(
    const bool & _arg)
  {
    this->power_state_is_set = _arg;
    return *this;
  }
  Type & set__battery_states(
    const std::vector<bosdyn_msgs::msg::BatteryState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::BatteryState_<ContainerAllocator>>> & _arg)
  {
    this->battery_states = _arg;
    return *this;
  }
  Type & set__comms_states(
    const std::vector<bosdyn_msgs::msg::CommsState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::CommsState_<ContainerAllocator>>> & _arg)
  {
    this->comms_states = _arg;
    return *this;
  }
  Type & set__system_fault_state(
    const bosdyn_msgs::msg::SystemFaultState_<ContainerAllocator> & _arg)
  {
    this->system_fault_state = _arg;
    return *this;
  }
  Type & set__system_fault_state_is_set(
    const bool & _arg)
  {
    this->system_fault_state_is_set = _arg;
    return *this;
  }
  Type & set__estop_states(
    const std::vector<bosdyn_msgs::msg::EStopState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EStopState_<ContainerAllocator>>> & _arg)
  {
    this->estop_states = _arg;
    return *this;
  }
  Type & set__kinematic_state(
    const bosdyn_msgs::msg::KinematicState_<ContainerAllocator> & _arg)
  {
    this->kinematic_state = _arg;
    return *this;
  }
  Type & set__kinematic_state_is_set(
    const bool & _arg)
  {
    this->kinematic_state_is_set = _arg;
    return *this;
  }
  Type & set__behavior_fault_state(
    const bosdyn_msgs::msg::BehaviorFaultState_<ContainerAllocator> & _arg)
  {
    this->behavior_fault_state = _arg;
    return *this;
  }
  Type & set__behavior_fault_state_is_set(
    const bool & _arg)
  {
    this->behavior_fault_state_is_set = _arg;
    return *this;
  }
  Type & set__foot_state(
    const std::vector<bosdyn_msgs::msg::FootState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::FootState_<ContainerAllocator>>> & _arg)
  {
    this->foot_state = _arg;
    return *this;
  }
  Type & set__manipulator_state(
    const bosdyn_msgs::msg::ManipulatorState_<ContainerAllocator> & _arg)
  {
    this->manipulator_state = _arg;
    return *this;
  }
  Type & set__manipulator_state_is_set(
    const bool & _arg)
  {
    this->manipulator_state_is_set = _arg;
    return *this;
  }
  Type & set__service_fault_state(
    const bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator> & _arg)
  {
    this->service_fault_state = _arg;
    return *this;
  }
  Type & set__service_fault_state_is_set(
    const bool & _arg)
  {
    this->service_fault_state_is_set = _arg;
    return *this;
  }
  Type & set__terrain_state(
    const bosdyn_msgs::msg::TerrainState_<ContainerAllocator> & _arg)
  {
    this->terrain_state = _arg;
    return *this;
  }
  Type & set__terrain_state_is_set(
    const bool & _arg)
  {
    this->terrain_state_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RobotState
    std::shared_ptr<bosdyn_msgs::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RobotState
    std::shared_ptr<bosdyn_msgs::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->power_state != other.power_state) {
      return false;
    }
    if (this->power_state_is_set != other.power_state_is_set) {
      return false;
    }
    if (this->battery_states != other.battery_states) {
      return false;
    }
    if (this->comms_states != other.comms_states) {
      return false;
    }
    if (this->system_fault_state != other.system_fault_state) {
      return false;
    }
    if (this->system_fault_state_is_set != other.system_fault_state_is_set) {
      return false;
    }
    if (this->estop_states != other.estop_states) {
      return false;
    }
    if (this->kinematic_state != other.kinematic_state) {
      return false;
    }
    if (this->kinematic_state_is_set != other.kinematic_state_is_set) {
      return false;
    }
    if (this->behavior_fault_state != other.behavior_fault_state) {
      return false;
    }
    if (this->behavior_fault_state_is_set != other.behavior_fault_state_is_set) {
      return false;
    }
    if (this->foot_state != other.foot_state) {
      return false;
    }
    if (this->manipulator_state != other.manipulator_state) {
      return false;
    }
    if (this->manipulator_state_is_set != other.manipulator_state_is_set) {
      return false;
    }
    if (this->service_fault_state != other.service_fault_state) {
      return false;
    }
    if (this->service_fault_state_is_set != other.service_fault_state_is_set) {
      return false;
    }
    if (this->terrain_state != other.terrain_state) {
      return false;
    }
    if (this->terrain_state_is_set != other.terrain_state_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  bosdyn_msgs::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
