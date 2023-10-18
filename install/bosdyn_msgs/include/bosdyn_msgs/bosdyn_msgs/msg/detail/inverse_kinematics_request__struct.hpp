// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'root_tform_scene'
// Member 'scene_tform_task'
// Member 'scene_tform_body_nominal'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'nominal_arm_configuration'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_named_arm_configuration__struct.hpp"
// Member 'nominal_arm_configuration_overrides'
#include "bosdyn_msgs/msg/detail/arm_joint_position__struct.hpp"
// Member 'stance_specification'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_stance_specification__struct.hpp"
// Member 'tool_specification'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_tool_specification__struct.hpp"
// Member 'task_specification'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_task_specification__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverseKinematicsRequest_
{
  using Type = InverseKinematicsRequest_<ContainerAllocator>;

  explicit InverseKinematicsRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    root_tform_scene(_init),
    scene_tform_task(_init),
    nominal_arm_configuration(_init),
    nominal_arm_configuration_overrides(_init),
    scene_tform_body_nominal(_init),
    stance_specification(_init),
    tool_specification(_init),
    task_specification(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->root_frame_name = "";
      this->root_tform_scene_is_set = false;
      this->scene_tform_task_is_set = false;
      this->nominal_arm_configuration_overrides_is_set = false;
      this->scene_tform_body_nominal_is_set = false;
    }
  }

  explicit InverseKinematicsRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    root_frame_name(_alloc),
    root_tform_scene(_alloc, _init),
    scene_tform_task(_alloc, _init),
    nominal_arm_configuration(_alloc, _init),
    nominal_arm_configuration_overrides(_alloc, _init),
    scene_tform_body_nominal(_alloc, _init),
    stance_specification(_alloc, _init),
    tool_specification(_alloc, _init),
    task_specification(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->root_frame_name = "";
      this->root_tform_scene_is_set = false;
      this->scene_tform_task_is_set = false;
      this->nominal_arm_configuration_overrides_is_set = false;
      this->scene_tform_body_nominal_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _root_frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _root_frame_name_type root_frame_name;
  using _root_tform_scene_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _root_tform_scene_type root_tform_scene;
  using _root_tform_scene_is_set_type =
    bool;
  _root_tform_scene_is_set_type root_tform_scene_is_set;
  using _scene_tform_task_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _scene_tform_task_type scene_tform_task;
  using _scene_tform_task_is_set_type =
    bool;
  _scene_tform_task_is_set_type scene_tform_task_is_set;
  using _nominal_arm_configuration_type =
    bosdyn_msgs::msg::InverseKinematicsRequestNamedArmConfiguration_<ContainerAllocator>;
  _nominal_arm_configuration_type nominal_arm_configuration;
  using _nominal_arm_configuration_overrides_type =
    bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator>;
  _nominal_arm_configuration_overrides_type nominal_arm_configuration_overrides;
  using _nominal_arm_configuration_overrides_is_set_type =
    bool;
  _nominal_arm_configuration_overrides_is_set_type nominal_arm_configuration_overrides_is_set;
  using _scene_tform_body_nominal_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _scene_tform_body_nominal_type scene_tform_body_nominal;
  using _scene_tform_body_nominal_is_set_type =
    bool;
  _scene_tform_body_nominal_is_set_type scene_tform_body_nominal_is_set;
  using _stance_specification_type =
    bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator>;
  _stance_specification_type stance_specification;
  using _tool_specification_type =
    bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator>;
  _tool_specification_type tool_specification;
  using _task_specification_type =
    bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator>;
  _task_specification_type task_specification;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__root_frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->root_frame_name = _arg;
    return *this;
  }
  Type & set__root_tform_scene(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->root_tform_scene = _arg;
    return *this;
  }
  Type & set__root_tform_scene_is_set(
    const bool & _arg)
  {
    this->root_tform_scene_is_set = _arg;
    return *this;
  }
  Type & set__scene_tform_task(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->scene_tform_task = _arg;
    return *this;
  }
  Type & set__scene_tform_task_is_set(
    const bool & _arg)
  {
    this->scene_tform_task_is_set = _arg;
    return *this;
  }
  Type & set__nominal_arm_configuration(
    const bosdyn_msgs::msg::InverseKinematicsRequestNamedArmConfiguration_<ContainerAllocator> & _arg)
  {
    this->nominal_arm_configuration = _arg;
    return *this;
  }
  Type & set__nominal_arm_configuration_overrides(
    const bosdyn_msgs::msg::ArmJointPosition_<ContainerAllocator> & _arg)
  {
    this->nominal_arm_configuration_overrides = _arg;
    return *this;
  }
  Type & set__nominal_arm_configuration_overrides_is_set(
    const bool & _arg)
  {
    this->nominal_arm_configuration_overrides_is_set = _arg;
    return *this;
  }
  Type & set__scene_tform_body_nominal(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->scene_tform_body_nominal = _arg;
    return *this;
  }
  Type & set__scene_tform_body_nominal_is_set(
    const bool & _arg)
  {
    this->scene_tform_body_nominal_is_set = _arg;
    return *this;
  }
  Type & set__stance_specification(
    const bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification_<ContainerAllocator> & _arg)
  {
    this->stance_specification = _arg;
    return *this;
  }
  Type & set__tool_specification(
    const bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification_<ContainerAllocator> & _arg)
  {
    this->tool_specification = _arg;
    return *this;
  }
  Type & set__task_specification(
    const bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification_<ContainerAllocator> & _arg)
  {
    this->task_specification = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequest
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__InverseKinematicsRequest
    std::shared_ptr<bosdyn_msgs::msg::InverseKinematicsRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverseKinematicsRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->root_frame_name != other.root_frame_name) {
      return false;
    }
    if (this->root_tform_scene != other.root_tform_scene) {
      return false;
    }
    if (this->root_tform_scene_is_set != other.root_tform_scene_is_set) {
      return false;
    }
    if (this->scene_tform_task != other.scene_tform_task) {
      return false;
    }
    if (this->scene_tform_task_is_set != other.scene_tform_task_is_set) {
      return false;
    }
    if (this->nominal_arm_configuration != other.nominal_arm_configuration) {
      return false;
    }
    if (this->nominal_arm_configuration_overrides != other.nominal_arm_configuration_overrides) {
      return false;
    }
    if (this->nominal_arm_configuration_overrides_is_set != other.nominal_arm_configuration_overrides_is_set) {
      return false;
    }
    if (this->scene_tform_body_nominal != other.scene_tform_body_nominal) {
      return false;
    }
    if (this->scene_tform_body_nominal_is_set != other.scene_tform_body_nominal_is_set) {
      return false;
    }
    if (this->stance_specification != other.stance_specification) {
      return false;
    }
    if (this->tool_specification != other.tool_specification) {
      return false;
    }
    if (this->task_specification != other.task_specification) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverseKinematicsRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverseKinematicsRequest_

// alias to use template instance with default allocator
using InverseKinematicsRequest =
  bosdyn_msgs::msg::InverseKinematicsRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST__STRUCT_HPP_
