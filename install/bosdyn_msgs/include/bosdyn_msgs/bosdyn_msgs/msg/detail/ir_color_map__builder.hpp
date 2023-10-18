// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/IrColorMap.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ir_color_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_IrColorMap_auto_scale_is_set
{
public:
  explicit Init_IrColorMap_auto_scale_is_set(::bosdyn_msgs::msg::IrColorMap & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::IrColorMap auto_scale_is_set(::bosdyn_msgs::msg::IrColorMap::_auto_scale_is_set_type arg)
  {
    msg_.auto_scale_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrColorMap msg_;
};

class Init_IrColorMap_auto_scale
{
public:
  explicit Init_IrColorMap_auto_scale(::bosdyn_msgs::msg::IrColorMap & msg)
  : msg_(msg)
  {}
  Init_IrColorMap_auto_scale_is_set auto_scale(::bosdyn_msgs::msg::IrColorMap::_auto_scale_type arg)
  {
    msg_.auto_scale = std::move(arg);
    return Init_IrColorMap_auto_scale_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrColorMap msg_;
};

class Init_IrColorMap_scale_is_set
{
public:
  explicit Init_IrColorMap_scale_is_set(::bosdyn_msgs::msg::IrColorMap & msg)
  : msg_(msg)
  {}
  Init_IrColorMap_auto_scale scale_is_set(::bosdyn_msgs::msg::IrColorMap::_scale_is_set_type arg)
  {
    msg_.scale_is_set = std::move(arg);
    return Init_IrColorMap_auto_scale(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrColorMap msg_;
};

class Init_IrColorMap_scale
{
public:
  explicit Init_IrColorMap_scale(::bosdyn_msgs::msg::IrColorMap & msg)
  : msg_(msg)
  {}
  Init_IrColorMap_scale_is_set scale(::bosdyn_msgs::msg::IrColorMap::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_IrColorMap_scale_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrColorMap msg_;
};

class Init_IrColorMap_colormap
{
public:
  Init_IrColorMap_colormap()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrColorMap_scale colormap(::bosdyn_msgs::msg::IrColorMap::_colormap_type arg)
  {
    msg_.colormap = std::move(arg);
    return Init_IrColorMap_scale(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrColorMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::IrColorMap>()
{
  return bosdyn_msgs::msg::builder::Init_IrColorMap_colormap();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP__BUILDER_HPP_
