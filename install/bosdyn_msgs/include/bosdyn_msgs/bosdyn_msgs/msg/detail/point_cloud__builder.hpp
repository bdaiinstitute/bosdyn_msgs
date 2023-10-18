// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloud_data
{
public:
  explicit Init_PointCloud_data(::bosdyn_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PointCloud data(::bosdyn_msgs::msg::PointCloud::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_encoding_parameters_is_set
{
public:
  explicit Init_PointCloud_encoding_parameters_is_set(::bosdyn_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_data encoding_parameters_is_set(::bosdyn_msgs::msg::PointCloud::_encoding_parameters_is_set_type arg)
  {
    msg_.encoding_parameters_is_set = std::move(arg);
    return Init_PointCloud_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_encoding_parameters
{
public:
  explicit Init_PointCloud_encoding_parameters(::bosdyn_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_encoding_parameters_is_set encoding_parameters(::bosdyn_msgs::msg::PointCloud::_encoding_parameters_type arg)
  {
    msg_.encoding_parameters = std::move(arg);
    return Init_PointCloud_encoding_parameters_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_encoding
{
public:
  explicit Init_PointCloud_encoding(::bosdyn_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_encoding_parameters encoding(::bosdyn_msgs::msg::PointCloud::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_PointCloud_encoding_parameters(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_num_points
{
public:
  explicit Init_PointCloud_num_points(::bosdyn_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_encoding num_points(::bosdyn_msgs::msg::PointCloud::_num_points_type arg)
  {
    msg_.num_points = std::move(arg);
    return Init_PointCloud_encoding(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_source_is_set
{
public:
  explicit Init_PointCloud_source_is_set(::bosdyn_msgs::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_num_points source_is_set(::bosdyn_msgs::msg::PointCloud::_source_is_set_type arg)
  {
    msg_.source_is_set = std::move(arg);
    return Init_PointCloud_num_points(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloud msg_;
};

class Init_PointCloud_source
{
public:
  Init_PointCloud_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloud_source_is_set source(::bosdyn_msgs::msg::PointCloud::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_PointCloud_source_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PointCloud>()
{
  return bosdyn_msgs::msg::builder::Init_PointCloud_source();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
