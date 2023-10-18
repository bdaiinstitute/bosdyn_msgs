// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'user_data'
#include "bosdyn_msgs/msg/detail/user_data__struct.hpp"
// Member 'children'
#include "bosdyn_msgs/msg/detail/serialized_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NodeInfo __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NodeInfo __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeInfo_
{
  using Type = NodeInfo_<ContainerAllocator>;

  explicit NodeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->name = "";
      this->user_data_is_set = false;
    }
  }

  explicit NodeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    user_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->name = "";
      this->user_data_is_set = false;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _user_data_type =
    bosdyn_msgs::msg::UserData_<ContainerAllocator>;
  _user_data_type user_data;
  using _user_data_is_set_type =
    bool;
  _user_data_is_set_type user_data_is_set;
  using _children_type =
    std::vector<bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>>>;
  _children_type children;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__user_data(
    const bosdyn_msgs::msg::UserData_<ContainerAllocator> & _arg)
  {
    this->user_data = _arg;
    return *this;
  }
  Type & set__user_data_is_set(
    const bool & _arg)
  {
    this->user_data_is_set = _arg;
    return *this;
  }
  Type & set__children(
    const std::vector<bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>>> & _arg)
  {
    this->children = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NodeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NodeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NodeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NodeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NodeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NodeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NodeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NodeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NodeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NodeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NodeInfo
    std::shared_ptr<bosdyn_msgs::msg::NodeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NodeInfo
    std::shared_ptr<bosdyn_msgs::msg::NodeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->user_data != other.user_data) {
      return false;
    }
    if (this->user_data_is_set != other.user_data_is_set) {
      return false;
    }
    if (this->children != other.children) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeInfo_

// alias to use template instance with default allocator
using NodeInfo =
  bosdyn_msgs::msg::NodeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE_INFO__STRUCT_HPP_
