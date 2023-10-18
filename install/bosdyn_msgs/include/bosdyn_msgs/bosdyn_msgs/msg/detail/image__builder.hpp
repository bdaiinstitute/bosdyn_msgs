// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Image_pixel_format
{
public:
  explicit Init_Image_pixel_format(::bosdyn_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Image pixel_format(::bosdyn_msgs::msg::Image::_pixel_format_type arg)
  {
    msg_.pixel_format = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Image msg_;
};

class Init_Image_format
{
public:
  explicit Init_Image_format(::bosdyn_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_pixel_format format(::bosdyn_msgs::msg::Image::_format_type arg)
  {
    msg_.format = std::move(arg);
    return Init_Image_pixel_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::Image msg_;
};

class Init_Image_data
{
public:
  explicit Init_Image_data(::bosdyn_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_format data(::bosdyn_msgs::msg::Image::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Image_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::Image msg_;
};

class Init_Image_rows
{
public:
  explicit Init_Image_rows(::bosdyn_msgs::msg::Image & msg)
  : msg_(msg)
  {}
  Init_Image_data rows(::bosdyn_msgs::msg::Image::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_Image_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::Image msg_;
};

class Init_Image_cols
{
public:
  Init_Image_cols()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Image_rows cols(::bosdyn_msgs::msg::Image::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_Image_rows(msg_);
  }

private:
  ::bosdyn_msgs::msg::Image msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Image>()
{
  return bosdyn_msgs::msg::builder::Init_Image_cols();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE__BUILDER_HPP_
