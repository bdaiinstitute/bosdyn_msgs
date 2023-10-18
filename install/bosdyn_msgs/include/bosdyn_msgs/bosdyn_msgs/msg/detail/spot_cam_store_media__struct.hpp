// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SpotCamStoreMedia.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_STORE_MEDIA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_STORE_MEDIA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'camera'
#include "bosdyn_msgs/msg/detail/camera__struct.hpp"
// Member 'type'
#include "bosdyn_msgs/msg/detail/logpoint_record_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SpotCamStoreMedia __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SpotCamStoreMedia __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpotCamStoreMedia_
{
  using Type = SpotCamStoreMedia_<ContainerAllocator>;

  explicit SpotCamStoreMedia_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera(_init),
    type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->camera_is_set = false;
      this->tag = "";
    }
  }

  explicit SpotCamStoreMedia_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    host(_alloc),
    camera(_alloc, _init),
    type(_alloc, _init),
    tag(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->camera_is_set = false;
      this->tag = "";
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _camera_type =
    bosdyn_msgs::msg::Camera_<ContainerAllocator>;
  _camera_type camera;
  using _camera_is_set_type =
    bool;
  _camera_is_set_type camera_is_set;
  using _type_type =
    bosdyn_msgs::msg::LogpointRecordType_<ContainerAllocator>;
  _type_type type;
  using _tag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tag_type tag;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host = _arg;
    return *this;
  }
  Type & set__camera(
    const bosdyn_msgs::msg::Camera_<ContainerAllocator> & _arg)
  {
    this->camera = _arg;
    return *this;
  }
  Type & set__camera_is_set(
    const bool & _arg)
  {
    this->camera_is_set = _arg;
    return *this;
  }
  Type & set__type(
    const bosdyn_msgs::msg::LogpointRecordType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__tag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCamStoreMedia
    std::shared_ptr<bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCamStoreMedia
    std::shared_ptr<bosdyn_msgs::msg::SpotCamStoreMedia_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpotCamStoreMedia_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->camera != other.camera) {
      return false;
    }
    if (this->camera_is_set != other.camera_is_set) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->tag != other.tag) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpotCamStoreMedia_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpotCamStoreMedia_

// alias to use template instance with default allocator
using SpotCamStoreMedia =
  bosdyn_msgs::msg::SpotCamStoreMedia_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_STORE_MEDIA__STRUCT_HPP_
