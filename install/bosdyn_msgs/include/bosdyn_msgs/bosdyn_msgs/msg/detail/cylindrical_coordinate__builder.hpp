// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CylindricalCoordinate.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CYLINDRICAL_COORDINATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CYLINDRICAL_COORDINATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/cylindrical_coordinate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CylindricalCoordinate_z
{
public:
  explicit Init_CylindricalCoordinate_z(::bosdyn_msgs::msg::CylindricalCoordinate & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CylindricalCoordinate z(::bosdyn_msgs::msg::CylindricalCoordinate::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CylindricalCoordinate msg_;
};

class Init_CylindricalCoordinate_theta
{
public:
  explicit Init_CylindricalCoordinate_theta(::bosdyn_msgs::msg::CylindricalCoordinate & msg)
  : msg_(msg)
  {}
  Init_CylindricalCoordinate_z theta(::bosdyn_msgs::msg::CylindricalCoordinate::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_CylindricalCoordinate_z(msg_);
  }

private:
  ::bosdyn_msgs::msg::CylindricalCoordinate msg_;
};

class Init_CylindricalCoordinate_r
{
public:
  Init_CylindricalCoordinate_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CylindricalCoordinate_theta r(::bosdyn_msgs::msg::CylindricalCoordinate::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_CylindricalCoordinate_theta(msg_);
  }

private:
  ::bosdyn_msgs::msg::CylindricalCoordinate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CylindricalCoordinate>()
{
  return bosdyn_msgs::msg::builder::Init_CylindricalCoordinate_r();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CYLINDRICAL_COORDINATE__BUILDER_HPP_
