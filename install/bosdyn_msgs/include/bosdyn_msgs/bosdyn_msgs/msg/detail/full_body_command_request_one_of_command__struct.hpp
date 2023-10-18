// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FullBodyCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stop_request'
#include "bosdyn_msgs/msg/detail/stop_command_request__struct.hpp"
// Member 'freeze_request'
#include "bosdyn_msgs/msg/detail/freeze_command_request__struct.hpp"
// Member 'selfright_request'
#include "bosdyn_msgs/msg/detail/self_right_command_request__struct.hpp"
// Member 'safe_power_off_request'
#include "bosdyn_msgs/msg/detail/safe_power_off_command_request__struct.hpp"
// Member 'battery_change_pose_request'
#include "bosdyn_msgs/msg/detail/battery_change_pose_command_request__struct.hpp"
// Member 'payload_estimation_request'
#include "bosdyn_msgs/msg/detail/payload_estimation_command_request__struct.hpp"
// Member 'constrained_manipulation_request'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FullBodyCommandRequestOneOfCommand_
{
  using Type = FullBodyCommandRequestOneOfCommand_<ContainerAllocator>;

  explicit FullBodyCommandRequestOneOfCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stop_request(_init),
    freeze_request(_init),
    selfright_request(_init),
    safe_power_off_request(_init),
    battery_change_pose_request(_init),
    payload_estimation_request(_init),
    constrained_manipulation_request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  explicit FullBodyCommandRequestOneOfCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stop_request(_alloc, _init),
    freeze_request(_alloc, _init),
    selfright_request(_alloc, _init),
    safe_power_off_request(_alloc, _init),
    battery_change_pose_request(_alloc, _init),
    payload_estimation_request(_alloc, _init),
    constrained_manipulation_request(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  // field types and members
  using _stop_request_type =
    bosdyn_msgs::msg::StopCommandRequest_<ContainerAllocator>;
  _stop_request_type stop_request;
  using _freeze_request_type =
    bosdyn_msgs::msg::FreezeCommandRequest_<ContainerAllocator>;
  _freeze_request_type freeze_request;
  using _selfright_request_type =
    bosdyn_msgs::msg::SelfRightCommandRequest_<ContainerAllocator>;
  _selfright_request_type selfright_request;
  using _safe_power_off_request_type =
    bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator>;
  _safe_power_off_request_type safe_power_off_request;
  using _battery_change_pose_request_type =
    bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator>;
  _battery_change_pose_request_type battery_change_pose_request;
  using _payload_estimation_request_type =
    bosdyn_msgs::msg::PayloadEstimationCommandRequest_<ContainerAllocator>;
  _payload_estimation_request_type payload_estimation_request;
  using _constrained_manipulation_request_type =
    bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator>;
  _constrained_manipulation_request_type constrained_manipulation_request;
  using _command_choice_type =
    int8_t;
  _command_choice_type command_choice;

  // setters for named parameter idiom
  Type & set__stop_request(
    const bosdyn_msgs::msg::StopCommandRequest_<ContainerAllocator> & _arg)
  {
    this->stop_request = _arg;
    return *this;
  }
  Type & set__freeze_request(
    const bosdyn_msgs::msg::FreezeCommandRequest_<ContainerAllocator> & _arg)
  {
    this->freeze_request = _arg;
    return *this;
  }
  Type & set__selfright_request(
    const bosdyn_msgs::msg::SelfRightCommandRequest_<ContainerAllocator> & _arg)
  {
    this->selfright_request = _arg;
    return *this;
  }
  Type & set__safe_power_off_request(
    const bosdyn_msgs::msg::SafePowerOffCommandRequest_<ContainerAllocator> & _arg)
  {
    this->safe_power_off_request = _arg;
    return *this;
  }
  Type & set__battery_change_pose_request(
    const bosdyn_msgs::msg::BatteryChangePoseCommandRequest_<ContainerAllocator> & _arg)
  {
    this->battery_change_pose_request = _arg;
    return *this;
  }
  Type & set__payload_estimation_request(
    const bosdyn_msgs::msg::PayloadEstimationCommandRequest_<ContainerAllocator> & _arg)
  {
    this->payload_estimation_request = _arg;
    return *this;
  }
  Type & set__constrained_manipulation_request(
    const bosdyn_msgs::msg::ConstrainedManipulationCommandRequest_<ContainerAllocator> & _arg)
  {
    this->constrained_manipulation_request = _arg;
    return *this;
  }
  Type & set__command_choice(
    const int8_t & _arg)
  {
    this->command_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t COMMAND_NOT_SET =
    0;
  static constexpr int8_t COMMAND_STOP_REQUEST_SET =
    1;
  static constexpr int8_t COMMAND_FREEZE_REQUEST_SET =
    2;
  static constexpr int8_t COMMAND_SELFRIGHT_REQUEST_SET =
    3;
  static constexpr int8_t COMMAND_SAFE_POWER_OFF_REQUEST_SET =
    4;
  static constexpr int8_t COMMAND_BATTERY_CHANGE_POSE_REQUEST_SET =
    5;
  static constexpr int8_t COMMAND_PAYLOAD_ESTIMATION_REQUEST_SET =
    6;
  static constexpr int8_t COMMAND_CONSTRAINED_MANIPULATION_REQUEST_SET =
    7;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FullBodyCommandRequestOneOfCommand_ & other) const
  {
    if (this->stop_request != other.stop_request) {
      return false;
    }
    if (this->freeze_request != other.freeze_request) {
      return false;
    }
    if (this->selfright_request != other.selfright_request) {
      return false;
    }
    if (this->safe_power_off_request != other.safe_power_off_request) {
      return false;
    }
    if (this->battery_change_pose_request != other.battery_change_pose_request) {
      return false;
    }
    if (this->payload_estimation_request != other.payload_estimation_request) {
      return false;
    }
    if (this->constrained_manipulation_request != other.constrained_manipulation_request) {
      return false;
    }
    if (this->command_choice != other.command_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const FullBodyCommandRequestOneOfCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FullBodyCommandRequestOneOfCommand_

// alias to use template instance with default allocator
using FullBodyCommandRequestOneOfCommand =
  bosdyn_msgs::msg::FullBodyCommandRequestOneOfCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_STOP_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_FREEZE_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_SELFRIGHT_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_SAFE_POWER_OFF_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_BATTERY_CHANGE_POSE_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_PAYLOAD_ESTIMATION_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t FullBodyCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_CONSTRAINED_MANIPULATION_REQUEST_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
