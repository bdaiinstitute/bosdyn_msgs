// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataQueryParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'query'
#include "bosdyn_msgs/msg/detail/data_query_params_one_of_query__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataQueryParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataQueryParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataQueryParams_
{
  using Type = DataQueryParams_<ContainerAllocator>;

  explicit DataQueryParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : query(_init)
  {
    (void)_init;
  }

  explicit DataQueryParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : query(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _query_type =
    bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator>;
  _query_type query;

  // setters for named parameter idiom
  Type & set__query(
    const bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator> & _arg)
  {
    this->query = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataQueryParams
    std::shared_ptr<bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataQueryParams
    std::shared_ptr<bosdyn_msgs::msg::DataQueryParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataQueryParams_ & other) const
  {
    if (this->query != other.query) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataQueryParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataQueryParams_

// alias to use template instance with default allocator
using DataQueryParams =
  bosdyn_msgs::msg::DataQueryParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS__STRUCT_HPP_
