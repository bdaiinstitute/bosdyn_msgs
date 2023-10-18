// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CancelAcquisitionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CANCEL_ACQUISITION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CANCEL_ACQUISITION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/cancel_acquisition_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CancelAcquisitionRequest_request_id
{
public:
  explicit Init_CancelAcquisitionRequest_request_id(::bosdyn_msgs::msg::CancelAcquisitionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CancelAcquisitionRequest request_id(::bosdyn_msgs::msg::CancelAcquisitionRequest::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CancelAcquisitionRequest msg_;
};

class Init_CancelAcquisitionRequest_header_is_set
{
public:
  explicit Init_CancelAcquisitionRequest_header_is_set(::bosdyn_msgs::msg::CancelAcquisitionRequest & msg)
  : msg_(msg)
  {}
  Init_CancelAcquisitionRequest_request_id header_is_set(::bosdyn_msgs::msg::CancelAcquisitionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CancelAcquisitionRequest_request_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::CancelAcquisitionRequest msg_;
};

class Init_CancelAcquisitionRequest_header
{
public:
  Init_CancelAcquisitionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CancelAcquisitionRequest_header_is_set header(::bosdyn_msgs::msg::CancelAcquisitionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CancelAcquisitionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CancelAcquisitionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CancelAcquisitionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_CancelAcquisitionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CANCEL_ACQUISITION_REQUEST__BUILDER_HPP_
