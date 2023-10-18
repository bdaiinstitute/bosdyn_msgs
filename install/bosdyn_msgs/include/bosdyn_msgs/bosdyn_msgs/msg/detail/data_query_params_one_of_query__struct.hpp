// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataQueryParamsOneOfQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS_ONE_OF_QUERY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS_ONE_OF_QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range_query__struct.hpp"
// Member 'action_ids'
#include "bosdyn_msgs/msg/detail/action_id_query__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataQueryParamsOneOfQuery __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataQueryParamsOneOfQuery __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataQueryParamsOneOfQuery_
{
  using Type = DataQueryParamsOneOfQuery_<ContainerAllocator>;

  explicit DataQueryParamsOneOfQuery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_init),
    action_ids(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_choice = 0;
    }
  }

  explicit DataQueryParamsOneOfQuery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_alloc, _init),
    action_ids(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_choice = 0;
    }
  }

  // field types and members
  using _time_range_type =
    bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator>;
  _time_range_type time_range;
  using _action_ids_type =
    bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator>;
  _action_ids_type action_ids;
  using _query_choice_type =
    int8_t;
  _query_choice_type query_choice;

  // setters for named parameter idiom
  Type & set__time_range(
    const bosdyn_msgs::msg::TimeRangeQuery_<ContainerAllocator> & _arg)
  {
    this->time_range = _arg;
    return *this;
  }
  Type & set__action_ids(
    const bosdyn_msgs::msg::ActionIdQuery_<ContainerAllocator> & _arg)
  {
    this->action_ids = _arg;
    return *this;
  }
  Type & set__query_choice(
    const int8_t & _arg)
  {
    this->query_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t QUERY_NOT_SET =
    0;
  static constexpr int8_t QUERY_TIME_RANGE_SET =
    1;
  static constexpr int8_t QUERY_ACTION_IDS_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataQueryParamsOneOfQuery
    std::shared_ptr<bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataQueryParamsOneOfQuery
    std::shared_ptr<bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataQueryParamsOneOfQuery_ & other) const
  {
    if (this->time_range != other.time_range) {
      return false;
    }
    if (this->action_ids != other.action_ids) {
      return false;
    }
    if (this->query_choice != other.query_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataQueryParamsOneOfQuery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataQueryParamsOneOfQuery_

// alias to use template instance with default allocator
using DataQueryParamsOneOfQuery =
  bosdyn_msgs::msg::DataQueryParamsOneOfQuery_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DataQueryParamsOneOfQuery_<ContainerAllocator>::QUERY_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DataQueryParamsOneOfQuery_<ContainerAllocator>::QUERY_TIME_RANGE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DataQueryParamsOneOfQuery_<ContainerAllocator>::QUERY_ACTION_IDS_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS_ONE_OF_QUERY__STRUCT_HPP_
