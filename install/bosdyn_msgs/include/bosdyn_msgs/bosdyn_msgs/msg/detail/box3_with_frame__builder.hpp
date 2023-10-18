// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Box3WithFrame.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOX3_WITH_FRAME__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOX3_WITH_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/box3_with_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Box3WithFrame_frame_name_tform_box_is_set
{
public:
  explicit Init_Box3WithFrame_frame_name_tform_box_is_set(::bosdyn_msgs::msg::Box3WithFrame & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Box3WithFrame frame_name_tform_box_is_set(::bosdyn_msgs::msg::Box3WithFrame::_frame_name_tform_box_is_set_type arg)
  {
    msg_.frame_name_tform_box_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Box3WithFrame msg_;
};

class Init_Box3WithFrame_frame_name_tform_box
{
public:
  explicit Init_Box3WithFrame_frame_name_tform_box(::bosdyn_msgs::msg::Box3WithFrame & msg)
  : msg_(msg)
  {}
  Init_Box3WithFrame_frame_name_tform_box_is_set frame_name_tform_box(::bosdyn_msgs::msg::Box3WithFrame::_frame_name_tform_box_type arg)
  {
    msg_.frame_name_tform_box = std::move(arg);
    return Init_Box3WithFrame_frame_name_tform_box_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Box3WithFrame msg_;
};

class Init_Box3WithFrame_frame_name
{
public:
  explicit Init_Box3WithFrame_frame_name(::bosdyn_msgs::msg::Box3WithFrame & msg)
  : msg_(msg)
  {}
  Init_Box3WithFrame_frame_name_tform_box frame_name(::bosdyn_msgs::msg::Box3WithFrame::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_Box3WithFrame_frame_name_tform_box(msg_);
  }

private:
  ::bosdyn_msgs::msg::Box3WithFrame msg_;
};

class Init_Box3WithFrame_box_is_set
{
public:
  explicit Init_Box3WithFrame_box_is_set(::bosdyn_msgs::msg::Box3WithFrame & msg)
  : msg_(msg)
  {}
  Init_Box3WithFrame_frame_name box_is_set(::bosdyn_msgs::msg::Box3WithFrame::_box_is_set_type arg)
  {
    msg_.box_is_set = std::move(arg);
    return Init_Box3WithFrame_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::Box3WithFrame msg_;
};

class Init_Box3WithFrame_box
{
public:
  Init_Box3WithFrame_box()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Box3WithFrame_box_is_set box(::bosdyn_msgs::msg::Box3WithFrame::_box_type arg)
  {
    msg_.box = std::move(arg);
    return Init_Box3WithFrame_box_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Box3WithFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Box3WithFrame>()
{
  return bosdyn_msgs::msg::builder::Init_Box3WithFrame_box();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOX3_WITH_FRAME__BUILDER_HPP_
