// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/OneOfParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/one_of_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_OneOfParam_values
{
public:
  explicit Init_OneOfParam_values(::bosdyn_msgs::msg::OneOfParam & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::OneOfParam values(::bosdyn_msgs::msg::OneOfParam::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::OneOfParam msg_;
};

class Init_OneOfParam_key
{
public:
  Init_OneOfParam_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OneOfParam_values key(::bosdyn_msgs::msg::OneOfParam::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_OneOfParam_values(msg_);
  }

private:
  ::bosdyn_msgs::msg::OneOfParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::OneOfParam>()
{
  return bosdyn_msgs::msg::builder::Init_OneOfParam_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ONE_OF_PARAM__BUILDER_HPP_
