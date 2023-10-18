// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RetrieveRawDataResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RETRIEVE_RAW_DATA_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RETRIEVE_RAW_DATA_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/retrieve_raw_data_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RetrieveRawDataResponse_data_is_set
{
public:
  explicit Init_RetrieveRawDataResponse_data_is_set(::bosdyn_msgs::msg::RetrieveRawDataResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RetrieveRawDataResponse data_is_set(::bosdyn_msgs::msg::RetrieveRawDataResponse::_data_is_set_type arg)
  {
    msg_.data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveRawDataResponse msg_;
};

class Init_RetrieveRawDataResponse_data
{
public:
  explicit Init_RetrieveRawDataResponse_data(::bosdyn_msgs::msg::RetrieveRawDataResponse & msg)
  : msg_(msg)
  {}
  Init_RetrieveRawDataResponse_data_is_set data(::bosdyn_msgs::msg::RetrieveRawDataResponse::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_RetrieveRawDataResponse_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveRawDataResponse msg_;
};

class Init_RetrieveRawDataResponse_logpoint_is_set
{
public:
  explicit Init_RetrieveRawDataResponse_logpoint_is_set(::bosdyn_msgs::msg::RetrieveRawDataResponse & msg)
  : msg_(msg)
  {}
  Init_RetrieveRawDataResponse_data logpoint_is_set(::bosdyn_msgs::msg::RetrieveRawDataResponse::_logpoint_is_set_type arg)
  {
    msg_.logpoint_is_set = std::move(arg);
    return Init_RetrieveRawDataResponse_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveRawDataResponse msg_;
};

class Init_RetrieveRawDataResponse_logpoint
{
public:
  explicit Init_RetrieveRawDataResponse_logpoint(::bosdyn_msgs::msg::RetrieveRawDataResponse & msg)
  : msg_(msg)
  {}
  Init_RetrieveRawDataResponse_logpoint_is_set logpoint(::bosdyn_msgs::msg::RetrieveRawDataResponse::_logpoint_type arg)
  {
    msg_.logpoint = std::move(arg);
    return Init_RetrieveRawDataResponse_logpoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveRawDataResponse msg_;
};

class Init_RetrieveRawDataResponse_header_is_set
{
public:
  explicit Init_RetrieveRawDataResponse_header_is_set(::bosdyn_msgs::msg::RetrieveRawDataResponse & msg)
  : msg_(msg)
  {}
  Init_RetrieveRawDataResponse_logpoint header_is_set(::bosdyn_msgs::msg::RetrieveRawDataResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RetrieveRawDataResponse_logpoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveRawDataResponse msg_;
};

class Init_RetrieveRawDataResponse_header
{
public:
  Init_RetrieveRawDataResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RetrieveRawDataResponse_header_is_set header(::bosdyn_msgs::msg::RetrieveRawDataResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RetrieveRawDataResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RetrieveRawDataResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RetrieveRawDataResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RetrieveRawDataResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RETRIEVE_RAW_DATA_RESPONSE__BUILDER_HPP_
