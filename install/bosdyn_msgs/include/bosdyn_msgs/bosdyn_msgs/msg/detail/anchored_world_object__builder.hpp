// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AnchoredWorldObject.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHORED_WORLD_OBJECT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHORED_WORLD_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/anchored_world_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AnchoredWorldObject_seed_tform_object_is_set
{
public:
  explicit Init_AnchoredWorldObject_seed_tform_object_is_set(::bosdyn_msgs::msg::AnchoredWorldObject & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AnchoredWorldObject seed_tform_object_is_set(::bosdyn_msgs::msg::AnchoredWorldObject::_seed_tform_object_is_set_type arg)
  {
    msg_.seed_tform_object_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnchoredWorldObject msg_;
};

class Init_AnchoredWorldObject_seed_tform_object
{
public:
  explicit Init_AnchoredWorldObject_seed_tform_object(::bosdyn_msgs::msg::AnchoredWorldObject & msg)
  : msg_(msg)
  {}
  Init_AnchoredWorldObject_seed_tform_object_is_set seed_tform_object(::bosdyn_msgs::msg::AnchoredWorldObject::_seed_tform_object_type arg)
  {
    msg_.seed_tform_object = std::move(arg);
    return Init_AnchoredWorldObject_seed_tform_object_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnchoredWorldObject msg_;
};

class Init_AnchoredWorldObject_id
{
public:
  Init_AnchoredWorldObject_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnchoredWorldObject_seed_tform_object id(::bosdyn_msgs::msg::AnchoredWorldObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AnchoredWorldObject_seed_tform_object(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnchoredWorldObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AnchoredWorldObject>()
{
  return bosdyn_msgs::msg::builder::Init_AnchoredWorldObject_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHORED_WORLD_OBJECT__BUILDER_HPP_
