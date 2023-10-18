// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataIdentifier.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_IDENTIFIER__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_IDENTIFIER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'action_id'
#include "bosdyn_msgs/msg/detail/capture_action_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataIdentifier __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataIdentifier __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataIdentifier_
{
  using Type = DataIdentifier_<ContainerAllocator>;

  explicit DataIdentifier_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_id_is_set = false;
      this->channel = "";
      this->data_name = "";
      this->id = 0ull;
    }
  }

  explicit DataIdentifier_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action_id(_alloc, _init),
    channel(_alloc),
    data_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_id_is_set = false;
      this->channel = "";
      this->data_name = "";
      this->id = 0ull;
    }
  }

  // field types and members
  using _action_id_type =
    bosdyn_msgs::msg::CaptureActionId_<ContainerAllocator>;
  _action_id_type action_id;
  using _action_id_is_set_type =
    bool;
  _action_id_is_set_type action_id_is_set;
  using _channel_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _channel_type channel;
  using _data_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_name_type data_name;
  using _id_type =
    uint64_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__action_id(
    const bosdyn_msgs::msg::CaptureActionId_<ContainerAllocator> & _arg)
  {
    this->action_id = _arg;
    return *this;
  }
  Type & set__action_id_is_set(
    const bool & _arg)
  {
    this->action_id_is_set = _arg;
    return *this;
  }
  Type & set__channel(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->channel = _arg;
    return *this;
  }
  Type & set__data_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data_name = _arg;
    return *this;
  }
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataIdentifier
    std::shared_ptr<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataIdentifier
    std::shared_ptr<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataIdentifier_ & other) const
  {
    if (this->action_id != other.action_id) {
      return false;
    }
    if (this->action_id_is_set != other.action_id_is_set) {
      return false;
    }
    if (this->channel != other.channel) {
      return false;
    }
    if (this->data_name != other.data_name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataIdentifier_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataIdentifier_

// alias to use template instance with default allocator
using DataIdentifier =
  bosdyn_msgs::msg::DataIdentifier_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_IDENTIFIER__STRUCT_HPP_
