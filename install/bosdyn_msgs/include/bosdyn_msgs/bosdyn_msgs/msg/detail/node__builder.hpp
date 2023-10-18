// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Node_parameters
{
public:
  explicit Init_Node_parameters(::bosdyn_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Node parameters(::bosdyn_msgs::msg::Node::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Node msg_;
};

class Init_Node_overrides
{
public:
  explicit Init_Node_overrides(::bosdyn_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_parameters overrides(::bosdyn_msgs::msg::Node::_overrides_type arg)
  {
    msg_.overrides = std::move(arg);
    return Init_Node_parameters(msg_);
  }

private:
  ::bosdyn_msgs::msg::Node msg_;
};

class Init_Node_parameter_values
{
public:
  explicit Init_Node_parameter_values(::bosdyn_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_overrides parameter_values(::bosdyn_msgs::msg::Node::_parameter_values_type arg)
  {
    msg_.parameter_values = std::move(arg);
    return Init_Node_overrides(msg_);
  }

private:
  ::bosdyn_msgs::msg::Node msg_;
};

class Init_Node_type
{
public:
  explicit Init_Node_type(::bosdyn_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_parameter_values type(::bosdyn_msgs::msg::Node::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Node_parameter_values(msg_);
  }

private:
  ::bosdyn_msgs::msg::Node msg_;
};

class Init_Node_reference_id
{
public:
  explicit Init_Node_reference_id(::bosdyn_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_type reference_id(::bosdyn_msgs::msg::Node::_reference_id_type arg)
  {
    msg_.reference_id = std::move(arg);
    return Init_Node_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::Node msg_;
};

class Init_Node_user_data_is_set
{
public:
  explicit Init_Node_user_data_is_set(::bosdyn_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_reference_id user_data_is_set(::bosdyn_msgs::msg::Node::_user_data_is_set_type arg)
  {
    msg_.user_data_is_set = std::move(arg);
    return Init_Node_reference_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::Node msg_;
};

class Init_Node_user_data
{
public:
  explicit Init_Node_user_data(::bosdyn_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_user_data_is_set user_data(::bosdyn_msgs::msg::Node::_user_data_type arg)
  {
    msg_.user_data = std::move(arg);
    return Init_Node_user_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Node msg_;
};

class Init_Node_name
{
public:
  Init_Node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_user_data name(::bosdyn_msgs::msg::Node::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Node_user_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Node>()
{
  return bosdyn_msgs::msg::builder::Init_Node_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
