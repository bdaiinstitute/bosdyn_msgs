// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetServiceEntryResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_SERVICE_ENTRY_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_SERVICE_ENTRY_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_service_entry_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetServiceEntryResponse_service_entry_is_set
{
public:
  explicit Init_GetServiceEntryResponse_service_entry_is_set(::bosdyn_msgs::msg::GetServiceEntryResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetServiceEntryResponse service_entry_is_set(::bosdyn_msgs::msg::GetServiceEntryResponse::_service_entry_is_set_type arg)
  {
    msg_.service_entry_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetServiceEntryResponse msg_;
};

class Init_GetServiceEntryResponse_service_entry
{
public:
  explicit Init_GetServiceEntryResponse_service_entry(::bosdyn_msgs::msg::GetServiceEntryResponse & msg)
  : msg_(msg)
  {}
  Init_GetServiceEntryResponse_service_entry_is_set service_entry(::bosdyn_msgs::msg::GetServiceEntryResponse::_service_entry_type arg)
  {
    msg_.service_entry = std::move(arg);
    return Init_GetServiceEntryResponse_service_entry_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetServiceEntryResponse msg_;
};

class Init_GetServiceEntryResponse_status
{
public:
  explicit Init_GetServiceEntryResponse_status(::bosdyn_msgs::msg::GetServiceEntryResponse & msg)
  : msg_(msg)
  {}
  Init_GetServiceEntryResponse_service_entry status(::bosdyn_msgs::msg::GetServiceEntryResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetServiceEntryResponse_service_entry(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetServiceEntryResponse msg_;
};

class Init_GetServiceEntryResponse_header_is_set
{
public:
  explicit Init_GetServiceEntryResponse_header_is_set(::bosdyn_msgs::msg::GetServiceEntryResponse & msg)
  : msg_(msg)
  {}
  Init_GetServiceEntryResponse_status header_is_set(::bosdyn_msgs::msg::GetServiceEntryResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetServiceEntryResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetServiceEntryResponse msg_;
};

class Init_GetServiceEntryResponse_header
{
public:
  Init_GetServiceEntryResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetServiceEntryResponse_header_is_set header(::bosdyn_msgs::msg::GetServiceEntryResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetServiceEntryResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetServiceEntryResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetServiceEntryResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetServiceEntryResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_SERVICE_ENTRY_RESPONSE__BUILDER_HPP_
