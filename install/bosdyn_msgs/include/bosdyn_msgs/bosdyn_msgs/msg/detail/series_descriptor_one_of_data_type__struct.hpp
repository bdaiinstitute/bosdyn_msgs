// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SeriesDescriptorOneOfDataType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'message_type'
#include "bosdyn_msgs/msg/detail/message_type_descriptor__struct.hpp"
// Member 'pod_type'
#include "bosdyn_msgs/msg/detail/pod_type_descriptor__struct.hpp"
// Member 'struct_type'
#include "bosdyn_msgs/msg/detail/struct_type_descriptor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SeriesDescriptorOneOfDataType __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SeriesDescriptorOneOfDataType __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SeriesDescriptorOneOfDataType_
{
  using Type = SeriesDescriptorOneOfDataType_<ContainerAllocator>;

  explicit SeriesDescriptorOneOfDataType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message_type(_init),
    pod_type(_init),
    struct_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_type_choice = 0;
    }
  }

  explicit SeriesDescriptorOneOfDataType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message_type(_alloc, _init),
    pod_type(_alloc, _init),
    struct_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_type_choice = 0;
    }
  }

  // field types and members
  using _message_type_type =
    bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator>;
  _message_type_type message_type;
  using _pod_type_type =
    bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator>;
  _pod_type_type pod_type;
  using _struct_type_type =
    bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator>;
  _struct_type_type struct_type;
  using _data_type_choice_type =
    int8_t;
  _data_type_choice_type data_type_choice;

  // setters for named parameter idiom
  Type & set__message_type(
    const bosdyn_msgs::msg::MessageTypeDescriptor_<ContainerAllocator> & _arg)
  {
    this->message_type = _arg;
    return *this;
  }
  Type & set__pod_type(
    const bosdyn_msgs::msg::PodTypeDescriptor_<ContainerAllocator> & _arg)
  {
    this->pod_type = _arg;
    return *this;
  }
  Type & set__struct_type(
    const bosdyn_msgs::msg::StructTypeDescriptor_<ContainerAllocator> & _arg)
  {
    this->struct_type = _arg;
    return *this;
  }
  Type & set__data_type_choice(
    const int8_t & _arg)
  {
    this->data_type_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t DATATYPE_NOT_SET =
    0;
  static constexpr int8_t DATATYPE_MESSAGE_TYPE_SET =
    1;
  static constexpr int8_t DATATYPE_POD_TYPE_SET =
    2;
  static constexpr int8_t DATATYPE_STRUCT_TYPE_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SeriesDescriptorOneOfDataType
    std::shared_ptr<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SeriesDescriptorOneOfDataType
    std::shared_ptr<bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SeriesDescriptorOneOfDataType_ & other) const
  {
    if (this->message_type != other.message_type) {
      return false;
    }
    if (this->pod_type != other.pod_type) {
      return false;
    }
    if (this->struct_type != other.struct_type) {
      return false;
    }
    if (this->data_type_choice != other.data_type_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const SeriesDescriptorOneOfDataType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SeriesDescriptorOneOfDataType_

// alias to use template instance with default allocator
using SeriesDescriptorOneOfDataType =
  bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SeriesDescriptorOneOfDataType_<ContainerAllocator>::DATATYPE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SeriesDescriptorOneOfDataType_<ContainerAllocator>::DATATYPE_MESSAGE_TYPE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SeriesDescriptorOneOfDataType_<ContainerAllocator>::DATATYPE_POD_TYPE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SeriesDescriptorOneOfDataType_<ContainerAllocator>::DATATYPE_STRUCT_TYPE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__STRUCT_HPP_
