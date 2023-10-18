// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataAcquisitionOnInterruption.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_acquisition_on_interruption__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataAcquisitionOnInterruption_keys_for_lease_use_error_message
{
public:
  explicit Init_DataAcquisitionOnInterruption_keys_for_lease_use_error_message(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption keys_for_lease_use_error_message(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_keys_for_lease_use_error_message_type arg)
  {
    msg_.keys_for_lease_use_error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_default_metadata_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_default_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_keys_for_lease_use_error_message default_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_default_metadata_is_set_type arg)
  {
    msg_.default_metadata_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_keys_for_lease_use_error_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_default_metadata
{
public:
  explicit Init_DataAcquisitionOnInterruption_default_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_default_metadata_is_set default_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_default_metadata_type arg)
  {
    msg_.default_metadata = std::move(arg);
    return Init_DataAcquisitionOnInterruption_default_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_child_node_exception_metadata_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_child_node_exception_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_default_metadata child_node_exception_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_child_node_exception_metadata_is_set_type arg)
  {
    msg_.child_node_exception_metadata_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_default_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_child_node_exception_metadata
{
public:
  explicit Init_DataAcquisitionOnInterruption_child_node_exception_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_child_node_exception_metadata_is_set child_node_exception_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_child_node_exception_metadata_type arg)
  {
    msg_.child_node_exception_metadata = std::move(arg);
    return Init_DataAcquisitionOnInterruption_child_node_exception_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_child_node_error_metadata_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_child_node_error_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_child_node_exception_metadata child_node_error_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_child_node_error_metadata_is_set_type arg)
  {
    msg_.child_node_error_metadata_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_child_node_exception_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_child_node_error_metadata
{
public:
  explicit Init_DataAcquisitionOnInterruption_child_node_error_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_child_node_error_metadata_is_set child_node_error_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_child_node_error_metadata_type arg)
  {
    msg_.child_node_error_metadata = std::move(arg);
    return Init_DataAcquisitionOnInterruption_child_node_error_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_play_mission_timeout_metadata_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_play_mission_timeout_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_child_node_error_metadata play_mission_timeout_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_play_mission_timeout_metadata_is_set_type arg)
  {
    msg_.play_mission_timeout_metadata_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_child_node_error_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_play_mission_timeout_metadata
{
public:
  explicit Init_DataAcquisitionOnInterruption_play_mission_timeout_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_play_mission_timeout_metadata_is_set play_mission_timeout_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_play_mission_timeout_metadata_type arg)
  {
    msg_.play_mission_timeout_metadata = std::move(arg);
    return Init_DataAcquisitionOnInterruption_play_mission_timeout_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_lease_use_error_metadata_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_lease_use_error_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_play_mission_timeout_metadata lease_use_error_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_lease_use_error_metadata_is_set_type arg)
  {
    msg_.lease_use_error_metadata_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_play_mission_timeout_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_lease_use_error_metadata
{
public:
  explicit Init_DataAcquisitionOnInterruption_lease_use_error_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_lease_use_error_metadata_is_set lease_use_error_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_lease_use_error_metadata_type arg)
  {
    msg_.lease_use_error_metadata = std::move(arg);
    return Init_DataAcquisitionOnInterruption_lease_use_error_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_stop_mission_metadata_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_stop_mission_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_lease_use_error_metadata stop_mission_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_stop_mission_metadata_is_set_type arg)
  {
    msg_.stop_mission_metadata_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_lease_use_error_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_stop_mission_metadata
{
public:
  explicit Init_DataAcquisitionOnInterruption_stop_mission_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_stop_mission_metadata_is_set stop_mission_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_stop_mission_metadata_type arg)
  {
    msg_.stop_mission_metadata = std::move(arg);
    return Init_DataAcquisitionOnInterruption_stop_mission_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_load_mission_metadata_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_load_mission_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_stop_mission_metadata load_mission_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_load_mission_metadata_is_set_type arg)
  {
    msg_.load_mission_metadata_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_stop_mission_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_load_mission_metadata
{
public:
  explicit Init_DataAcquisitionOnInterruption_load_mission_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_load_mission_metadata_is_set load_mission_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_load_mission_metadata_type arg)
  {
    msg_.load_mission_metadata = std::move(arg);
    return Init_DataAcquisitionOnInterruption_load_mission_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_restart_mission_metadata_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_restart_mission_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_load_mission_metadata restart_mission_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_restart_mission_metadata_is_set_type arg)
  {
    msg_.restart_mission_metadata_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_load_mission_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_restart_mission_metadata
{
public:
  explicit Init_DataAcquisitionOnInterruption_restart_mission_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_restart_mission_metadata_is_set restart_mission_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_restart_mission_metadata_type arg)
  {
    msg_.restart_mission_metadata = std::move(arg);
    return Init_DataAcquisitionOnInterruption_restart_mission_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_pause_mission_metadata_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_pause_mission_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_restart_mission_metadata pause_mission_metadata_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_pause_mission_metadata_is_set_type arg)
  {
    msg_.pause_mission_metadata_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_restart_mission_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_pause_mission_metadata
{
public:
  explicit Init_DataAcquisitionOnInterruption_pause_mission_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_pause_mission_metadata_is_set pause_mission_metadata(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_pause_mission_metadata_type arg)
  {
    msg_.pause_mission_metadata = std::move(arg);
    return Init_DataAcquisitionOnInterruption_pause_mission_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_request_when_interrupted_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_request_when_interrupted_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_pause_mission_metadata request_when_interrupted_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_request_when_interrupted_is_set_type arg)
  {
    msg_.request_when_interrupted_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_pause_mission_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_request_when_interrupted
{
public:
  explicit Init_DataAcquisitionOnInterruption_request_when_interrupted(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_request_when_interrupted_is_set request_when_interrupted(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_request_when_interrupted_type arg)
  {
    msg_.request_when_interrupted = std::move(arg);
    return Init_DataAcquisitionOnInterruption_request_when_interrupted_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_child_is_set
{
public:
  explicit Init_DataAcquisitionOnInterruption_child_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionOnInterruption_request_when_interrupted child_is_set(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_child_is_set_type arg)
  {
    msg_.child_is_set = std::move(arg);
    return Init_DataAcquisitionOnInterruption_request_when_interrupted(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

class Init_DataAcquisitionOnInterruption_child
{
public:
  Init_DataAcquisitionOnInterruption_child()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataAcquisitionOnInterruption_child_is_set child(::bosdyn_msgs::msg::DataAcquisitionOnInterruption::_child_type arg)
  {
    msg_.child = std::move(arg);
    return Init_DataAcquisitionOnInterruption_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionOnInterruption msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataAcquisitionOnInterruption>()
{
  return bosdyn_msgs::msg::builder::Init_DataAcquisitionOnInterruption_child();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__BUILDER_HPP_
