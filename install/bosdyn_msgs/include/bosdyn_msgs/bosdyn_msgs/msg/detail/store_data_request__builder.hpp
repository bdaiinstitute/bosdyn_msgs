// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreDataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_DATA_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_DATA_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_data_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreDataRequest_file_extension
{
public:
  explicit Init_StoreDataRequest_file_extension(::bosdyn_msgs::msg::StoreDataRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreDataRequest file_extension(::bosdyn_msgs::msg::StoreDataRequest::_file_extension_type arg)
  {
    msg_.file_extension = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreDataRequest msg_;
};

class Init_StoreDataRequest_data_id_is_set
{
public:
  explicit Init_StoreDataRequest_data_id_is_set(::bosdyn_msgs::msg::StoreDataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreDataRequest_file_extension data_id_is_set(::bosdyn_msgs::msg::StoreDataRequest::_data_id_is_set_type arg)
  {
    msg_.data_id_is_set = std::move(arg);
    return Init_StoreDataRequest_file_extension(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreDataRequest msg_;
};

class Init_StoreDataRequest_data_id
{
public:
  explicit Init_StoreDataRequest_data_id(::bosdyn_msgs::msg::StoreDataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreDataRequest_data_id_is_set data_id(::bosdyn_msgs::msg::StoreDataRequest::_data_id_type arg)
  {
    msg_.data_id = std::move(arg);
    return Init_StoreDataRequest_data_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreDataRequest msg_;
};

class Init_StoreDataRequest_data
{
public:
  explicit Init_StoreDataRequest_data(::bosdyn_msgs::msg::StoreDataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreDataRequest_data_id data(::bosdyn_msgs::msg::StoreDataRequest::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_StoreDataRequest_data_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreDataRequest msg_;
};

class Init_StoreDataRequest_header_is_set
{
public:
  explicit Init_StoreDataRequest_header_is_set(::bosdyn_msgs::msg::StoreDataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreDataRequest_data header_is_set(::bosdyn_msgs::msg::StoreDataRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StoreDataRequest_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreDataRequest msg_;
};

class Init_StoreDataRequest_header
{
public:
  Init_StoreDataRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreDataRequest_header_is_set header(::bosdyn_msgs::msg::StoreDataRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StoreDataRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreDataRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreDataRequest>()
{
  return bosdyn_msgs::msg::builder::Init_StoreDataRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_DATA_REQUEST__BUILDER_HPP_
