// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AssociatedMetadata.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_METADATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/associated_metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AssociatedMetadata_metadata_is_set
{
public:
  explicit Init_AssociatedMetadata_metadata_is_set(::bosdyn_msgs::msg::AssociatedMetadata & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AssociatedMetadata metadata_is_set(::bosdyn_msgs::msg::AssociatedMetadata::_metadata_is_set_type arg)
  {
    msg_.metadata_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AssociatedMetadata msg_;
};

class Init_AssociatedMetadata_metadata
{
public:
  explicit Init_AssociatedMetadata_metadata(::bosdyn_msgs::msg::AssociatedMetadata & msg)
  : msg_(msg)
  {}
  Init_AssociatedMetadata_metadata_is_set metadata(::bosdyn_msgs::msg::AssociatedMetadata::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_AssociatedMetadata_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AssociatedMetadata msg_;
};

class Init_AssociatedMetadata_reference_id_is_set
{
public:
  explicit Init_AssociatedMetadata_reference_id_is_set(::bosdyn_msgs::msg::AssociatedMetadata & msg)
  : msg_(msg)
  {}
  Init_AssociatedMetadata_metadata reference_id_is_set(::bosdyn_msgs::msg::AssociatedMetadata::_reference_id_is_set_type arg)
  {
    msg_.reference_id_is_set = std::move(arg);
    return Init_AssociatedMetadata_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::AssociatedMetadata msg_;
};

class Init_AssociatedMetadata_reference_id
{
public:
  Init_AssociatedMetadata_reference_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssociatedMetadata_reference_id_is_set reference_id(::bosdyn_msgs::msg::AssociatedMetadata::_reference_id_type arg)
  {
    msg_.reference_id = std::move(arg);
    return Init_AssociatedMetadata_reference_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AssociatedMetadata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AssociatedMetadata>()
{
  return bosdyn_msgs::msg::builder::Init_AssociatedMetadata_reference_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_METADATA__BUILDER_HPP_
