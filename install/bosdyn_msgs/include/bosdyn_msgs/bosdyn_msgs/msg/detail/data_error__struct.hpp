// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data_id'
#include "bosdyn_msgs/msg/detail/data_identifier__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataError __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataError __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataError_
{
  using Type = DataError_<ContainerAllocator>;

  explicit DataError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_id_is_set = false;
      this->error_message = "";
    }
  }

  explicit DataError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data_id(_alloc, _init),
    error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_id_is_set = false;
      this->error_message = "";
    }
  }

  // field types and members
  using _data_id_type =
    bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>;
  _data_id_type data_id;
  using _data_id_is_set_type =
    bool;
  _data_id_is_set_type data_id_is_set;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;

  // setters for named parameter idiom
  Type & set__data_id(
    const bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator> & _arg)
  {
    this->data_id = _arg;
    return *this;
  }
  Type & set__data_id_is_set(
    const bool & _arg)
  {
    this->data_id_is_set = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataError_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataError
    std::shared_ptr<bosdyn_msgs::msg::DataError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataError
    std::shared_ptr<bosdyn_msgs::msg::DataError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataError_ & other) const
  {
    if (this->data_id != other.data_id) {
      return false;
    }
    if (this->data_id_is_set != other.data_id_is_set) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataError_

// alias to use template instance with default allocator
using DataError =
  bosdyn_msgs::msg::DataError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__STRUCT_HPP_
