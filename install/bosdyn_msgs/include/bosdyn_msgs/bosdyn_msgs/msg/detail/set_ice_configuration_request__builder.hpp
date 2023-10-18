// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetICEConfigurationRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_ICE_CONFIGURATION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_ICE_CONFIGURATION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_ice_configuration_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetICEConfigurationRequest_servers
{
public:
  explicit Init_SetICEConfigurationRequest_servers(::bosdyn_msgs::msg::SetICEConfigurationRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetICEConfigurationRequest servers(::bosdyn_msgs::msg::SetICEConfigurationRequest::_servers_type arg)
  {
    msg_.servers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetICEConfigurationRequest msg_;
};

class Init_SetICEConfigurationRequest_header_is_set
{
public:
  explicit Init_SetICEConfigurationRequest_header_is_set(::bosdyn_msgs::msg::SetICEConfigurationRequest & msg)
  : msg_(msg)
  {}
  Init_SetICEConfigurationRequest_servers header_is_set(::bosdyn_msgs::msg::SetICEConfigurationRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetICEConfigurationRequest_servers(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetICEConfigurationRequest msg_;
};

class Init_SetICEConfigurationRequest_header
{
public:
  Init_SetICEConfigurationRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetICEConfigurationRequest_header_is_set header(::bosdyn_msgs::msg::SetICEConfigurationRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetICEConfigurationRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetICEConfigurationRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetICEConfigurationRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetICEConfigurationRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_ICE_CONFIGURATION_REQUEST__BUILDER_HPP_
