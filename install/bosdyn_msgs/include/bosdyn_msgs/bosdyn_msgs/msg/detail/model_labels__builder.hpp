// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ModelLabels.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODEL_LABELS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MODEL_LABELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/model_labels__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ModelLabels_available_labels
{
public:
  explicit Init_ModelLabels_available_labels(::bosdyn_msgs::msg::ModelLabels & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ModelLabels available_labels(::bosdyn_msgs::msg::ModelLabels::_available_labels_type arg)
  {
    msg_.available_labels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModelLabels msg_;
};

class Init_ModelLabels_model_name
{
public:
  Init_ModelLabels_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModelLabels_available_labels model_name(::bosdyn_msgs::msg::ModelLabels::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_ModelLabels_available_labels(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModelLabels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ModelLabels>()
{
  return bosdyn_msgs::msg::builder::Init_ModelLabels_model_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODEL_LABELS__BUILDER_HPP_
