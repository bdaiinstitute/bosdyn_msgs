// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MomentOfIntertia.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOMENT_OF_INTERTIA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOMENT_OF_INTERTIA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/moment_of_intertia__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MomentOfIntertia_yz
{
public:
  explicit Init_MomentOfIntertia_yz(::bosdyn_msgs::msg::MomentOfIntertia & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MomentOfIntertia yz(::bosdyn_msgs::msg::MomentOfIntertia::_yz_type arg)
  {
    msg_.yz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MomentOfIntertia msg_;
};

class Init_MomentOfIntertia_xz
{
public:
  explicit Init_MomentOfIntertia_xz(::bosdyn_msgs::msg::MomentOfIntertia & msg)
  : msg_(msg)
  {}
  Init_MomentOfIntertia_yz xz(::bosdyn_msgs::msg::MomentOfIntertia::_xz_type arg)
  {
    msg_.xz = std::move(arg);
    return Init_MomentOfIntertia_yz(msg_);
  }

private:
  ::bosdyn_msgs::msg::MomentOfIntertia msg_;
};

class Init_MomentOfIntertia_xy
{
public:
  explicit Init_MomentOfIntertia_xy(::bosdyn_msgs::msg::MomentOfIntertia & msg)
  : msg_(msg)
  {}
  Init_MomentOfIntertia_xz xy(::bosdyn_msgs::msg::MomentOfIntertia::_xy_type arg)
  {
    msg_.xy = std::move(arg);
    return Init_MomentOfIntertia_xz(msg_);
  }

private:
  ::bosdyn_msgs::msg::MomentOfIntertia msg_;
};

class Init_MomentOfIntertia_zz
{
public:
  explicit Init_MomentOfIntertia_zz(::bosdyn_msgs::msg::MomentOfIntertia & msg)
  : msg_(msg)
  {}
  Init_MomentOfIntertia_xy zz(::bosdyn_msgs::msg::MomentOfIntertia::_zz_type arg)
  {
    msg_.zz = std::move(arg);
    return Init_MomentOfIntertia_xy(msg_);
  }

private:
  ::bosdyn_msgs::msg::MomentOfIntertia msg_;
};

class Init_MomentOfIntertia_yy
{
public:
  explicit Init_MomentOfIntertia_yy(::bosdyn_msgs::msg::MomentOfIntertia & msg)
  : msg_(msg)
  {}
  Init_MomentOfIntertia_zz yy(::bosdyn_msgs::msg::MomentOfIntertia::_yy_type arg)
  {
    msg_.yy = std::move(arg);
    return Init_MomentOfIntertia_zz(msg_);
  }

private:
  ::bosdyn_msgs::msg::MomentOfIntertia msg_;
};

class Init_MomentOfIntertia_xx
{
public:
  Init_MomentOfIntertia_xx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MomentOfIntertia_yy xx(::bosdyn_msgs::msg::MomentOfIntertia::_xx_type arg)
  {
    msg_.xx = std::move(arg);
    return Init_MomentOfIntertia_yy(msg_);
  }

private:
  ::bosdyn_msgs::msg::MomentOfIntertia msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MomentOfIntertia>()
{
  return bosdyn_msgs::msg::builder::Init_MomentOfIntertia_xx();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOMENT_OF_INTERTIA__BUILDER_HPP_
