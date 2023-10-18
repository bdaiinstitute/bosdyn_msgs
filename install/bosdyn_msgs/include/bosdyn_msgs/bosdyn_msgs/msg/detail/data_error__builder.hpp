// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataError_error_message
{
public:
  explicit Init_DataError_error_message(::bosdyn_msgs::msg::DataError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataError error_message(::bosdyn_msgs::msg::DataError::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataError msg_;
};

class Init_DataError_data_id_is_set
{
public:
  explicit Init_DataError_data_id_is_set(::bosdyn_msgs::msg::DataError & msg)
  : msg_(msg)
  {}
  Init_DataError_error_message data_id_is_set(::bosdyn_msgs::msg::DataError::_data_id_is_set_type arg)
  {
    msg_.data_id_is_set = std::move(arg);
    return Init_DataError_error_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataError msg_;
};

class Init_DataError_data_id
{
public:
  Init_DataError_data_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataError_data_id_is_set data_id(::bosdyn_msgs::msg::DataError::_data_id_type arg)
  {
    msg_.data_id = std::move(arg);
    return Init_DataError_data_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataError>()
{
  return bosdyn_msgs::msg::builder::Init_DataError_data_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__BUILDER_HPP_
