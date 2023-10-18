// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AcquisitionRequestList.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_REQUEST_LIST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_REQUEST_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/acquisition_request_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AcquisitionRequestList_network_compute_captures
{
public:
  explicit Init_AcquisitionRequestList_network_compute_captures(::bosdyn_msgs::msg::AcquisitionRequestList & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AcquisitionRequestList network_compute_captures(::bosdyn_msgs::msg::AcquisitionRequestList::_network_compute_captures_type arg)
  {
    msg_.network_compute_captures = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquisitionRequestList msg_;
};

class Init_AcquisitionRequestList_data_captures
{
public:
  explicit Init_AcquisitionRequestList_data_captures(::bosdyn_msgs::msg::AcquisitionRequestList & msg)
  : msg_(msg)
  {}
  Init_AcquisitionRequestList_network_compute_captures data_captures(::bosdyn_msgs::msg::AcquisitionRequestList::_data_captures_type arg)
  {
    msg_.data_captures = std::move(arg);
    return Init_AcquisitionRequestList_network_compute_captures(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquisitionRequestList msg_;
};

class Init_AcquisitionRequestList_image_captures
{
public:
  Init_AcquisitionRequestList_image_captures()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquisitionRequestList_data_captures image_captures(::bosdyn_msgs::msg::AcquisitionRequestList::_image_captures_type arg)
  {
    msg_.image_captures = std::move(arg);
    return Init_AcquisitionRequestList_data_captures(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquisitionRequestList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AcquisitionRequestList>()
{
  return bosdyn_msgs::msg::builder::Init_AcquisitionRequestList_image_captures();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_REQUEST_LIST__BUILDER_HPP_
