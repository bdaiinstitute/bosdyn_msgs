// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LoadMissionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/load_mission_response_status__struct.hpp"
// Member 'lease_use_results'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.hpp"
// Member 'mission_info'
#include "bosdyn_msgs/msg/detail/mission_info__struct.hpp"
// Member 'failed_nodes'
#include "bosdyn_msgs/msg/detail/failed_node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LoadMissionResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LoadMissionResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoadMissionResponse_
{
  using Type = LoadMissionResponse_<ContainerAllocator>;

  explicit LoadMissionResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    mission_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->mission_info_is_set = false;
    }
  }

  explicit LoadMissionResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    mission_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->mission_info_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _status_type =
    bosdyn_msgs::msg::LoadMissionResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _lease_use_results_type =
    std::vector<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>>;
  _lease_use_results_type lease_use_results;
  using _mission_info_type =
    bosdyn_msgs::msg::MissionInfo_<ContainerAllocator>;
  _mission_info_type mission_info;
  using _mission_info_is_set_type =
    bool;
  _mission_info_is_set_type mission_info_is_set;
  using _failed_nodes_type =
    std::vector<bosdyn_msgs::msg::FailedNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::FailedNode_<ContainerAllocator>>>;
  _failed_nodes_type failed_nodes;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
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
  Type & set__status(
    const bosdyn_msgs::msg::LoadMissionResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__lease_use_results(
    const std::vector<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>> & _arg)
  {
    this->lease_use_results = _arg;
    return *this;
  }
  Type & set__mission_info(
    const bosdyn_msgs::msg::MissionInfo_<ContainerAllocator> & _arg)
  {
    this->mission_info = _arg;
    return *this;
  }
  Type & set__mission_info_is_set(
    const bool & _arg)
  {
    this->mission_info_is_set = _arg;
    return *this;
  }
  Type & set__failed_nodes(
    const std::vector<bosdyn_msgs::msg::FailedNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::FailedNode_<ContainerAllocator>>> & _arg)
  {
    this->failed_nodes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LoadMissionResponse
    std::shared_ptr<bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LoadMissionResponse
    std::shared_ptr<bosdyn_msgs::msg::LoadMissionResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadMissionResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->lease_use_results != other.lease_use_results) {
      return false;
    }
    if (this->mission_info != other.mission_info) {
      return false;
    }
    if (this->mission_info_is_set != other.mission_info_is_set) {
      return false;
    }
    if (this->failed_nodes != other.failed_nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadMissionResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadMissionResponse_

// alias to use template instance with default allocator
using LoadMissionResponse =
  bosdyn_msgs::msg::LoadMissionResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_RESPONSE__STRUCT_HPP_
