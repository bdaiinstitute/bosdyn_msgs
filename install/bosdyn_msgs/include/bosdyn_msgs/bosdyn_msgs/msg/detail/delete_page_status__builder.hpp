// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DeletePageStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DELETE_PAGE_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DELETE_PAGE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/delete_page_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DeletePageStatus_status
{
public:
  explicit Init_DeletePageStatus_status(::bosdyn_msgs::msg::DeletePageStatus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DeletePageStatus status(::bosdyn_msgs::msg::DeletePageStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeletePageStatus msg_;
};

class Init_DeletePageStatus_page_id
{
public:
  Init_DeletePageStatus_page_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeletePageStatus_status page_id(::bosdyn_msgs::msg::DeletePageStatus::_page_id_type arg)
  {
    msg_.page_id = std::move(arg);
    return Init_DeletePageStatus_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::DeletePageStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DeletePageStatus>()
{
  return bosdyn_msgs::msg::builder::Init_DeletePageStatus_page_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DELETE_PAGE_STATUS__BUILDER_HPP_
