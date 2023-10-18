// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BeginCallbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_REQUEST__STRUCT_HPP_

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
// Member 'region_info'
#include "bosdyn_msgs/msg/detail/region_information__struct.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'recorded_data'
#include "bosdyn_msgs/msg/detail/area_callback_data__struct.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BeginCallbackRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BeginCallbackRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BeginCallbackRequest_
{
  using Type = BeginCallbackRequest_<ContainerAllocator>;

  explicit BeginCallbackRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    region_info(_init),
    end_time(_init),
    recorded_data(_init),
    custom_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->region_info_is_set = false;
      this->end_time_is_set = false;
      this->recorded_data_is_set = false;
      this->custom_params_is_set = false;
    }
  }

  explicit BeginCallbackRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    region_info(_alloc, _init),
    end_time(_alloc, _init),
    recorded_data(_alloc, _init),
    custom_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->region_info_is_set = false;
      this->end_time_is_set = false;
      this->recorded_data_is_set = false;
      this->custom_params_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _region_info_type =
    bosdyn_msgs::msg::RegionInformation_<ContainerAllocator>;
  _region_info_type region_info;
  using _region_info_is_set_type =
    bool;
  _region_info_is_set_type region_info_is_set;
  using _end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_time_type end_time;
  using _end_time_is_set_type =
    bool;
  _end_time_is_set_type end_time_is_set;
  using _recorded_data_type =
    bosdyn_msgs::msg::AreaCallbackData_<ContainerAllocator>;
  _recorded_data_type recorded_data;
  using _recorded_data_is_set_type =
    bool;
  _recorded_data_is_set_type recorded_data_is_set;
  using _custom_params_type =
    bosdyn_msgs::msg::DictParam_<ContainerAllocator>;
  _custom_params_type custom_params;
  using _custom_params_is_set_type =
    bool;
  _custom_params_is_set_type custom_params_is_set;

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
  Type & set__region_info(
    const bosdyn_msgs::msg::RegionInformation_<ContainerAllocator> & _arg)
  {
    this->region_info = _arg;
    return *this;
  }
  Type & set__region_info_is_set(
    const bool & _arg)
  {
    this->region_info_is_set = _arg;
    return *this;
  }
  Type & set__end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__end_time_is_set(
    const bool & _arg)
  {
    this->end_time_is_set = _arg;
    return *this;
  }
  Type & set__recorded_data(
    const bosdyn_msgs::msg::AreaCallbackData_<ContainerAllocator> & _arg)
  {
    this->recorded_data = _arg;
    return *this;
  }
  Type & set__recorded_data_is_set(
    const bool & _arg)
  {
    this->recorded_data_is_set = _arg;
    return *this;
  }
  Type & set__custom_params(
    const bosdyn_msgs::msg::DictParam_<ContainerAllocator> & _arg)
  {
    this->custom_params = _arg;
    return *this;
  }
  Type & set__custom_params_is_set(
    const bool & _arg)
  {
    this->custom_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BeginCallbackRequest
    std::shared_ptr<bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BeginCallbackRequest
    std::shared_ptr<bosdyn_msgs::msg::BeginCallbackRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BeginCallbackRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->region_info != other.region_info) {
      return false;
    }
    if (this->region_info_is_set != other.region_info_is_set) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->end_time_is_set != other.end_time_is_set) {
      return false;
    }
    if (this->recorded_data != other.recorded_data) {
      return false;
    }
    if (this->recorded_data_is_set != other.recorded_data_is_set) {
      return false;
    }
    if (this->custom_params != other.custom_params) {
      return false;
    }
    if (this->custom_params_is_set != other.custom_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const BeginCallbackRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BeginCallbackRequest_

// alias to use template instance with default allocator
using BeginCallbackRequest =
  bosdyn_msgs::msg::BeginCallbackRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_REQUEST__STRUCT_HPP_
