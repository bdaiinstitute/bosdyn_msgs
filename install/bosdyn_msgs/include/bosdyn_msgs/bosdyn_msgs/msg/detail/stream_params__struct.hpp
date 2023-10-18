// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StreamParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'awb'
#include "bosdyn_msgs/msg/detail/stream_params_awb_mode__struct.hpp"
// Member 'exposure'
#include "bosdyn_msgs/msg/detail/stream_params_one_of_exposure__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StreamParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StreamParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StreamParams_
{
  using Type = StreamParams_<ContainerAllocator>;

  explicit StreamParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : awb(_init),
    exposure(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->targetbitrate = 0ll;
      this->targetbitrate_is_set = false;
      this->refreshinterval = 0ll;
      this->refreshinterval_is_set = false;
      this->idrinterval = 0ll;
      this->idrinterval_is_set = false;
      this->awb_is_set = false;
    }
  }

  explicit StreamParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : awb(_alloc, _init),
    exposure(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->targetbitrate = 0ll;
      this->targetbitrate_is_set = false;
      this->refreshinterval = 0ll;
      this->refreshinterval_is_set = false;
      this->idrinterval = 0ll;
      this->idrinterval_is_set = false;
      this->awb_is_set = false;
    }
  }

  // field types and members
  using _targetbitrate_type =
    int64_t;
  _targetbitrate_type targetbitrate;
  using _targetbitrate_is_set_type =
    bool;
  _targetbitrate_is_set_type targetbitrate_is_set;
  using _refreshinterval_type =
    int64_t;
  _refreshinterval_type refreshinterval;
  using _refreshinterval_is_set_type =
    bool;
  _refreshinterval_is_set_type refreshinterval_is_set;
  using _idrinterval_type =
    int64_t;
  _idrinterval_type idrinterval;
  using _idrinterval_is_set_type =
    bool;
  _idrinterval_is_set_type idrinterval_is_set;
  using _awb_type =
    bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator>;
  _awb_type awb;
  using _awb_is_set_type =
    bool;
  _awb_is_set_type awb_is_set;
  using _exposure_type =
    bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator>;
  _exposure_type exposure;

  // setters for named parameter idiom
  Type & set__targetbitrate(
    const int64_t & _arg)
  {
    this->targetbitrate = _arg;
    return *this;
  }
  Type & set__targetbitrate_is_set(
    const bool & _arg)
  {
    this->targetbitrate_is_set = _arg;
    return *this;
  }
  Type & set__refreshinterval(
    const int64_t & _arg)
  {
    this->refreshinterval = _arg;
    return *this;
  }
  Type & set__refreshinterval_is_set(
    const bool & _arg)
  {
    this->refreshinterval_is_set = _arg;
    return *this;
  }
  Type & set__idrinterval(
    const int64_t & _arg)
  {
    this->idrinterval = _arg;
    return *this;
  }
  Type & set__idrinterval_is_set(
    const bool & _arg)
  {
    this->idrinterval_is_set = _arg;
    return *this;
  }
  Type & set__awb(
    const bosdyn_msgs::msg::StreamParamsAwbMode_<ContainerAllocator> & _arg)
  {
    this->awb = _arg;
    return *this;
  }
  Type & set__awb_is_set(
    const bool & _arg)
  {
    this->awb_is_set = _arg;
    return *this;
  }
  Type & set__exposure(
    const bosdyn_msgs::msg::StreamParamsOneOfExposure_<ContainerAllocator> & _arg)
  {
    this->exposure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StreamParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StreamParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StreamParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StreamParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StreamParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StreamParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParams
    std::shared_ptr<bosdyn_msgs::msg::StreamParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StreamParams
    std::shared_ptr<bosdyn_msgs::msg::StreamParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StreamParams_ & other) const
  {
    if (this->targetbitrate != other.targetbitrate) {
      return false;
    }
    if (this->targetbitrate_is_set != other.targetbitrate_is_set) {
      return false;
    }
    if (this->refreshinterval != other.refreshinterval) {
      return false;
    }
    if (this->refreshinterval_is_set != other.refreshinterval_is_set) {
      return false;
    }
    if (this->idrinterval != other.idrinterval) {
      return false;
    }
    if (this->idrinterval_is_set != other.idrinterval_is_set) {
      return false;
    }
    if (this->awb != other.awb) {
      return false;
    }
    if (this->awb_is_set != other.awb_is_set) {
      return false;
    }
    if (this->exposure != other.exposure) {
      return false;
    }
    return true;
  }
  bool operator!=(const StreamParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StreamParams_

// alias to use template instance with default allocator
using StreamParams =
  bosdyn_msgs::msg::StreamParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS__STRUCT_HPP_
