// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CustomParamCollection.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/custom_param_collection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CustomParamCollection_values_is_set
{
public:
  explicit Init_CustomParamCollection_values_is_set(::bosdyn_msgs::msg::CustomParamCollection & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CustomParamCollection values_is_set(::bosdyn_msgs::msg::CustomParamCollection::_values_is_set_type arg)
  {
    msg_.values_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamCollection msg_;
};

class Init_CustomParamCollection_values
{
public:
  explicit Init_CustomParamCollection_values(::bosdyn_msgs::msg::CustomParamCollection & msg)
  : msg_(msg)
  {}
  Init_CustomParamCollection_values_is_set values(::bosdyn_msgs::msg::CustomParamCollection::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_CustomParamCollection_values_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamCollection msg_;
};

class Init_CustomParamCollection_specs_is_set
{
public:
  explicit Init_CustomParamCollection_specs_is_set(::bosdyn_msgs::msg::CustomParamCollection & msg)
  : msg_(msg)
  {}
  Init_CustomParamCollection_values specs_is_set(::bosdyn_msgs::msg::CustomParamCollection::_specs_is_set_type arg)
  {
    msg_.specs_is_set = std::move(arg);
    return Init_CustomParamCollection_values(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamCollection msg_;
};

class Init_CustomParamCollection_specs
{
public:
  Init_CustomParamCollection_specs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomParamCollection_specs_is_set specs(::bosdyn_msgs::msg::CustomParamCollection::_specs_type arg)
  {
    msg_.specs = std::move(arg);
    return Init_CustomParamCollection_specs_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CustomParamCollection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CustomParamCollection>()
{
  return bosdyn_msgs::msg::builder::Init_CustomParamCollection_specs();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__BUILDER_HPP_
