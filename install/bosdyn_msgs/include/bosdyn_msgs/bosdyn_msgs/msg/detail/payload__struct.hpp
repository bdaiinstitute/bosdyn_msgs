// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'version'
#include "bosdyn_msgs/msg/detail/software_version__struct.hpp"
// Member 'body_tform_payload'
// Member 'mount_tform_payload'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'mount_frame_name'
#include "bosdyn_msgs/msg/detail/mount_frame_name__struct.hpp"
// Member 'mass_volume_properties'
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__struct.hpp"
// Member 'preset_configurations'
#include "bosdyn_msgs/msg/detail/payload_preset__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Payload __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Payload __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Payload_
{
  using Type = Payload_<ContainerAllocator>;

  explicit Payload_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : version(_init),
    body_tform_payload(_init),
    mount_tform_payload(_init),
    mount_frame_name(_init),
    mass_volume_properties(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guid = "";
      this->name = "";
      this->description = "";
      this->is_authorized = false;
      this->is_enabled = false;
      this->is_noncompute_payload = false;
      this->version_is_set = false;
      this->body_tform_payload_is_set = false;
      this->mount_tform_payload_is_set = false;
      this->liveness_timeout_secs = 0.0;
      this->ipv4_address = "";
      this->link_speed = 0l;
      this->mass_volume_properties_is_set = false;
    }
  }

  explicit Payload_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : guid(_alloc),
    name(_alloc),
    description(_alloc),
    version(_alloc, _init),
    body_tform_payload(_alloc, _init),
    mount_tform_payload(_alloc, _init),
    mount_frame_name(_alloc, _init),
    ipv4_address(_alloc),
    mass_volume_properties(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guid = "";
      this->name = "";
      this->description = "";
      this->is_authorized = false;
      this->is_enabled = false;
      this->is_noncompute_payload = false;
      this->version_is_set = false;
      this->body_tform_payload_is_set = false;
      this->mount_tform_payload_is_set = false;
      this->liveness_timeout_secs = 0.0;
      this->ipv4_address = "";
      this->link_speed = 0l;
      this->mass_volume_properties_is_set = false;
    }
  }

  // field types and members
  using _guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _guid_type guid;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _label_prefix_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _label_prefix_type label_prefix;
  using _is_authorized_type =
    bool;
  _is_authorized_type is_authorized;
  using _is_enabled_type =
    bool;
  _is_enabled_type is_enabled;
  using _is_noncompute_payload_type =
    bool;
  _is_noncompute_payload_type is_noncompute_payload;
  using _version_type =
    bosdyn_msgs::msg::SoftwareVersion_<ContainerAllocator>;
  _version_type version;
  using _version_is_set_type =
    bool;
  _version_is_set_type version_is_set;
  using _body_tform_payload_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _body_tform_payload_type body_tform_payload;
  using _body_tform_payload_is_set_type =
    bool;
  _body_tform_payload_is_set_type body_tform_payload_is_set;
  using _mount_tform_payload_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _mount_tform_payload_type mount_tform_payload;
  using _mount_tform_payload_is_set_type =
    bool;
  _mount_tform_payload_is_set_type mount_tform_payload_is_set;
  using _mount_frame_name_type =
    bosdyn_msgs::msg::MountFrameName_<ContainerAllocator>;
  _mount_frame_name_type mount_frame_name;
  using _liveness_timeout_secs_type =
    double;
  _liveness_timeout_secs_type liveness_timeout_secs;
  using _ipv4_address_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ipv4_address_type ipv4_address;
  using _link_speed_type =
    int32_t;
  _link_speed_type link_speed;
  using _mass_volume_properties_type =
    bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator>;
  _mass_volume_properties_type mass_volume_properties;
  using _mass_volume_properties_is_set_type =
    bool;
  _mass_volume_properties_is_set_type mass_volume_properties_is_set;
  using _preset_configurations_type =
    std::vector<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>>>;
  _preset_configurations_type preset_configurations;

  // setters for named parameter idiom
  Type & set__guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->guid = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__label_prefix(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->label_prefix = _arg;
    return *this;
  }
  Type & set__is_authorized(
    const bool & _arg)
  {
    this->is_authorized = _arg;
    return *this;
  }
  Type & set__is_enabled(
    const bool & _arg)
  {
    this->is_enabled = _arg;
    return *this;
  }
  Type & set__is_noncompute_payload(
    const bool & _arg)
  {
    this->is_noncompute_payload = _arg;
    return *this;
  }
  Type & set__version(
    const bosdyn_msgs::msg::SoftwareVersion_<ContainerAllocator> & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__version_is_set(
    const bool & _arg)
  {
    this->version_is_set = _arg;
    return *this;
  }
  Type & set__body_tform_payload(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->body_tform_payload = _arg;
    return *this;
  }
  Type & set__body_tform_payload_is_set(
    const bool & _arg)
  {
    this->body_tform_payload_is_set = _arg;
    return *this;
  }
  Type & set__mount_tform_payload(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->mount_tform_payload = _arg;
    return *this;
  }
  Type & set__mount_tform_payload_is_set(
    const bool & _arg)
  {
    this->mount_tform_payload_is_set = _arg;
    return *this;
  }
  Type & set__mount_frame_name(
    const bosdyn_msgs::msg::MountFrameName_<ContainerAllocator> & _arg)
  {
    this->mount_frame_name = _arg;
    return *this;
  }
  Type & set__liveness_timeout_secs(
    const double & _arg)
  {
    this->liveness_timeout_secs = _arg;
    return *this;
  }
  Type & set__ipv4_address(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ipv4_address = _arg;
    return *this;
  }
  Type & set__link_speed(
    const int32_t & _arg)
  {
    this->link_speed = _arg;
    return *this;
  }
  Type & set__mass_volume_properties(
    const bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator> & _arg)
  {
    this->mass_volume_properties = _arg;
    return *this;
  }
  Type & set__mass_volume_properties_is_set(
    const bool & _arg)
  {
    this->mass_volume_properties_is_set = _arg;
    return *this;
  }
  Type & set__preset_configurations(
    const std::vector<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>>> & _arg)
  {
    this->preset_configurations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Payload_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Payload_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Payload_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Payload_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Payload_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Payload_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Payload_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Payload_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Payload_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Payload_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Payload
    std::shared_ptr<bosdyn_msgs::msg::Payload_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Payload
    std::shared_ptr<bosdyn_msgs::msg::Payload_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Payload_ & other) const
  {
    if (this->guid != other.guid) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->label_prefix != other.label_prefix) {
      return false;
    }
    if (this->is_authorized != other.is_authorized) {
      return false;
    }
    if (this->is_enabled != other.is_enabled) {
      return false;
    }
    if (this->is_noncompute_payload != other.is_noncompute_payload) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->version_is_set != other.version_is_set) {
      return false;
    }
    if (this->body_tform_payload != other.body_tform_payload) {
      return false;
    }
    if (this->body_tform_payload_is_set != other.body_tform_payload_is_set) {
      return false;
    }
    if (this->mount_tform_payload != other.mount_tform_payload) {
      return false;
    }
    if (this->mount_tform_payload_is_set != other.mount_tform_payload_is_set) {
      return false;
    }
    if (this->mount_frame_name != other.mount_frame_name) {
      return false;
    }
    if (this->liveness_timeout_secs != other.liveness_timeout_secs) {
      return false;
    }
    if (this->ipv4_address != other.ipv4_address) {
      return false;
    }
    if (this->link_speed != other.link_speed) {
      return false;
    }
    if (this->mass_volume_properties != other.mass_volume_properties) {
      return false;
    }
    if (this->mass_volume_properties_is_set != other.mass_volume_properties_is_set) {
      return false;
    }
    if (this->preset_configurations != other.preset_configurations) {
      return false;
    }
    return true;
  }
  bool operator!=(const Payload_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Payload_

// alias to use template instance with default allocator
using Payload =
  bosdyn_msgs::msg::Payload_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_HPP_
