// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ServiceEntryOneOfServiceType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY_ONE_OF_SERVICE_TYPE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY_ONE_OF_SERVICE_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/service_entry_one_of_service_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ServiceEntryOneOfServiceType_service_type_choice
{
public:
  explicit Init_ServiceEntryOneOfServiceType_service_type_choice(::bosdyn_msgs::msg::ServiceEntryOneOfServiceType & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ServiceEntryOneOfServiceType service_type_choice(::bosdyn_msgs::msg::ServiceEntryOneOfServiceType::_service_type_choice_type arg)
  {
    msg_.service_type_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntryOneOfServiceType msg_;
};

class Init_ServiceEntryOneOfServiceType_type
{
public:
  Init_ServiceEntryOneOfServiceType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceEntryOneOfServiceType_service_type_choice type(::bosdyn_msgs::msg::ServiceEntryOneOfServiceType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ServiceEntryOneOfServiceType_service_type_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceEntryOneOfServiceType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ServiceEntryOneOfServiceType>()
{
  return bosdyn_msgs::msg::builder::Init_ServiceEntryOneOfServiceType_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY_ONE_OF_SERVICE_TYPE__BUILDER_HPP_
