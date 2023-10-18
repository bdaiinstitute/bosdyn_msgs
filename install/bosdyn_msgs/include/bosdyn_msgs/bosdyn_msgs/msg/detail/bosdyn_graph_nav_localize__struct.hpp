// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BosdynGraphNavLocalize.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_LOCALIZE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_LOCALIZE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'localization_request'
#include "bosdyn_msgs/msg/detail/set_localization_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BosdynGraphNavLocalize __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BosdynGraphNavLocalize __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BosdynGraphNavLocalize_
{
  using Type = BosdynGraphNavLocalize_<ContainerAllocator>;

  explicit BosdynGraphNavLocalize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : localization_request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->localization_request_is_set = false;
      this->allow_bad_quality = false;
      this->response_bb_key = "";
    }
  }

  explicit BosdynGraphNavLocalize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    host(_alloc),
    localization_request(_alloc, _init),
    response_bb_key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->localization_request_is_set = false;
      this->allow_bad_quality = false;
      this->response_bb_key = "";
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _localization_request_type =
    bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator>;
  _localization_request_type localization_request;
  using _localization_request_is_set_type =
    bool;
  _localization_request_is_set_type localization_request_is_set;
  using _allow_bad_quality_type =
    bool;
  _allow_bad_quality_type allow_bad_quality;
  using _response_bb_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_bb_key_type response_bb_key;

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
  Type & set__localization_request(
    const bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator> & _arg)
  {
    this->localization_request = _arg;
    return *this;
  }
  Type & set__localization_request_is_set(
    const bool & _arg)
  {
    this->localization_request_is_set = _arg;
    return *this;
  }
  Type & set__allow_bad_quality(
    const bool & _arg)
  {
    this->allow_bad_quality = _arg;
    return *this;
  }
  Type & set__response_bb_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response_bb_key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynGraphNavLocalize
    std::shared_ptr<bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BosdynGraphNavLocalize
    std::shared_ptr<bosdyn_msgs::msg::BosdynGraphNavLocalize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BosdynGraphNavLocalize_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->localization_request != other.localization_request) {
      return false;
    }
    if (this->localization_request_is_set != other.localization_request_is_set) {
      return false;
    }
    if (this->allow_bad_quality != other.allow_bad_quality) {
      return false;
    }
    if (this->response_bb_key != other.response_bb_key) {
      return false;
    }
    return true;
  }
  bool operator!=(const BosdynGraphNavLocalize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BosdynGraphNavLocalize_

// alias to use template instance with default allocator
using BosdynGraphNavLocalize =
  bosdyn_msgs::msg::BosdynGraphNavLocalize_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_LOCALIZE__STRUCT_HPP_
