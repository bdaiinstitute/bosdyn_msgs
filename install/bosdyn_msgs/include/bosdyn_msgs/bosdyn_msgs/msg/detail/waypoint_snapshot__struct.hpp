// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WaypointSnapshot.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_SNAPSHOT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_SNAPSHOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'images'
#include "bosdyn_msgs/msg/detail/image_response__struct.hpp"
// Member 'point_cloud'
#include "bosdyn_msgs/msg/detail/point_cloud__struct.hpp"
// Member 'objects'
#include "bosdyn_msgs/msg/detail/world_object__struct.hpp"
// Member 'robot_state'
#include "bosdyn_msgs/msg/detail/robot_state__struct.hpp"
// Member 'robot_local_grids'
#include "bosdyn_msgs/msg/detail/local_grid__struct.hpp"
// Member 'body_tform_remote_point_cloud_sensor'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'payloads'
#include "bosdyn_msgs/msg/detail/payload__struct.hpp"
// Member 'robot_id'
#include "bosdyn_msgs/msg/detail/robot_id__struct.hpp"
// Member 'recording_started_on'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WaypointSnapshot __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WaypointSnapshot __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointSnapshot_
{
  using Type = WaypointSnapshot_<ContainerAllocator>;

  explicit WaypointSnapshot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point_cloud(_init),
    robot_state(_init),
    body_tform_remote_point_cloud_sensor(_init),
    robot_id(_init),
    recording_started_on(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->point_cloud_is_set = false;
      this->robot_state_is_set = false;
      this->is_point_cloud_processed = false;
      this->version_id = "";
      this->has_remote_point_cloud_sensor = false;
      this->body_tform_remote_point_cloud_sensor_is_set = false;
      this->robot_id_is_set = false;
      this->recording_started_on_is_set = false;
    }
  }

  explicit WaypointSnapshot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    point_cloud(_alloc, _init),
    robot_state(_alloc, _init),
    version_id(_alloc),
    body_tform_remote_point_cloud_sensor(_alloc, _init),
    robot_id(_alloc, _init),
    recording_started_on(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->point_cloud_is_set = false;
      this->robot_state_is_set = false;
      this->is_point_cloud_processed = false;
      this->version_id = "";
      this->has_remote_point_cloud_sensor = false;
      this->body_tform_remote_point_cloud_sensor_is_set = false;
      this->robot_id_is_set = false;
      this->recording_started_on_is_set = false;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _images_type =
    std::vector<bosdyn_msgs::msg::ImageResponse_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageResponse_<ContainerAllocator>>>;
  _images_type images;
  using _point_cloud_type =
    bosdyn_msgs::msg::PointCloud_<ContainerAllocator>;
  _point_cloud_type point_cloud;
  using _point_cloud_is_set_type =
    bool;
  _point_cloud_is_set_type point_cloud_is_set;
  using _objects_type =
    std::vector<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>>;
  _objects_type objects;
  using _robot_state_type =
    bosdyn_msgs::msg::RobotState_<ContainerAllocator>;
  _robot_state_type robot_state;
  using _robot_state_is_set_type =
    bool;
  _robot_state_is_set_type robot_state_is_set;
  using _robot_local_grids_type =
    std::vector<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>>>;
  _robot_local_grids_type robot_local_grids;
  using _is_point_cloud_processed_type =
    bool;
  _is_point_cloud_processed_type is_point_cloud_processed;
  using _version_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_id_type version_id;
  using _has_remote_point_cloud_sensor_type =
    bool;
  _has_remote_point_cloud_sensor_type has_remote_point_cloud_sensor;
  using _body_tform_remote_point_cloud_sensor_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _body_tform_remote_point_cloud_sensor_type body_tform_remote_point_cloud_sensor;
  using _body_tform_remote_point_cloud_sensor_is_set_type =
    bool;
  _body_tform_remote_point_cloud_sensor_is_set_type body_tform_remote_point_cloud_sensor_is_set;
  using _payloads_type =
    std::vector<bosdyn_msgs::msg::Payload_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Payload_<ContainerAllocator>>>;
  _payloads_type payloads;
  using _robot_id_type =
    bosdyn_msgs::msg::RobotId_<ContainerAllocator>;
  _robot_id_type robot_id;
  using _robot_id_is_set_type =
    bool;
  _robot_id_is_set_type robot_id_is_set;
  using _recording_started_on_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _recording_started_on_type recording_started_on;
  using _recording_started_on_is_set_type =
    bool;
  _recording_started_on_is_set_type recording_started_on_is_set;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__images(
    const std::vector<bosdyn_msgs::msg::ImageResponse_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageResponse_<ContainerAllocator>>> & _arg)
  {
    this->images = _arg;
    return *this;
  }
  Type & set__point_cloud(
    const bosdyn_msgs::msg::PointCloud_<ContainerAllocator> & _arg)
  {
    this->point_cloud = _arg;
    return *this;
  }
  Type & set__point_cloud_is_set(
    const bool & _arg)
  {
    this->point_cloud_is_set = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }
  Type & set__robot_state(
    const bosdyn_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->robot_state = _arg;
    return *this;
  }
  Type & set__robot_state_is_set(
    const bool & _arg)
  {
    this->robot_state_is_set = _arg;
    return *this;
  }
  Type & set__robot_local_grids(
    const std::vector<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>>> & _arg)
  {
    this->robot_local_grids = _arg;
    return *this;
  }
  Type & set__is_point_cloud_processed(
    const bool & _arg)
  {
    this->is_point_cloud_processed = _arg;
    return *this;
  }
  Type & set__version_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_id = _arg;
    return *this;
  }
  Type & set__has_remote_point_cloud_sensor(
    const bool & _arg)
  {
    this->has_remote_point_cloud_sensor = _arg;
    return *this;
  }
  Type & set__body_tform_remote_point_cloud_sensor(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->body_tform_remote_point_cloud_sensor = _arg;
    return *this;
  }
  Type & set__body_tform_remote_point_cloud_sensor_is_set(
    const bool & _arg)
  {
    this->body_tform_remote_point_cloud_sensor_is_set = _arg;
    return *this;
  }
  Type & set__payloads(
    const std::vector<bosdyn_msgs::msg::Payload_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Payload_<ContainerAllocator>>> & _arg)
  {
    this->payloads = _arg;
    return *this;
  }
  Type & set__robot_id(
    const bosdyn_msgs::msg::RobotId_<ContainerAllocator> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__robot_id_is_set(
    const bool & _arg)
  {
    this->robot_id_is_set = _arg;
    return *this;
  }
  Type & set__recording_started_on(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->recording_started_on = _arg;
    return *this;
  }
  Type & set__recording_started_on_is_set(
    const bool & _arg)
  {
    this->recording_started_on_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointSnapshot
    std::shared_ptr<bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WaypointSnapshot
    std::shared_ptr<bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointSnapshot_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->images != other.images) {
      return false;
    }
    if (this->point_cloud != other.point_cloud) {
      return false;
    }
    if (this->point_cloud_is_set != other.point_cloud_is_set) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    if (this->robot_state != other.robot_state) {
      return false;
    }
    if (this->robot_state_is_set != other.robot_state_is_set) {
      return false;
    }
    if (this->robot_local_grids != other.robot_local_grids) {
      return false;
    }
    if (this->is_point_cloud_processed != other.is_point_cloud_processed) {
      return false;
    }
    if (this->version_id != other.version_id) {
      return false;
    }
    if (this->has_remote_point_cloud_sensor != other.has_remote_point_cloud_sensor) {
      return false;
    }
    if (this->body_tform_remote_point_cloud_sensor != other.body_tform_remote_point_cloud_sensor) {
      return false;
    }
    if (this->body_tform_remote_point_cloud_sensor_is_set != other.body_tform_remote_point_cloud_sensor_is_set) {
      return false;
    }
    if (this->payloads != other.payloads) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->robot_id_is_set != other.robot_id_is_set) {
      return false;
    }
    if (this->recording_started_on != other.recording_started_on) {
      return false;
    }
    if (this->recording_started_on_is_set != other.recording_started_on_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointSnapshot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointSnapshot_

// alias to use template instance with default allocator
using WaypointSnapshot =
  bosdyn_msgs::msg::WaypointSnapshot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_SNAPSHOT__STRUCT_HPP_
