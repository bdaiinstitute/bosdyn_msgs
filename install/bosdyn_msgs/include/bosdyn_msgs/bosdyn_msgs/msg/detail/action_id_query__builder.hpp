// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionIdQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_ID_QUERY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_ID_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_id_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionIdQuery_action_ids
{
public:
  Init_ActionIdQuery_action_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::ActionIdQuery action_ids(::bosdyn_msgs::msg::ActionIdQuery::_action_ids_type arg)
  {
    msg_.action_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionIdQuery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionIdQuery>()
{
  return bosdyn_msgs::msg::builder::Init_ActionIdQuery_action_ids();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_ID_QUERY__BUILDER_HPP_
