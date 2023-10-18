// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LocalGridExtent.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_EXTENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_EXTENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/local_grid_extent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalGridExtent_num_cells_y
{
public:
  explicit Init_LocalGridExtent_num_cells_y(::bosdyn_msgs::msg::LocalGridExtent & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LocalGridExtent num_cells_y(::bosdyn_msgs::msg::LocalGridExtent::_num_cells_y_type arg)
  {
    msg_.num_cells_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGridExtent msg_;
};

class Init_LocalGridExtent_num_cells_x
{
public:
  explicit Init_LocalGridExtent_num_cells_x(::bosdyn_msgs::msg::LocalGridExtent & msg)
  : msg_(msg)
  {}
  Init_LocalGridExtent_num_cells_y num_cells_x(::bosdyn_msgs::msg::LocalGridExtent::_num_cells_x_type arg)
  {
    msg_.num_cells_x = std::move(arg);
    return Init_LocalGridExtent_num_cells_y(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGridExtent msg_;
};

class Init_LocalGridExtent_cell_size
{
public:
  Init_LocalGridExtent_cell_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalGridExtent_num_cells_x cell_size(::bosdyn_msgs::msg::LocalGridExtent::_cell_size_type arg)
  {
    msg_.cell_size = std::move(arg);
    return Init_LocalGridExtent_num_cells_x(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGridExtent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LocalGridExtent>()
{
  return bosdyn_msgs::msg::builder::Init_LocalGridExtent_cell_size();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_EXTENT__BUILDER_HPP_
