// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataQueryParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_query_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataQueryParams_query
{
public:
  Init_DataQueryParams_query()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::DataQueryParams query(::bosdyn_msgs::msg::DataQueryParams::_query_type arg)
  {
    msg_.query = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQueryParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataQueryParams>()
{
  return bosdyn_msgs::msg::builder::Init_DataQueryParams_query();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS__BUILDER_HPP_
