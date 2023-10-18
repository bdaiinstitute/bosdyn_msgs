// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataIdentifier.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_IDENTIFIER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_IDENTIFIER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_identifier__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataIdentifier_id
{
public:
  explicit Init_DataIdentifier_id(::bosdyn_msgs::msg::DataIdentifier & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataIdentifier id(::bosdyn_msgs::msg::DataIdentifier::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIdentifier msg_;
};

class Init_DataIdentifier_data_name
{
public:
  explicit Init_DataIdentifier_data_name(::bosdyn_msgs::msg::DataIdentifier & msg)
  : msg_(msg)
  {}
  Init_DataIdentifier_id data_name(::bosdyn_msgs::msg::DataIdentifier::_data_name_type arg)
  {
    msg_.data_name = std::move(arg);
    return Init_DataIdentifier_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIdentifier msg_;
};

class Init_DataIdentifier_channel
{
public:
  explicit Init_DataIdentifier_channel(::bosdyn_msgs::msg::DataIdentifier & msg)
  : msg_(msg)
  {}
  Init_DataIdentifier_data_name channel(::bosdyn_msgs::msg::DataIdentifier::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return Init_DataIdentifier_data_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIdentifier msg_;
};

class Init_DataIdentifier_action_id_is_set
{
public:
  explicit Init_DataIdentifier_action_id_is_set(::bosdyn_msgs::msg::DataIdentifier & msg)
  : msg_(msg)
  {}
  Init_DataIdentifier_channel action_id_is_set(::bosdyn_msgs::msg::DataIdentifier::_action_id_is_set_type arg)
  {
    msg_.action_id_is_set = std::move(arg);
    return Init_DataIdentifier_channel(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIdentifier msg_;
};

class Init_DataIdentifier_action_id
{
public:
  Init_DataIdentifier_action_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataIdentifier_action_id_is_set action_id(::bosdyn_msgs::msg::DataIdentifier::_action_id_type arg)
  {
    msg_.action_id = std::move(arg);
    return Init_DataIdentifier_action_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataIdentifier msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataIdentifier>()
{
  return bosdyn_msgs::msg::builder::Init_DataIdentifier_action_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_IDENTIFIER__BUILDER_HPP_
