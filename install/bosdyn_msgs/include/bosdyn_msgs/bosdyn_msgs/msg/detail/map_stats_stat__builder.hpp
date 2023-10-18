// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MapStatsStat.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MAP_STATS_STAT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MAP_STATS_STAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/map_stats_stat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MapStatsStat_num_bytes
{
public:
  explicit Init_MapStatsStat_num_bytes(::bosdyn_msgs::msg::MapStatsStat & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MapStatsStat num_bytes(::bosdyn_msgs::msg::MapStatsStat::_num_bytes_type arg)
  {
    msg_.num_bytes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStatsStat msg_;
};

class Init_MapStatsStat_count
{
public:
  Init_MapStatsStat_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapStatsStat_num_bytes count(::bosdyn_msgs::msg::MapStatsStat::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_MapStatsStat_num_bytes(msg_);
  }

private:
  ::bosdyn_msgs::msg::MapStatsStat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MapStatsStat>()
{
  return bosdyn_msgs::msg::builder::Init_MapStatsStat_count();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MAP_STATS_STAT__BUILDER_HPP_
