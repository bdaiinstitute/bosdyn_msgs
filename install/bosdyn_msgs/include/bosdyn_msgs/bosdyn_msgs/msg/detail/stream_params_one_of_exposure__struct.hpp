// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StreamParamsOneOfExposure.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'auto_exposure'
#include "bosdyn_msgs/msg/detail/stream_params_auto_exposure__struct.hpp"
// Member 'sync_exposure'
#include "bosdyn_msgs/msg/detail/stream_params_sync_auto_exposure__struct.hpp"
// Member 'manual_exposure'
#include "bosdyn_msgs/msg/detail/stream_params_manual_exposure__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StreamParamsOneOfExposure __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StreamParamsOneOfExposure __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StreamParamsOneOfExposure_
{
  using Type = StreamParamsOneOfExposure_<ContainerAllocator>;

  explicit StreamParamsOneOfExposure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : auto_exposure(_init),
    sync_exposure(_init),
    manual_exposure(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_choice = 0;
    }
  }

  explicit StreamParamsOneOfExposure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : auto_exposure(_alloc, _init),
    sync_exposure(_alloc, _init),
    manual_exposure(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exposure_choice = 0;
    }
  }

  // field types and members
  using _auto_exposure_type =
    bosdyn_msgs::msg::StreamParamsAutoExposure_<ContainerAllocator>;
  _auto_exposure_type auto_exposure;
  using _sync_exposure_type =
    bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator>;
  _sync_exposure_type sync_exposure;
  using _manual_exposure_type =
    bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator>;
  _manual_exposure_type manual_exposure;
  using _exposure_choice_type =
    int8_t;
  _exposure_choice_type exposure_choice;

  // setters for named parameter idiom
  Type & set__auto_exposure(
    const bosdyn_msgs::msg::StreamParamsAutoExposure_<ContainerAllocator> & _arg)
  {
    this->auto_exposure = _arg;
    return *this;
  }
  Type & set__sync_exposure(
    const bosdyn_msgs::msg::StreamParamsSyncAutoExposure_<ContainerAllocator> & _arg)
  {
    this->sync_exposure = _arg;
    return *this;
  }
  Type & set__manual_exposure(
    const bosdyn_msgs::msg::StreamParamsManualExposure_<ContainerAllocator> & _arg)
  {
    this->manual_exposure = _arg;
    return *this;
  }
  Type & set__exposure_choice(
    const int8_t & _arg)
  {
    this->exposure_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t EXPOSURE_NOT_SET =
    0;
  static constexpr int8_t EXPOSURE_AUTO_EXPOSURE_SET =
    1;
  static constexpr int8_t EXPOSURE_SYNC_EXPOSURE_SET =
    2;
  static constexpr int8_t EXPOSURE_MANUAL_EXPOSURE_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParamsOneOfExposure
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParamsOneOfExposure
    std::shared_ptr<bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StreamParamsOneOfExposure_ & other) const
  {
    if (this->auto_exposure != other.auto_exposure) {
      return false;
    }
    if (this->sync_exposure != other.sync_exposure) {
      return false;
    }
    if (this->manual_exposure != other.manual_exposure) {
      return false;
    }
    if (this->exposure_choice != other.exposure_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const StreamParamsOneOfExposure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StreamParamsOneOfExposure_

// alias to use template instance with default allocator
using StreamParamsOneOfExposure =
  bosdyn_msgs::msg::StreamParamsOneOfExposure_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StreamParamsOneOfExposure_<ContainerAllocator>::EXPOSURE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StreamParamsOneOfExposure_<ContainerAllocator>::EXPOSURE_AUTO_EXPOSURE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StreamParamsOneOfExposure_<ContainerAllocator>::EXPOSURE_SYNC_EXPOSURE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StreamParamsOneOfExposure_<ContainerAllocator>::EXPOSURE_MANUAL_EXPOSURE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS_ONE_OF_EXPOSURE__STRUCT_HPP_
