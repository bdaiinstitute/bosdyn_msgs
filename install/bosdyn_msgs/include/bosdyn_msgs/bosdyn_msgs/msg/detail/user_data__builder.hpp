// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UserData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__USER_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__USER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/user_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UserData_bytestring
{
public:
  explicit Init_UserData_bytestring(::bosdyn_msgs::msg::UserData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UserData bytestring(::bosdyn_msgs::msg::UserData::_bytestring_type arg)
  {
    msg_.bytestring = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UserData msg_;
};

class Init_UserData_id
{
public:
  Init_UserData_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserData_bytestring id(::bosdyn_msgs::msg::UserData::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_UserData_bytestring(msg_);
  }

private:
  ::bosdyn_msgs::msg::UserData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UserData>()
{
  return bosdyn_msgs::msg::builder::Init_UserData_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__USER_DATA__BUILDER_HPP_
