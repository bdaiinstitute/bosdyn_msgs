// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WorkerComputeRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'input_data'
#include "bosdyn_msgs/msg/detail/network_compute_input_data_worker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WorkerComputeRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WorkerComputeRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorkerComputeRequest_
{
  using Type = WorkerComputeRequest_<ContainerAllocator>;

  explicit WorkerComputeRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    input_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->input_data_is_set = false;
    }
  }

  explicit WorkerComputeRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    input_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->input_data_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _input_data_type =
    bosdyn_msgs::msg::NetworkComputeInputDataWorker_<ContainerAllocator>;
  _input_data_type input_data;
  using _input_data_is_set_type =
    bool;
  _input_data_is_set_type input_data_is_set;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__input_data(
    const bosdyn_msgs::msg::NetworkComputeInputDataWorker_<ContainerAllocator> & _arg)
  {
    this->input_data = _arg;
    return *this;
  }
  Type & set__input_data_is_set(
    const bool & _arg)
  {
    this->input_data_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WorkerComputeRequest
    std::shared_ptr<bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WorkerComputeRequest
    std::shared_ptr<bosdyn_msgs::msg::WorkerComputeRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorkerComputeRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->input_data != other.input_data) {
      return false;
    }
    if (this->input_data_is_set != other.input_data_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorkerComputeRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorkerComputeRequest_

// alias to use template instance with default allocator
using WorkerComputeRequest =
  bosdyn_msgs::msg::WorkerComputeRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_REQUEST__STRUCT_HPP_
