// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StraightStaircaseOneOfLocation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_ONE_OF_LOCATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_ONE_OF_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/straight_staircase_one_of_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StraightStaircaseOneOfLocation_location_choice
{
public:
  explicit Init_StraightStaircaseOneOfLocation_location_choice(::bosdyn_msgs::msg::StraightStaircaseOneOfLocation & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StraightStaircaseOneOfLocation location_choice(::bosdyn_msgs::msg::StraightStaircaseOneOfLocation::_location_choice_type arg)
  {
    msg_.location_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircaseOneOfLocation msg_;
};

class Init_StraightStaircaseOneOfLocation_tform
{
public:
  explicit Init_StraightStaircaseOneOfLocation_tform(::bosdyn_msgs::msg::StraightStaircaseOneOfLocation & msg)
  : msg_(msg)
  {}
  Init_StraightStaircaseOneOfLocation_location_choice tform(::bosdyn_msgs::msg::StraightStaircaseOneOfLocation::_tform_type arg)
  {
    msg_.tform = std::move(arg);
    return Init_StraightStaircaseOneOfLocation_location_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircaseOneOfLocation msg_;
};

class Init_StraightStaircaseOneOfLocation_from_ko_tform_stairs
{
public:
  Init_StraightStaircaseOneOfLocation_from_ko_tform_stairs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StraightStaircaseOneOfLocation_tform from_ko_tform_stairs(::bosdyn_msgs::msg::StraightStaircaseOneOfLocation::_from_ko_tform_stairs_type arg)
  {
    msg_.from_ko_tform_stairs = std::move(arg);
    return Init_StraightStaircaseOneOfLocation_tform(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircaseOneOfLocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StraightStaircaseOneOfLocation>()
{
  return bosdyn_msgs::msg::builder::Init_StraightStaircaseOneOfLocation_from_ko_tform_stairs();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_ONE_OF_LOCATION__BUILDER_HPP_
