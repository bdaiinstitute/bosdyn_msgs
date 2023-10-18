// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotId_computer_serial_number
{
public:
  explicit Init_RobotId_computer_serial_number(::bosdyn_msgs::msg::RobotId & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotId computer_serial_number(::bosdyn_msgs::msg::RobotId::_computer_serial_number_type arg)
  {
    msg_.computer_serial_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotId msg_;
};

class Init_RobotId_nickname
{
public:
  explicit Init_RobotId_nickname(::bosdyn_msgs::msg::RobotId & msg)
  : msg_(msg)
  {}
  Init_RobotId_computer_serial_number nickname(::bosdyn_msgs::msg::RobotId::_nickname_type arg)
  {
    msg_.nickname = std::move(arg);
    return Init_RobotId_computer_serial_number(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotId msg_;
};

class Init_RobotId_software_release_is_set
{
public:
  explicit Init_RobotId_software_release_is_set(::bosdyn_msgs::msg::RobotId & msg)
  : msg_(msg)
  {}
  Init_RobotId_nickname software_release_is_set(::bosdyn_msgs::msg::RobotId::_software_release_is_set_type arg)
  {
    msg_.software_release_is_set = std::move(arg);
    return Init_RobotId_nickname(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotId msg_;
};

class Init_RobotId_software_release
{
public:
  explicit Init_RobotId_software_release(::bosdyn_msgs::msg::RobotId & msg)
  : msg_(msg)
  {}
  Init_RobotId_software_release_is_set software_release(::bosdyn_msgs::msg::RobotId::_software_release_type arg)
  {
    msg_.software_release = std::move(arg);
    return Init_RobotId_software_release_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotId msg_;
};

class Init_RobotId_version
{
public:
  explicit Init_RobotId_version(::bosdyn_msgs::msg::RobotId & msg)
  : msg_(msg)
  {}
  Init_RobotId_software_release version(::bosdyn_msgs::msg::RobotId::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_RobotId_software_release(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotId msg_;
};

class Init_RobotId_species
{
public:
  explicit Init_RobotId_species(::bosdyn_msgs::msg::RobotId & msg)
  : msg_(msg)
  {}
  Init_RobotId_version species(::bosdyn_msgs::msg::RobotId::_species_type arg)
  {
    msg_.species = std::move(arg);
    return Init_RobotId_version(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotId msg_;
};

class Init_RobotId_serial_number
{
public:
  Init_RobotId_serial_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotId_species serial_number(::bosdyn_msgs::msg::RobotId::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_RobotId_species(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotId>()
{
  return bosdyn_msgs::msg::builder::Init_RobotId_serial_number();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID__BUILDER_HPP_
