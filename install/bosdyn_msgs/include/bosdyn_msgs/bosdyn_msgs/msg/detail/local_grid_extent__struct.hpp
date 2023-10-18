// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LocalGridExtent.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_EXTENT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_EXTENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LocalGridExtent __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LocalGridExtent __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalGridExtent_
{
  using Type = LocalGridExtent_<ContainerAllocator>;

  explicit LocalGridExtent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_size = 0.0;
      this->num_cells_x = 0l;
      this->num_cells_y = 0l;
    }
  }

  explicit LocalGridExtent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_size = 0.0;
      this->num_cells_x = 0l;
      this->num_cells_y = 0l;
    }
  }

  // field types and members
  using _cell_size_type =
    double;
  _cell_size_type cell_size;
  using _num_cells_x_type =
    int32_t;
  _num_cells_x_type num_cells_x;
  using _num_cells_y_type =
    int32_t;
  _num_cells_y_type num_cells_y;

  // setters for named parameter idiom
  Type & set__cell_size(
    const double & _arg)
  {
    this->cell_size = _arg;
    return *this;
  }
  Type & set__num_cells_x(
    const int32_t & _arg)
  {
    this->num_cells_x = _arg;
    return *this;
  }
  Type & set__num_cells_y(
    const int32_t & _arg)
  {
    this->num_cells_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LocalGridExtent
    std::shared_ptr<bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LocalGridExtent
    std::shared_ptr<bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalGridExtent_ & other) const
  {
    if (this->cell_size != other.cell_size) {
      return false;
    }
    if (this->num_cells_x != other.num_cells_x) {
      return false;
    }
    if (this->num_cells_y != other.num_cells_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalGridExtent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalGridExtent_

// alias to use template instance with default allocator
using LocalGridExtent =
  bosdyn_msgs::msg::LocalGridExtent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_EXTENT__STRUCT_HPP_
