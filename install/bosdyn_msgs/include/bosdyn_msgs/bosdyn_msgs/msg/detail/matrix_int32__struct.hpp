// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/MatrixInt32.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MATRIX_INT32__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MATRIX_INT32__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__MatrixInt32 __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__MatrixInt32 __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MatrixInt32_
{
  using Type = MatrixInt32_<ContainerAllocator>;

  explicit MatrixInt32_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0l;
      this->cols = 0l;
    }
  }

  explicit MatrixInt32_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0l;
      this->cols = 0l;
    }
  }

  // field types and members
  using _rows_type =
    int32_t;
  _rows_type rows;
  using _cols_type =
    int32_t;
  _cols_type cols;
  using _values_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _values_type values;

  // setters for named parameter idiom
  Type & set__rows(
    const int32_t & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__cols(
    const int32_t & _arg)
  {
    this->cols = _arg;
    return *this;
  }
  Type & set__values(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__MatrixInt32
    std::shared_ptr<bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__MatrixInt32
    std::shared_ptr<bosdyn_msgs::msg::MatrixInt32_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MatrixInt32_ & other) const
  {
    if (this->rows != other.rows) {
      return false;
    }
    if (this->cols != other.cols) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const MatrixInt32_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MatrixInt32_

// alias to use template instance with default allocator
using MatrixInt32 =
  bosdyn_msgs::msg::MatrixInt32_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MATRIX_INT32__STRUCT_HPP_
