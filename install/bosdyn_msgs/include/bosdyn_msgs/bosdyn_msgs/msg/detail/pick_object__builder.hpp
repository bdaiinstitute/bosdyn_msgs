// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PickObject.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/pick_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PickObject_grasp_params_is_set
{
public:
  explicit Init_PickObject_grasp_params_is_set(::bosdyn_msgs::msg::PickObject & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PickObject grasp_params_is_set(::bosdyn_msgs::msg::PickObject::_grasp_params_is_set_type arg)
  {
    msg_.grasp_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObject msg_;
};

class Init_PickObject_grasp_params
{
public:
  explicit Init_PickObject_grasp_params(::bosdyn_msgs::msg::PickObject & msg)
  : msg_(msg)
  {}
  Init_PickObject_grasp_params_is_set grasp_params(::bosdyn_msgs::msg::PickObject::_grasp_params_type arg)
  {
    msg_.grasp_params = std::move(arg);
    return Init_PickObject_grasp_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObject msg_;
};

class Init_PickObject_object_rt_frame_is_set
{
public:
  explicit Init_PickObject_object_rt_frame_is_set(::bosdyn_msgs::msg::PickObject & msg)
  : msg_(msg)
  {}
  Init_PickObject_grasp_params object_rt_frame_is_set(::bosdyn_msgs::msg::PickObject::_object_rt_frame_is_set_type arg)
  {
    msg_.object_rt_frame_is_set = std::move(arg);
    return Init_PickObject_grasp_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObject msg_;
};

class Init_PickObject_object_rt_frame
{
public:
  explicit Init_PickObject_object_rt_frame(::bosdyn_msgs::msg::PickObject & msg)
  : msg_(msg)
  {}
  Init_PickObject_object_rt_frame_is_set object_rt_frame(::bosdyn_msgs::msg::PickObject::_object_rt_frame_type arg)
  {
    msg_.object_rt_frame = std::move(arg);
    return Init_PickObject_object_rt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObject msg_;
};

class Init_PickObject_frame_name
{
public:
  Init_PickObject_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickObject_object_rt_frame frame_name(::bosdyn_msgs::msg::PickObject::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_PickObject_object_rt_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::PickObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PickObject>()
{
  return bosdyn_msgs::msg::builder::Init_PickObject_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PICK_OBJECT__BUILDER_HPP_
