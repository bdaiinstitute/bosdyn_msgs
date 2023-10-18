// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EdgeAnnotationsStairData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_STAIR_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_STAIR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/edge_annotations_stair_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EdgeAnnotationsStairData_staircase_with_landings_is_set
{
public:
  explicit Init_EdgeAnnotationsStairData_staircase_with_landings_is_set(::bosdyn_msgs::msg::EdgeAnnotationsStairData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EdgeAnnotationsStairData staircase_with_landings_is_set(::bosdyn_msgs::msg::EdgeAnnotationsStairData::_staircase_with_landings_is_set_type arg)
  {
    msg_.staircase_with_landings_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotationsStairData msg_;
};

class Init_EdgeAnnotationsStairData_staircase_with_landings
{
public:
  explicit Init_EdgeAnnotationsStairData_staircase_with_landings(::bosdyn_msgs::msg::EdgeAnnotationsStairData & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotationsStairData_staircase_with_landings_is_set staircase_with_landings(::bosdyn_msgs::msg::EdgeAnnotationsStairData::_staircase_with_landings_type arg)
  {
    msg_.staircase_with_landings = std::move(arg);
    return Init_EdgeAnnotationsStairData_staircase_with_landings_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotationsStairData msg_;
};

class Init_EdgeAnnotationsStairData_state
{
public:
  Init_EdgeAnnotationsStairData_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EdgeAnnotationsStairData_staircase_with_landings state(::bosdyn_msgs::msg::EdgeAnnotationsStairData::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_EdgeAnnotationsStairData_staircase_with_landings(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotationsStairData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EdgeAnnotationsStairData>()
{
  return bosdyn_msgs::msg::builder::Init_EdgeAnnotationsStairData_state();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_STAIR_DATA__BUILDER_HPP_
