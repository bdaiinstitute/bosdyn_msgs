// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AprilTagProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__APRIL_TAG_PROPERTIES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__APRIL_TAG_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dimensions'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"
// Member 'fiducial_pose_status'
// Member 'fiducial_filtered_pose_status'
#include "bosdyn_msgs/msg/detail/april_tag_properties_april_tag_pose_status__struct.hpp"
// Member 'detection_covariance'
#include "bosdyn_msgs/msg/detail/se3_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AprilTagProperties __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AprilTagProperties __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AprilTagProperties_
{
  using Type = AprilTagProperties_<ContainerAllocator>;

  explicit AprilTagProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dimensions(_init),
    fiducial_pose_status(_init),
    fiducial_filtered_pose_status(_init),
    detection_covariance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag_id = 0l;
      this->dimensions_is_set = false;
      this->frame_name_fiducial = "";
      this->frame_name_fiducial_filtered = "";
      this->frame_name_camera = "";
      this->detection_covariance_is_set = false;
      this->detection_covariance_reference_frame = "";
    }
  }

  explicit AprilTagProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dimensions(_alloc, _init),
    frame_name_fiducial(_alloc),
    fiducial_pose_status(_alloc, _init),
    frame_name_fiducial_filtered(_alloc),
    fiducial_filtered_pose_status(_alloc, _init),
    frame_name_camera(_alloc),
    detection_covariance(_alloc, _init),
    detection_covariance_reference_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag_id = 0l;
      this->dimensions_is_set = false;
      this->frame_name_fiducial = "";
      this->frame_name_fiducial_filtered = "";
      this->frame_name_camera = "";
      this->detection_covariance_is_set = false;
      this->detection_covariance_reference_frame = "";
    }
  }

  // field types and members
  using _tag_id_type =
    int32_t;
  _tag_id_type tag_id;
  using _dimensions_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _dimensions_type dimensions;
  using _dimensions_is_set_type =
    bool;
  _dimensions_is_set_type dimensions_is_set;
  using _frame_name_fiducial_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_fiducial_type frame_name_fiducial;
  using _fiducial_pose_status_type =
    bosdyn_msgs::msg::AprilTagPropertiesAprilTagPoseStatus_<ContainerAllocator>;
  _fiducial_pose_status_type fiducial_pose_status;
  using _frame_name_fiducial_filtered_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_fiducial_filtered_type frame_name_fiducial_filtered;
  using _fiducial_filtered_pose_status_type =
    bosdyn_msgs::msg::AprilTagPropertiesAprilTagPoseStatus_<ContainerAllocator>;
  _fiducial_filtered_pose_status_type fiducial_filtered_pose_status;
  using _frame_name_camera_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_camera_type frame_name_camera;
  using _detection_covariance_type =
    bosdyn_msgs::msg::SE3Covariance_<ContainerAllocator>;
  _detection_covariance_type detection_covariance;
  using _detection_covariance_is_set_type =
    bool;
  _detection_covariance_is_set_type detection_covariance_is_set;
  using _detection_covariance_reference_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detection_covariance_reference_frame_type detection_covariance_reference_frame;

  // setters for named parameter idiom
  Type & set__tag_id(
    const int32_t & _arg)
  {
    this->tag_id = _arg;
    return *this;
  }
  Type & set__dimensions(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->dimensions = _arg;
    return *this;
  }
  Type & set__dimensions_is_set(
    const bool & _arg)
  {
    this->dimensions_is_set = _arg;
    return *this;
  }
  Type & set__frame_name_fiducial(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_fiducial = _arg;
    return *this;
  }
  Type & set__fiducial_pose_status(
    const bosdyn_msgs::msg::AprilTagPropertiesAprilTagPoseStatus_<ContainerAllocator> & _arg)
  {
    this->fiducial_pose_status = _arg;
    return *this;
  }
  Type & set__frame_name_fiducial_filtered(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_fiducial_filtered = _arg;
    return *this;
  }
  Type & set__fiducial_filtered_pose_status(
    const bosdyn_msgs::msg::AprilTagPropertiesAprilTagPoseStatus_<ContainerAllocator> & _arg)
  {
    this->fiducial_filtered_pose_status = _arg;
    return *this;
  }
  Type & set__frame_name_camera(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_camera = _arg;
    return *this;
  }
  Type & set__detection_covariance(
    const bosdyn_msgs::msg::SE3Covariance_<ContainerAllocator> & _arg)
  {
    this->detection_covariance = _arg;
    return *this;
  }
  Type & set__detection_covariance_is_set(
    const bool & _arg)
  {
    this->detection_covariance_is_set = _arg;
    return *this;
  }
  Type & set__detection_covariance_reference_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detection_covariance_reference_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AprilTagProperties
    std::shared_ptr<bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AprilTagProperties
    std::shared_ptr<bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AprilTagProperties_ & other) const
  {
    if (this->tag_id != other.tag_id) {
      return false;
    }
    if (this->dimensions != other.dimensions) {
      return false;
    }
    if (this->dimensions_is_set != other.dimensions_is_set) {
      return false;
    }
    if (this->frame_name_fiducial != other.frame_name_fiducial) {
      return false;
    }
    if (this->fiducial_pose_status != other.fiducial_pose_status) {
      return false;
    }
    if (this->frame_name_fiducial_filtered != other.frame_name_fiducial_filtered) {
      return false;
    }
    if (this->fiducial_filtered_pose_status != other.fiducial_filtered_pose_status) {
      return false;
    }
    if (this->frame_name_camera != other.frame_name_camera) {
      return false;
    }
    if (this->detection_covariance != other.detection_covariance) {
      return false;
    }
    if (this->detection_covariance_is_set != other.detection_covariance_is_set) {
      return false;
    }
    if (this->detection_covariance_reference_frame != other.detection_covariance_reference_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const AprilTagProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AprilTagProperties_

// alias to use template instance with default allocator
using AprilTagProperties =
  bosdyn_msgs::msg::AprilTagProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__APRIL_TAG_PROPERTIES__STRUCT_HPP_
