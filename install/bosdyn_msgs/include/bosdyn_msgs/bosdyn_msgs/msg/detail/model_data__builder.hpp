// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ModelData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/model_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ModelData_custom_params_is_set
{
public:
  explicit Init_ModelData_custom_params_is_set(::bosdyn_msgs::msg::ModelData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ModelData custom_params_is_set(::bosdyn_msgs::msg::ModelData::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModelData msg_;
};

class Init_ModelData_custom_params
{
public:
  explicit Init_ModelData_custom_params(::bosdyn_msgs::msg::ModelData & msg)
  : msg_(msg)
  {}
  Init_ModelData_custom_params_is_set custom_params(::bosdyn_msgs::msg::ModelData::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_ModelData_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModelData msg_;
};

class Init_ModelData_output_image_spec
{
public:
  explicit Init_ModelData_output_image_spec(::bosdyn_msgs::msg::ModelData & msg)
  : msg_(msg)
  {}
  Init_ModelData_custom_params output_image_spec(::bosdyn_msgs::msg::ModelData::_output_image_spec_type arg)
  {
    msg_.output_image_spec = std::move(arg);
    return Init_ModelData_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModelData msg_;
};

class Init_ModelData_available_labels
{
public:
  explicit Init_ModelData_available_labels(::bosdyn_msgs::msg::ModelData & msg)
  : msg_(msg)
  {}
  Init_ModelData_output_image_spec available_labels(::bosdyn_msgs::msg::ModelData::_available_labels_type arg)
  {
    msg_.available_labels = std::move(arg);
    return Init_ModelData_output_image_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModelData msg_;
};

class Init_ModelData_model_name
{
public:
  Init_ModelData_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModelData_available_labels model_name(::bosdyn_msgs::msg::ModelData::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_ModelData_available_labels(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModelData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ModelData>()
{
  return bosdyn_msgs::msg::builder::Init_ModelData_model_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__BUILDER_HPP_
