// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StoreMetadataOneOfData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_ONE_OF_DATA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_ONE_OF_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StoreMetadataOneOfData __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StoreMetadataOneOfData __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StoreMetadataOneOfData_
{
  using Type = StoreMetadataOneOfData_<ContainerAllocator>;

  explicit StoreMetadataOneOfData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->metadata_name = "";
      this->data_choice = 0;
    }
  }

  explicit StoreMetadataOneOfData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : metadata_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->metadata_name = "";
      this->data_choice = 0;
    }
  }

  // field types and members
  using _metadata_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _metadata_name_type metadata_name;
  using _data_choice_type =
    int8_t;
  _data_choice_type data_choice;

  // setters for named parameter idiom
  Type & set__metadata_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->metadata_name = _arg;
    return *this;
  }
  Type & set__data_choice(
    const int8_t & _arg)
  {
    this->data_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t DATA_NOT_SET =
    0;
  static constexpr int8_t DATA_METADATA_NAME_SET =
    1;
  static constexpr int8_t DATA_METADATA_JSON_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StoreMetadataOneOfData
    std::shared_ptr<bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StoreMetadataOneOfData
    std::shared_ptr<bosdyn_msgs::msg::StoreMetadataOneOfData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StoreMetadataOneOfData_ & other) const
  {
    if (this->metadata_name != other.metadata_name) {
      return false;
    }
    if (this->data_choice != other.data_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const StoreMetadataOneOfData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StoreMetadataOneOfData_

// alias to use template instance with default allocator
using StoreMetadataOneOfData =
  bosdyn_msgs::msg::StoreMetadataOneOfData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StoreMetadataOneOfData_<ContainerAllocator>::DATA_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StoreMetadataOneOfData_<ContainerAllocator>::DATA_METADATA_NAME_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t StoreMetadataOneOfData_<ContainerAllocator>::DATA_METADATA_JSON_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_ONE_OF_DATA__STRUCT_HPP_
