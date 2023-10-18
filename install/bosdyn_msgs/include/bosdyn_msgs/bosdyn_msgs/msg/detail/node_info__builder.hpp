// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE_INFO__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/node_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeInfo_children
{
public:
  explicit Init_NodeInfo_children(::bosdyn_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NodeInfo children(::bosdyn_msgs::msg::NodeInfo::_children_type arg)
  {
    msg_.children = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_user_data_is_set
{
public:
  explicit Init_NodeInfo_user_data_is_set(::bosdyn_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  Init_NodeInfo_children user_data_is_set(::bosdyn_msgs::msg::NodeInfo::_user_data_is_set_type arg)
  {
    msg_.user_data_is_set = std::move(arg);
    return Init_NodeInfo_children(msg_);
  }

private:
  ::bosdyn_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_user_data
{
public:
  explicit Init_NodeInfo_user_data(::bosdyn_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  Init_NodeInfo_user_data_is_set user_data(::bosdyn_msgs::msg::NodeInfo::_user_data_type arg)
  {
    msg_.user_data = std::move(arg);
    return Init_NodeInfo_user_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_name
{
public:
  explicit Init_NodeInfo_name(::bosdyn_msgs::msg::NodeInfo & msg)
  : msg_(msg)
  {}
  Init_NodeInfo_user_data name(::bosdyn_msgs::msg::NodeInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_NodeInfo_user_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::NodeInfo msg_;
};

class Init_NodeInfo_id
{
public:
  Init_NodeInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeInfo_name id(::bosdyn_msgs::msg::NodeInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NodeInfo_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::NodeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NodeInfo>()
{
  return bosdyn_msgs::msg::builder::Init_NodeInfo_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE_INFO__BUILDER_HPP_
