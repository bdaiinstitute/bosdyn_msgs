// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SeriesDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/series_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SeriesDescriptor_description
{
public:
  explicit Init_SeriesDescriptor_description(::bosdyn_msgs::msg::SeriesDescriptor & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SeriesDescriptor description(::bosdyn_msgs::msg::SeriesDescriptor::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptor msg_;
};

class Init_SeriesDescriptor_additional_index_names
{
public:
  explicit Init_SeriesDescriptor_additional_index_names(::bosdyn_msgs::msg::SeriesDescriptor & msg)
  : msg_(msg)
  {}
  Init_SeriesDescriptor_description additional_index_names(::bosdyn_msgs::msg::SeriesDescriptor::_additional_index_names_type arg)
  {
    msg_.additional_index_names = std::move(arg);
    return Init_SeriesDescriptor_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptor msg_;
};

class Init_SeriesDescriptor_annotations
{
public:
  explicit Init_SeriesDescriptor_annotations(::bosdyn_msgs::msg::SeriesDescriptor & msg)
  : msg_(msg)
  {}
  Init_SeriesDescriptor_additional_index_names annotations(::bosdyn_msgs::msg::SeriesDescriptor::_annotations_type arg)
  {
    msg_.annotations = std::move(arg);
    return Init_SeriesDescriptor_additional_index_names(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptor msg_;
};

class Init_SeriesDescriptor_data_type
{
public:
  explicit Init_SeriesDescriptor_data_type(::bosdyn_msgs::msg::SeriesDescriptor & msg)
  : msg_(msg)
  {}
  Init_SeriesDescriptor_annotations data_type(::bosdyn_msgs::msg::SeriesDescriptor::_data_type_type arg)
  {
    msg_.data_type = std::move(arg);
    return Init_SeriesDescriptor_annotations(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptor msg_;
};

class Init_SeriesDescriptor_identifier_hash
{
public:
  explicit Init_SeriesDescriptor_identifier_hash(::bosdyn_msgs::msg::SeriesDescriptor & msg)
  : msg_(msg)
  {}
  Init_SeriesDescriptor_data_type identifier_hash(::bosdyn_msgs::msg::SeriesDescriptor::_identifier_hash_type arg)
  {
    msg_.identifier_hash = std::move(arg);
    return Init_SeriesDescriptor_data_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptor msg_;
};

class Init_SeriesDescriptor_series_identifier_is_set
{
public:
  explicit Init_SeriesDescriptor_series_identifier_is_set(::bosdyn_msgs::msg::SeriesDescriptor & msg)
  : msg_(msg)
  {}
  Init_SeriesDescriptor_identifier_hash series_identifier_is_set(::bosdyn_msgs::msg::SeriesDescriptor::_series_identifier_is_set_type arg)
  {
    msg_.series_identifier_is_set = std::move(arg);
    return Init_SeriesDescriptor_identifier_hash(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptor msg_;
};

class Init_SeriesDescriptor_series_identifier
{
public:
  explicit Init_SeriesDescriptor_series_identifier(::bosdyn_msgs::msg::SeriesDescriptor & msg)
  : msg_(msg)
  {}
  Init_SeriesDescriptor_series_identifier_is_set series_identifier(::bosdyn_msgs::msg::SeriesDescriptor::_series_identifier_type arg)
  {
    msg_.series_identifier = std::move(arg);
    return Init_SeriesDescriptor_series_identifier_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptor msg_;
};

class Init_SeriesDescriptor_series_index
{
public:
  Init_SeriesDescriptor_series_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SeriesDescriptor_series_identifier series_index(::bosdyn_msgs::msg::SeriesDescriptor::_series_index_type arg)
  {
    msg_.series_index = std::move(arg);
    return Init_SeriesDescriptor_series_identifier(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SeriesDescriptor>()
{
  return bosdyn_msgs::msg::builder::Init_SeriesDescriptor_series_index();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__BUILDER_HPP_
