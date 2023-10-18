// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LocalGrid.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/local_grid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalGrid_cell_value_offset
{
public:
  explicit Init_LocalGrid_cell_value_offset(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LocalGrid cell_value_offset(::bosdyn_msgs::msg::LocalGrid::_cell_value_offset_type arg)
  {
    msg_.cell_value_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_cell_value_scale
{
public:
  explicit Init_LocalGrid_cell_value_scale(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_cell_value_offset cell_value_scale(::bosdyn_msgs::msg::LocalGrid::_cell_value_scale_type arg)
  {
    msg_.cell_value_scale = std::move(arg);
    return Init_LocalGrid_cell_value_offset(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_rle_counts
{
public:
  explicit Init_LocalGrid_rle_counts(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_cell_value_scale rle_counts(::bosdyn_msgs::msg::LocalGrid::_rle_counts_type arg)
  {
    msg_.rle_counts = std::move(arg);
    return Init_LocalGrid_cell_value_scale(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_data
{
public:
  explicit Init_LocalGrid_data(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_rle_counts data(::bosdyn_msgs::msg::LocalGrid::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_LocalGrid_rle_counts(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_encoding
{
public:
  explicit Init_LocalGrid_encoding(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_data encoding(::bosdyn_msgs::msg::LocalGrid::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_LocalGrid_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_cell_format
{
public:
  explicit Init_LocalGrid_cell_format(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_encoding cell_format(::bosdyn_msgs::msg::LocalGrid::_cell_format_type arg)
  {
    msg_.cell_format = std::move(arg);
    return Init_LocalGrid_encoding(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_extent_is_set
{
public:
  explicit Init_LocalGrid_extent_is_set(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_cell_format extent_is_set(::bosdyn_msgs::msg::LocalGrid::_extent_is_set_type arg)
  {
    msg_.extent_is_set = std::move(arg);
    return Init_LocalGrid_cell_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_extent
{
public:
  explicit Init_LocalGrid_extent(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_extent_is_set extent(::bosdyn_msgs::msg::LocalGrid::_extent_type arg)
  {
    msg_.extent = std::move(arg);
    return Init_LocalGrid_extent_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_frame_name_local_grid_data
{
public:
  explicit Init_LocalGrid_frame_name_local_grid_data(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_extent frame_name_local_grid_data(::bosdyn_msgs::msg::LocalGrid::_frame_name_local_grid_data_type arg)
  {
    msg_.frame_name_local_grid_data = std::move(arg);
    return Init_LocalGrid_extent(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_transforms_snapshot_is_set
{
public:
  explicit Init_LocalGrid_transforms_snapshot_is_set(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_frame_name_local_grid_data transforms_snapshot_is_set(::bosdyn_msgs::msg::LocalGrid::_transforms_snapshot_is_set_type arg)
  {
    msg_.transforms_snapshot_is_set = std::move(arg);
    return Init_LocalGrid_frame_name_local_grid_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_transforms_snapshot
{
public:
  explicit Init_LocalGrid_transforms_snapshot(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_transforms_snapshot_is_set transforms_snapshot(::bosdyn_msgs::msg::LocalGrid::_transforms_snapshot_type arg)
  {
    msg_.transforms_snapshot = std::move(arg);
    return Init_LocalGrid_transforms_snapshot_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_acquisition_time_is_set
{
public:
  explicit Init_LocalGrid_acquisition_time_is_set(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_transforms_snapshot acquisition_time_is_set(::bosdyn_msgs::msg::LocalGrid::_acquisition_time_is_set_type arg)
  {
    msg_.acquisition_time_is_set = std::move(arg);
    return Init_LocalGrid_transforms_snapshot(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_acquisition_time
{
public:
  explicit Init_LocalGrid_acquisition_time(::bosdyn_msgs::msg::LocalGrid & msg)
  : msg_(msg)
  {}
  Init_LocalGrid_acquisition_time_is_set acquisition_time(::bosdyn_msgs::msg::LocalGrid::_acquisition_time_type arg)
  {
    msg_.acquisition_time = std::move(arg);
    return Init_LocalGrid_acquisition_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

class Init_LocalGrid_local_grid_type_name
{
public:
  Init_LocalGrid_local_grid_type_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalGrid_acquisition_time local_grid_type_name(::bosdyn_msgs::msg::LocalGrid::_local_grid_type_name_type arg)
  {
    msg_.local_grid_type_name = std::move(arg);
    return Init_LocalGrid_acquisition_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGrid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LocalGrid>()
{
  return bosdyn_msgs::msg::builder::Init_LocalGrid_local_grid_type_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID__BUILDER_HPP_
