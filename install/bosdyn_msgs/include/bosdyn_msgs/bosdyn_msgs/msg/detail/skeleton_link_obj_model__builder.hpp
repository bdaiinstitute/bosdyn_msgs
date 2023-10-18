// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SkeletonLinkObjModel.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/skeleton_link_obj_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SkeletonLinkObjModel_file_contents
{
public:
  explicit Init_SkeletonLinkObjModel_file_contents(::bosdyn_msgs::msg::SkeletonLinkObjModel & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SkeletonLinkObjModel file_contents(::bosdyn_msgs::msg::SkeletonLinkObjModel::_file_contents_type arg)
  {
    msg_.file_contents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SkeletonLinkObjModel msg_;
};

class Init_SkeletonLinkObjModel_file_name
{
public:
  Init_SkeletonLinkObjModel_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkeletonLinkObjModel_file_contents file_name(::bosdyn_msgs::msg::SkeletonLinkObjModel::_file_name_type arg)
  {
    msg_.file_name = std::move(arg);
    return Init_SkeletonLinkObjModel_file_contents(msg_);
  }

private:
  ::bosdyn_msgs::msg::SkeletonLinkObjModel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SkeletonLinkObjModel>()
{
  return bosdyn_msgs::msg::builder::Init_SkeletonLinkObjModel_file_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__BUILDER_HPP_
