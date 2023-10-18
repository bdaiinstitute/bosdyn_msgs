// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotations.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'creation_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'icp_variance'
#include "bosdyn_msgs/msg/detail/se3_covariance__struct.hpp"
// Member 'scan_match_region'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region__struct.hpp"
// Member 'waypoint_source'
#include "bosdyn_msgs/msg/detail/waypoint_waypoint_source__struct.hpp"
// Member 'client_metadata'
#include "bosdyn_msgs/msg/detail/client_metadata__struct.hpp"
// Member 'loop_closure_settings'
#include "bosdyn_msgs/msg/detail/waypoint_annotations_loop_closure_settings__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotations __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WaypointAnnotations __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointAnnotations_
{
  using Type = WaypointAnnotations_<ContainerAllocator>;

  explicit WaypointAnnotations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : creation_time(_init),
    icp_variance(_init),
    scan_match_region(_init),
    waypoint_source(_init),
    client_metadata(_init),
    loop_closure_settings(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->creation_time_is_set = false;
      this->icp_variance_is_set = false;
      this->scan_match_region_is_set = false;
      this->client_metadata_is_set = false;
      this->loop_closure_settings_is_set = false;
    }
  }

  explicit WaypointAnnotations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    creation_time(_alloc, _init),
    icp_variance(_alloc, _init),
    scan_match_region(_alloc, _init),
    waypoint_source(_alloc, _init),
    client_metadata(_alloc, _init),
    loop_closure_settings(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->creation_time_is_set = false;
      this->icp_variance_is_set = false;
      this->scan_match_region_is_set = false;
      this->client_metadata_is_set = false;
      this->loop_closure_settings_is_set = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _creation_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _creation_time_type creation_time;
  using _creation_time_is_set_type =
    bool;
  _creation_time_is_set_type creation_time_is_set;
  using _icp_variance_type =
    bosdyn_msgs::msg::SE3Covariance_<ContainerAllocator>;
  _icp_variance_type icp_variance;
  using _icp_variance_is_set_type =
    bool;
  _icp_variance_is_set_type icp_variance_is_set;
  using _scan_match_region_type =
    bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator>;
  _scan_match_region_type scan_match_region;
  using _scan_match_region_is_set_type =
    bool;
  _scan_match_region_is_set_type scan_match_region_is_set;
  using _waypoint_source_type =
    bosdyn_msgs::msg::WaypointWaypointSource_<ContainerAllocator>;
  _waypoint_source_type waypoint_source;
  using _client_metadata_type =
    bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator>;
  _client_metadata_type client_metadata;
  using _client_metadata_is_set_type =
    bool;
  _client_metadata_is_set_type client_metadata_is_set;
  using _loop_closure_settings_type =
    bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator>;
  _loop_closure_settings_type loop_closure_settings;
  using _loop_closure_settings_is_set_type =
    bool;
  _loop_closure_settings_is_set_type loop_closure_settings_is_set;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__creation_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->creation_time = _arg;
    return *this;
  }
  Type & set__creation_time_is_set(
    const bool & _arg)
  {
    this->creation_time_is_set = _arg;
    return *this;
  }
  Type & set__icp_variance(
    const bosdyn_msgs::msg::SE3Covariance_<ContainerAllocator> & _arg)
  {
    this->icp_variance = _arg;
    return *this;
  }
  Type & set__icp_variance_is_set(
    const bool & _arg)
  {
    this->icp_variance_is_set = _arg;
    return *this;
  }
  Type & set__scan_match_region(
    const bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegion_<ContainerAllocator> & _arg)
  {
    this->scan_match_region = _arg;
    return *this;
  }
  Type & set__scan_match_region_is_set(
    const bool & _arg)
  {
    this->scan_match_region_is_set = _arg;
    return *this;
  }
  Type & set__waypoint_source(
    const bosdyn_msgs::msg::WaypointWaypointSource_<ContainerAllocator> & _arg)
  {
    this->waypoint_source = _arg;
    return *this;
  }
  Type & set__client_metadata(
    const bosdyn_msgs::msg::ClientMetadata_<ContainerAllocator> & _arg)
  {
    this->client_metadata = _arg;
    return *this;
  }
  Type & set__client_metadata_is_set(
    const bool & _arg)
  {
    this->client_metadata_is_set = _arg;
    return *this;
  }
  Type & set__loop_closure_settings(
    const bosdyn_msgs::msg::WaypointAnnotationsLoopClosureSettings_<ContainerAllocator> & _arg)
  {
    this->loop_closure_settings = _arg;
    return *this;
  }
  Type & set__loop_closure_settings_is_set(
    const bool & _arg)
  {
    this->loop_closure_settings_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotations
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointAnnotations
    std::shared_ptr<bosdyn_msgs::msg::WaypointAnnotations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAnnotations_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->creation_time != other.creation_time) {
      return false;
    }
    if (this->creation_time_is_set != other.creation_time_is_set) {
      return false;
    }
    if (this->icp_variance != other.icp_variance) {
      return false;
    }
    if (this->icp_variance_is_set != other.icp_variance_is_set) {
      return false;
    }
    if (this->scan_match_region != other.scan_match_region) {
      return false;
    }
    if (this->scan_match_region_is_set != other.scan_match_region_is_set) {
      return false;
    }
    if (this->waypoint_source != other.waypoint_source) {
      return false;
    }
    if (this->client_metadata != other.client_metadata) {
      return false;
    }
    if (this->client_metadata_is_set != other.client_metadata_is_set) {
      return false;
    }
    if (this->loop_closure_settings != other.loop_closure_settings) {
      return false;
    }
    if (this->loop_closure_settings_is_set != other.loop_closure_settings_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAnnotations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAnnotations_

// alias to use template instance with default allocator
using WaypointAnnotations =
  bosdyn_msgs::msg::WaypointAnnotations_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS__STRUCT_HPP_
