// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GrpcPages.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRPC_PAGES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRPC_PAGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/grpc_pages__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GrpcPages_pages
{
public:
  explicit Init_GrpcPages_pages(::bosdyn_msgs::msg::GrpcPages & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GrpcPages pages(::bosdyn_msgs::msg::GrpcPages::_pages_type arg)
  {
    msg_.pages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GrpcPages msg_;
};

class Init_GrpcPages_spec_is_set
{
public:
  explicit Init_GrpcPages_spec_is_set(::bosdyn_msgs::msg::GrpcPages & msg)
  : msg_(msg)
  {}
  Init_GrpcPages_pages spec_is_set(::bosdyn_msgs::msg::GrpcPages::_spec_is_set_type arg)
  {
    msg_.spec_is_set = std::move(arg);
    return Init_GrpcPages_pages(msg_);
  }

private:
  ::bosdyn_msgs::msg::GrpcPages msg_;
};

class Init_GrpcPages_spec
{
public:
  explicit Init_GrpcPages_spec(::bosdyn_msgs::msg::GrpcPages & msg)
  : msg_(msg)
  {}
  Init_GrpcPages_spec_is_set spec(::bosdyn_msgs::msg::GrpcPages::_spec_type arg)
  {
    msg_.spec = std::move(arg);
    return Init_GrpcPages_spec_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GrpcPages msg_;
};

class Init_GrpcPages_time_range_is_set
{
public:
  explicit Init_GrpcPages_time_range_is_set(::bosdyn_msgs::msg::GrpcPages & msg)
  : msg_(msg)
  {}
  Init_GrpcPages_spec time_range_is_set(::bosdyn_msgs::msg::GrpcPages::_time_range_is_set_type arg)
  {
    msg_.time_range_is_set = std::move(arg);
    return Init_GrpcPages_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::GrpcPages msg_;
};

class Init_GrpcPages_time_range
{
public:
  Init_GrpcPages_time_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GrpcPages_time_range_is_set time_range(::bosdyn_msgs::msg::GrpcPages::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_GrpcPages_time_range_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GrpcPages msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GrpcPages>()
{
  return bosdyn_msgs::msg::builder::Init_GrpcPages_time_range();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRPC_PAGES__BUILDER_HPP_
