// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'source'
#include "bosdyn_msgs/msg/detail/point_cloud_source__struct.hpp"
// Member 'encoding'
#include "bosdyn_msgs/msg/detail/point_cloud_encoding__struct.hpp"
// Member 'encoding_parameters'
#include "bosdyn_msgs/msg/detail/point_cloud_encoding_parameters__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PointCloud __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PointCloud __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloud_
{
  using Type = PointCloud_<ContainerAllocator>;

  explicit PointCloud_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_init),
    encoding(_init),
    encoding_parameters(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_is_set = false;
      this->num_points = 0l;
      this->encoding_parameters_is_set = false;
    }
  }

  explicit PointCloud_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc, _init),
    encoding(_alloc, _init),
    encoding_parameters(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_is_set = false;
      this->num_points = 0l;
      this->encoding_parameters_is_set = false;
    }
  }

  // field types and members
  using _source_type =
    bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator>;
  _source_type source;
  using _source_is_set_type =
    bool;
  _source_is_set_type source_is_set;
  using _num_points_type =
    int32_t;
  _num_points_type num_points;
  using _encoding_type =
    bosdyn_msgs::msg::PointCloudEncoding_<ContainerAllocator>;
  _encoding_type encoding;
  using _encoding_parameters_type =
    bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator>;
  _encoding_parameters_type encoding_parameters;
  using _encoding_parameters_is_set_type =
    bool;
  _encoding_parameters_is_set_type encoding_parameters_is_set;
  using _data_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__source(
    const bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__source_is_set(
    const bool & _arg)
  {
    this->source_is_set = _arg;
    return *this;
  }
  Type & set__num_points(
    const int32_t & _arg)
  {
    this->num_points = _arg;
    return *this;
  }
  Type & set__encoding(
    const bosdyn_msgs::msg::PointCloudEncoding_<ContainerAllocator> & _arg)
  {
    this->encoding = _arg;
    return *this;
  }
  Type & set__encoding_parameters(
    const bosdyn_msgs::msg::PointCloudEncodingParameters_<ContainerAllocator> & _arg)
  {
    this->encoding_parameters = _arg;
    return *this;
  }
  Type & set__encoding_parameters_is_set(
    const bool & _arg)
  {
    this->encoding_parameters_is_set = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PointCloud_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PointCloud_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloud_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloud_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloud
    std::shared_ptr<bosdyn_msgs::msg::PointCloud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloud
    std::shared_ptr<bosdyn_msgs::msg::PointCloud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloud_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    if (this->source_is_set != other.source_is_set) {
      return false;
    }
    if (this->num_points != other.num_points) {
      return false;
    }
    if (this->encoding != other.encoding) {
      return false;
    }
    if (this->encoding_parameters != other.encoding_parameters) {
      return false;
    }
    if (this->encoding_parameters_is_set != other.encoding_parameters_is_set) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloud_

// alias to use template instance with default allocator
using PointCloud =
  bosdyn_msgs::msg::PointCloud_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__STRUCT_HPP_
