// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MobilityCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'se2_trajectory_request'
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_request__struct.hpp"
// Member 'se2_velocity_request'
#include "bosdyn_msgs/msg/detail/se2_velocity_command_request__struct.hpp"
// Member 'sit_request'
#include "bosdyn_msgs/msg/detail/sit_command_request__struct.hpp"
// Member 'stand_request'
#include "bosdyn_msgs/msg/detail/stand_command_request__struct.hpp"
// Member 'stance_request'
#include "bosdyn_msgs/msg/detail/stance_command_request__struct.hpp"
// Member 'stop_request'
#include "bosdyn_msgs/msg/detail/stop_command_request__struct.hpp"
// Member 'follow_arm_request'
#include "bosdyn_msgs/msg/detail/follow_arm_command_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityCommandRequestOneOfCommand_
{
  using Type = MobilityCommandRequestOneOfCommand_<ContainerAllocator>;

  explicit MobilityCommandRequestOneOfCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : se2_trajectory_request(_init),
    se2_velocity_request(_init),
    sit_request(_init),
    stand_request(_init),
    stance_request(_init),
    stop_request(_init),
    follow_arm_request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  explicit MobilityCommandRequestOneOfCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : se2_trajectory_request(_alloc, _init),
    se2_velocity_request(_alloc, _init),
    sit_request(_alloc, _init),
    stand_request(_alloc, _init),
    stance_request(_alloc, _init),
    stop_request(_alloc, _init),
    follow_arm_request(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_choice = 0;
    }
  }

  // field types and members
  using _se2_trajectory_request_type =
    bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator>;
  _se2_trajectory_request_type se2_trajectory_request;
  using _se2_velocity_request_type =
    bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator>;
  _se2_velocity_request_type se2_velocity_request;
  using _sit_request_type =
    bosdyn_msgs::msg::SitCommandRequest_<ContainerAllocator>;
  _sit_request_type sit_request;
  using _stand_request_type =
    bosdyn_msgs::msg::StandCommandRequest_<ContainerAllocator>;
  _stand_request_type stand_request;
  using _stance_request_type =
    bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator>;
  _stance_request_type stance_request;
  using _stop_request_type =
    bosdyn_msgs::msg::StopCommandRequest_<ContainerAllocator>;
  _stop_request_type stop_request;
  using _follow_arm_request_type =
    bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator>;
  _follow_arm_request_type follow_arm_request;
  using _command_choice_type =
    int8_t;
  _command_choice_type command_choice;

  // setters for named parameter idiom
  Type & set__se2_trajectory_request(
    const bosdyn_msgs::msg::SE2TrajectoryCommandRequest_<ContainerAllocator> & _arg)
  {
    this->se2_trajectory_request = _arg;
    return *this;
  }
  Type & set__se2_velocity_request(
    const bosdyn_msgs::msg::SE2VelocityCommandRequest_<ContainerAllocator> & _arg)
  {
    this->se2_velocity_request = _arg;
    return *this;
  }
  Type & set__sit_request(
    const bosdyn_msgs::msg::SitCommandRequest_<ContainerAllocator> & _arg)
  {
    this->sit_request = _arg;
    return *this;
  }
  Type & set__stand_request(
    const bosdyn_msgs::msg::StandCommandRequest_<ContainerAllocator> & _arg)
  {
    this->stand_request = _arg;
    return *this;
  }
  Type & set__stance_request(
    const bosdyn_msgs::msg::StanceCommandRequest_<ContainerAllocator> & _arg)
  {
    this->stance_request = _arg;
    return *this;
  }
  Type & set__stop_request(
    const bosdyn_msgs::msg::StopCommandRequest_<ContainerAllocator> & _arg)
  {
    this->stop_request = _arg;
    return *this;
  }
  Type & set__follow_arm_request(
    const bosdyn_msgs::msg::FollowArmCommandRequest_<ContainerAllocator> & _arg)
  {
    this->follow_arm_request = _arg;
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
  static constexpr int8_t COMMAND_SE2_TRAJECTORY_REQUEST_SET =
    1;
  static constexpr int8_t COMMAND_SE2_VELOCITY_REQUEST_SET =
    2;
  static constexpr int8_t COMMAND_SIT_REQUEST_SET =
    3;
  static constexpr int8_t COMMAND_STAND_REQUEST_SET =
    4;
  static constexpr int8_t COMMAND_STANCE_REQUEST_SET =
    5;
  static constexpr int8_t COMMAND_STOP_REQUEST_SET =
    6;
  static constexpr int8_t COMMAND_FOLLOW_ARM_REQUEST_SET =
    7;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand
    std::shared_ptr<bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityCommandRequestOneOfCommand_ & other) const
  {
    if (this->se2_trajectory_request != other.se2_trajectory_request) {
      return false;
    }
    if (this->se2_velocity_request != other.se2_velocity_request) {
      return false;
    }
    if (this->sit_request != other.sit_request) {
      return false;
    }
    if (this->stand_request != other.stand_request) {
      return false;
    }
    if (this->stance_request != other.stance_request) {
      return false;
    }
    if (this->stop_request != other.stop_request) {
      return false;
    }
    if (this->follow_arm_request != other.follow_arm_request) {
      return false;
    }
    if (this->command_choice != other.command_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityCommandRequestOneOfCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityCommandRequestOneOfCommand_

// alias to use template instance with default allocator
using MobilityCommandRequestOneOfCommand =
  bosdyn_msgs::msg::MobilityCommandRequestOneOfCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_SE2_TRAJECTORY_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_SE2_VELOCITY_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_SIT_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_STAND_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_STANCE_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_STOP_REQUEST_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t MobilityCommandRequestOneOfCommand_<ContainerAllocator>::COMMAND_FOLLOW_ARM_REQUEST_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_REQUEST_ONE_OF_COMMAND__STRUCT_HPP_
