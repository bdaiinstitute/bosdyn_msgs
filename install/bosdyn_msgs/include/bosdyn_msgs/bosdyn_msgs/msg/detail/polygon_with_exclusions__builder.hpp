// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PolygonWithExclusions.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POLYGON_WITH_EXCLUSIONS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POLYGON_WITH_EXCLUSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/polygon_with_exclusions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PolygonWithExclusions_exclusions
{
public:
  explicit Init_PolygonWithExclusions_exclusions(::bosdyn_msgs::msg::PolygonWithExclusions & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PolygonWithExclusions exclusions(::bosdyn_msgs::msg::PolygonWithExclusions::_exclusions_type arg)
  {
    msg_.exclusions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PolygonWithExclusions msg_;
};

class Init_PolygonWithExclusions_inclusion_is_set
{
public:
  explicit Init_PolygonWithExclusions_inclusion_is_set(::bosdyn_msgs::msg::PolygonWithExclusions & msg)
  : msg_(msg)
  {}
  Init_PolygonWithExclusions_exclusions inclusion_is_set(::bosdyn_msgs::msg::PolygonWithExclusions::_inclusion_is_set_type arg)
  {
    msg_.inclusion_is_set = std::move(arg);
    return Init_PolygonWithExclusions_exclusions(msg_);
  }

private:
  ::bosdyn_msgs::msg::PolygonWithExclusions msg_;
};

class Init_PolygonWithExclusions_inclusion
{
public:
  Init_PolygonWithExclusions_inclusion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PolygonWithExclusions_inclusion_is_set inclusion(::bosdyn_msgs::msg::PolygonWithExclusions::_inclusion_type arg)
  {
    msg_.inclusion = std::move(arg);
    return Init_PolygonWithExclusions_inclusion_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PolygonWithExclusions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PolygonWithExclusions>()
{
  return bosdyn_msgs::msg::builder::Init_PolygonWithExclusions_inclusion();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POLYGON_WITH_EXCLUSIONS__BUILDER_HPP_
