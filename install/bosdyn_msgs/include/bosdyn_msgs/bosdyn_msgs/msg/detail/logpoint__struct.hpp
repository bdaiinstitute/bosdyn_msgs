// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Logpoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOGPOINT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOGPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/logpoint_record_type__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/logpoint_log_status__struct.hpp"
// Member 'queue_status'
#include "bosdyn_msgs/msg/detail/logpoint_queue_status__struct.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'image_params'
#include "bosdyn_msgs/msg/detail/logpoint_image_params__struct.hpp"
// Member 'calibration'
#include "bosdyn_msgs/msg/detail/logpoint_calibration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Logpoint __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Logpoint __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Logpoint_
{
  using Type = Logpoint_<ContainerAllocator>;

  explicit Logpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init),
    status(_init),
    queue_status(_init),
    timestamp(_init),
    image_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->tag = "";
      this->timestamp_is_set = false;
      this->image_params_is_set = false;
    }
  }

  explicit Logpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    type(_alloc, _init),
    status(_alloc, _init),
    queue_status(_alloc, _init),
    tag(_alloc),
    timestamp(_alloc, _init),
    image_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->tag = "";
      this->timestamp_is_set = false;
      this->image_params_is_set = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    bosdyn_msgs::msg::LogpointRecordType_<ContainerAllocator>;
  _type_type type;
  using _status_type =
    bosdyn_msgs::msg::LogpointLogStatus_<ContainerAllocator>;
  _status_type status;
  using _queue_status_type =
    bosdyn_msgs::msg::LogpointQueueStatus_<ContainerAllocator>;
  _queue_status_type queue_status;
  using _tag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tag_type tag;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _timestamp_is_set_type =
    bool;
  _timestamp_is_set_type timestamp_is_set;
  using _image_params_type =
    bosdyn_msgs::msg::LogpointImageParams_<ContainerAllocator>;
  _image_params_type image_params;
  using _image_params_is_set_type =
    bool;
  _image_params_is_set_type image_params_is_set;
  using _calibration_type =
    std::vector<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>>>;
  _calibration_type calibration;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const bosdyn_msgs::msg::LogpointRecordType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::LogpointLogStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__queue_status(
    const bosdyn_msgs::msg::LogpointQueueStatus_<ContainerAllocator> & _arg)
  {
    this->queue_status = _arg;
    return *this;
  }
  Type & set__tag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tag = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_is_set(
    const bool & _arg)
  {
    this->timestamp_is_set = _arg;
    return *this;
  }
  Type & set__image_params(
    const bosdyn_msgs::msg::LogpointImageParams_<ContainerAllocator> & _arg)
  {
    this->image_params = _arg;
    return *this;
  }
  Type & set__image_params_is_set(
    const bool & _arg)
  {
    this->image_params_is_set = _arg;
    return *this;
  }
  Type & set__calibration(
    const std::vector<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LogpointCalibration_<ContainerAllocator>>> & _arg)
  {
    this->calibration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Logpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Logpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Logpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Logpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Logpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Logpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Logpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Logpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Logpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Logpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Logpoint
    std::shared_ptr<bosdyn_msgs::msg::Logpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Logpoint
    std::shared_ptr<bosdyn_msgs::msg::Logpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Logpoint_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->queue_status != other.queue_status) {
      return false;
    }
    if (this->tag != other.tag) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_is_set != other.timestamp_is_set) {
      return false;
    }
    if (this->image_params != other.image_params) {
      return false;
    }
    if (this->image_params_is_set != other.image_params_is_set) {
      return false;
    }
    if (this->calibration != other.calibration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Logpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Logpoint_

// alias to use template instance with default allocator
using Logpoint =
  bosdyn_msgs::msg::Logpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOGPOINT__STRUCT_HPP_
