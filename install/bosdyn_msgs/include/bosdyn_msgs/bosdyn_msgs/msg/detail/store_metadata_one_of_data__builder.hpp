// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreMetadataOneOfData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_ONE_OF_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_ONE_OF_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_metadata_one_of_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreMetadataOneOfData_data_choice
{
public:
  explicit Init_StoreMetadataOneOfData_data_choice(::bosdyn_msgs::msg::StoreMetadataOneOfData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreMetadataOneOfData data_choice(::bosdyn_msgs::msg::StoreMetadataOneOfData::_data_choice_type arg)
  {
    msg_.data_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadataOneOfData msg_;
};

class Init_StoreMetadataOneOfData_metadata_name
{
public:
  Init_StoreMetadataOneOfData_metadata_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreMetadataOneOfData_data_choice metadata_name(::bosdyn_msgs::msg::StoreMetadataOneOfData::_metadata_name_type arg)
  {
    msg_.metadata_name = std::move(arg);
    return Init_StoreMetadataOneOfData_data_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadataOneOfData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreMetadataOneOfData>()
{
  return bosdyn_msgs::msg::builder::Init_StoreMetadataOneOfData_metadata_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_ONE_OF_DATA__BUILDER_HPP_
