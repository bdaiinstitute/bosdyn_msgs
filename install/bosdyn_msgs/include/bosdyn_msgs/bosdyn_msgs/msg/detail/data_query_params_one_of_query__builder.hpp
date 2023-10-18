// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataQueryParamsOneOfQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS_ONE_OF_QUERY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS_ONE_OF_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_query_params_one_of_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataQueryParamsOneOfQuery_query_choice
{
public:
  explicit Init_DataQueryParamsOneOfQuery_query_choice(::bosdyn_msgs::msg::DataQueryParamsOneOfQuery & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataQueryParamsOneOfQuery query_choice(::bosdyn_msgs::msg::DataQueryParamsOneOfQuery::_query_choice_type arg)
  {
    msg_.query_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQueryParamsOneOfQuery msg_;
};

class Init_DataQueryParamsOneOfQuery_action_ids
{
public:
  explicit Init_DataQueryParamsOneOfQuery_action_ids(::bosdyn_msgs::msg::DataQueryParamsOneOfQuery & msg)
  : msg_(msg)
  {}
  Init_DataQueryParamsOneOfQuery_query_choice action_ids(::bosdyn_msgs::msg::DataQueryParamsOneOfQuery::_action_ids_type arg)
  {
    msg_.action_ids = std::move(arg);
    return Init_DataQueryParamsOneOfQuery_query_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQueryParamsOneOfQuery msg_;
};

class Init_DataQueryParamsOneOfQuery_time_range
{
public:
  Init_DataQueryParamsOneOfQuery_time_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataQueryParamsOneOfQuery_action_ids time_range(::bosdyn_msgs::msg::DataQueryParamsOneOfQuery::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_DataQueryParamsOneOfQuery_action_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataQueryParamsOneOfQuery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataQueryParamsOneOfQuery>()
{
  return bosdyn_msgs::msg::builder::Init_DataQueryParamsOneOfQuery_time_range();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS_ONE_OF_QUERY__BUILDER_HPP_
