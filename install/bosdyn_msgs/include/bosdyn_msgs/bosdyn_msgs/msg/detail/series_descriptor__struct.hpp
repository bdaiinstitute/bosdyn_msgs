// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SeriesDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'series_identifier'
#include "bosdyn_msgs/msg/detail/series_identifier__struct.hpp"
// Member 'data_type'
#include "bosdyn_msgs/msg/detail/series_descriptor_one_of_data_type__struct.hpp"
// Member 'annotations'
#include "bosdyn_msgs/msg/detail/key_string_value_string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SeriesDescriptor __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SeriesDescriptor __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SeriesDescriptor_
{
  using Type = SeriesDescriptor_<ContainerAllocator>;

  explicit SeriesDescriptor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : series_identifier(_init),
    data_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->series_index = 0ul;
      this->series_identifier_is_set = false;
      this->identifier_hash = 0ull;
      this->description = "";
    }
  }

  explicit SeriesDescriptor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : series_identifier(_alloc, _init),
    data_type(_alloc, _init),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->series_index = 0ul;
      this->series_identifier_is_set = false;
      this->identifier_hash = 0ull;
      this->description = "";
    }
  }

  // field types and members
  using _series_index_type =
    uint32_t;
  _series_index_type series_index;
  using _series_identifier_type =
    bosdyn_msgs::msg::SeriesIdentifier_<ContainerAllocator>;
  _series_identifier_type series_identifier;
  using _series_identifier_is_set_type =
    bool;
  _series_identifier_is_set_type series_identifier_is_set;
  using _identifier_hash_type =
    uint64_t;
  _identifier_hash_type identifier_hash;
  using _data_type_type =
    bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator>;
  _data_type_type data_type;
  using _annotations_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueString_<ContainerAllocator>>>;
  _annotations_type annotations;
  using _additional_index_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _additional_index_names_type additional_index_names;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__series_index(
    const uint32_t & _arg)
  {
    this->series_index = _arg;
    return *this;
  }
  Type & set__series_identifier(
    const bosdyn_msgs::msg::SeriesIdentifier_<ContainerAllocator> & _arg)
  {
    this->series_identifier = _arg;
    return *this;
  }
  Type & set__series_identifier_is_set(
    const bool & _arg)
  {
    this->series_identifier_is_set = _arg;
    return *this;
  }
  Type & set__identifier_hash(
    const uint64_t & _arg)
  {
    this->identifier_hash = _arg;
    return *this;
  }
  Type & set__data_type(
    const bosdyn_msgs::msg::SeriesDescriptorOneOfDataType_<ContainerAllocator> & _arg)
  {
    this->data_type = _arg;
    return *this;
  }
  Type & set__annotations(
    const std::vector<bosdyn_msgs::msg::KeyStringValueString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueString_<ContainerAllocator>>> & _arg)
  {
    this->annotations = _arg;
    return *this;
  }
  Type & set__additional_index_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->additional_index_names = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SeriesDescriptor
    std::shared_ptr<bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SeriesDescriptor
    std::shared_ptr<bosdyn_msgs::msg::SeriesDescriptor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SeriesDescriptor_ & other) const
  {
    if (this->series_index != other.series_index) {
      return false;
    }
    if (this->series_identifier != other.series_identifier) {
      return false;
    }
    if (this->series_identifier_is_set != other.series_identifier_is_set) {
      return false;
    }
    if (this->identifier_hash != other.identifier_hash) {
      return false;
    }
    if (this->data_type != other.data_type) {
      return false;
    }
    if (this->annotations != other.annotations) {
      return false;
    }
    if (this->additional_index_names != other.additional_index_names) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const SeriesDescriptor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SeriesDescriptor_

// alias to use template instance with default allocator
using SeriesDescriptor =
  bosdyn_msgs::msg::SeriesDescriptor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__STRUCT_HPP_
