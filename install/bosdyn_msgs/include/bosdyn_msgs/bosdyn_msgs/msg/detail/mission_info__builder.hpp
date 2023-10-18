// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mission_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionInfo_root_is_set
{
public:
  explicit Init_MissionInfo_root_is_set(::bosdyn_msgs::msg::MissionInfo & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MissionInfo root_is_set(::bosdyn_msgs::msg::MissionInfo::_root_is_set_type arg)
  {
    msg_.root_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MissionInfo msg_;
};

class Init_MissionInfo_root
{
public:
  explicit Init_MissionInfo_root(::bosdyn_msgs::msg::MissionInfo & msg)
  : msg_(msg)
  {}
  Init_MissionInfo_root_is_set root(::bosdyn_msgs::msg::MissionInfo::_root_type arg)
  {
    msg_.root = std::move(arg);
    return Init_MissionInfo_root_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MissionInfo msg_;
};

class Init_MissionInfo_id
{
public:
  Init_MissionInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionInfo_root id(::bosdyn_msgs::msg::MissionInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MissionInfo_root(msg_);
  }

private:
  ::bosdyn_msgs::msg::MissionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MissionInfo>()
{
  return bosdyn_msgs::msg::builder::Init_MissionInfo_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_
