// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetICEConfigurationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_ICE_CONFIGURATION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_ICE_CONFIGURATION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_ice_configuration_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetICEConfigurationResponse_servers
{
public:
  explicit Init_GetICEConfigurationResponse_servers(::bosdyn_msgs::msg::GetICEConfigurationResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetICEConfigurationResponse servers(::bosdyn_msgs::msg::GetICEConfigurationResponse::_servers_type arg)
  {
    msg_.servers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetICEConfigurationResponse msg_;
};

class Init_GetICEConfigurationResponse_header_is_set
{
public:
  explicit Init_GetICEConfigurationResponse_header_is_set(::bosdyn_msgs::msg::GetICEConfigurationResponse & msg)
  : msg_(msg)
  {}
  Init_GetICEConfigurationResponse_servers header_is_set(::bosdyn_msgs::msg::GetICEConfigurationResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetICEConfigurationResponse_servers(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetICEConfigurationResponse msg_;
};

class Init_GetICEConfigurationResponse_header
{
public:
  Init_GetICEConfigurationResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetICEConfigurationResponse_header_is_set header(::bosdyn_msgs::msg::GetICEConfigurationResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetICEConfigurationResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetICEConfigurationResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetICEConfigurationResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetICEConfigurationResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_ICE_CONFIGURATION_RESPONSE__BUILDER_HPP_
