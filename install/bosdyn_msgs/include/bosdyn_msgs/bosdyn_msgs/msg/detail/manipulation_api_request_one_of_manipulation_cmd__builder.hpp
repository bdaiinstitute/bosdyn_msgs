// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ManipulationApiRequestOneOfManipulationCmd.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST_ONE_OF_MANIPULATION_CMD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST_ONE_OF_MANIPULATION_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/manipulation_api_request_one_of_manipulation_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ManipulationApiRequestOneOfManipulationCmd_manipulation_cmd_choice
{
public:
  explicit Init_ManipulationApiRequestOneOfManipulationCmd_manipulation_cmd_choice(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd manipulation_cmd_choice(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd::_manipulation_cmd_choice_type arg)
  {
    msg_.manipulation_cmd_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd msg_;
};

class Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_execute_plan
{
public:
  explicit Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_execute_plan(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiRequestOneOfManipulationCmd_manipulation_cmd_choice pick_object_execute_plan(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd::_pick_object_execute_plan_type arg)
  {
    msg_.pick_object_execute_plan = std::move(arg);
    return Init_ManipulationApiRequestOneOfManipulationCmd_manipulation_cmd_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd msg_;
};

class Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_ray_in_world
{
public:
  explicit Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_ray_in_world(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_execute_plan pick_object_ray_in_world(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd::_pick_object_ray_in_world_type arg)
  {
    msg_.pick_object_ray_in_world = std::move(arg);
    return Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_execute_plan(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd msg_;
};

class Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_in_image
{
public:
  explicit Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_in_image(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_ray_in_world pick_object_in_image(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd::_pick_object_in_image_type arg)
  {
    msg_.pick_object_in_image = std::move(arg);
    return Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_ray_in_world(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd msg_;
};

class Init_ManipulationApiRequestOneOfManipulationCmd_pick_object
{
public:
  explicit Init_ManipulationApiRequestOneOfManipulationCmd_pick_object(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_in_image pick_object(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd::_pick_object_type arg)
  {
    msg_.pick_object = std::move(arg);
    return Init_ManipulationApiRequestOneOfManipulationCmd_pick_object_in_image(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd msg_;
};

class Init_ManipulationApiRequestOneOfManipulationCmd_walk_to_object_in_image
{
public:
  explicit Init_ManipulationApiRequestOneOfManipulationCmd_walk_to_object_in_image(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd & msg)
  : msg_(msg)
  {}
  Init_ManipulationApiRequestOneOfManipulationCmd_pick_object walk_to_object_in_image(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd::_walk_to_object_in_image_type arg)
  {
    msg_.walk_to_object_in_image = std::move(arg);
    return Init_ManipulationApiRequestOneOfManipulationCmd_pick_object(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd msg_;
};

class Init_ManipulationApiRequestOneOfManipulationCmd_walk_to_object_ray_in_world
{
public:
  Init_ManipulationApiRequestOneOfManipulationCmd_walk_to_object_ray_in_world()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManipulationApiRequestOneOfManipulationCmd_walk_to_object_in_image walk_to_object_ray_in_world(::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd::_walk_to_object_ray_in_world_type arg)
  {
    msg_.walk_to_object_ray_in_world = std::move(arg);
    return Init_ManipulationApiRequestOneOfManipulationCmd_walk_to_object_in_image(msg_);
  }

private:
  ::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd>()
{
  return bosdyn_msgs::msg::builder::Init_ManipulationApiRequestOneOfManipulationCmd_walk_to_object_ray_in_world();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST_ONE_OF_MANIPULATION_CMD__BUILDER_HPP_
