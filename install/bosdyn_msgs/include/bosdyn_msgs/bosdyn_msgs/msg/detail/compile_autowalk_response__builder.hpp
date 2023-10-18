// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CompileAutowalkResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/compile_autowalk_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CompileAutowalkResponse_loop_node_is_set
{
public:
  explicit Init_CompileAutowalkResponse_loop_node_is_set(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CompileAutowalkResponse loop_node_is_set(::bosdyn_msgs::msg::CompileAutowalkResponse::_loop_node_is_set_type arg)
  {
    msg_.loop_node_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_loop_node
{
public:
  explicit Init_CompileAutowalkResponse_loop_node(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkResponse_loop_node_is_set loop_node(::bosdyn_msgs::msg::CompileAutowalkResponse::_loop_node_type arg)
  {
    msg_.loop_node = std::move(arg);
    return Init_CompileAutowalkResponse_loop_node_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_docking_node_is_set
{
public:
  explicit Init_CompileAutowalkResponse_docking_node_is_set(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkResponse_loop_node docking_node_is_set(::bosdyn_msgs::msg::CompileAutowalkResponse::_docking_node_is_set_type arg)
  {
    msg_.docking_node_is_set = std::move(arg);
    return Init_CompileAutowalkResponse_loop_node(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_docking_node
{
public:
  explicit Init_CompileAutowalkResponse_docking_node(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkResponse_docking_node_is_set docking_node(::bosdyn_msgs::msg::CompileAutowalkResponse::_docking_node_type arg)
  {
    msg_.docking_node = std::move(arg);
    return Init_CompileAutowalkResponse_docking_node_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_failed_elements
{
public:
  explicit Init_CompileAutowalkResponse_failed_elements(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkResponse_docking_node failed_elements(::bosdyn_msgs::msg::CompileAutowalkResponse::_failed_elements_type arg)
  {
    msg_.failed_elements = std::move(arg);
    return Init_CompileAutowalkResponse_docking_node(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_element_identifiers
{
public:
  explicit Init_CompileAutowalkResponse_element_identifiers(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkResponse_failed_elements element_identifiers(::bosdyn_msgs::msg::CompileAutowalkResponse::_element_identifiers_type arg)
  {
    msg_.element_identifiers = std::move(arg);
    return Init_CompileAutowalkResponse_failed_elements(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_root_is_set
{
public:
  explicit Init_CompileAutowalkResponse_root_is_set(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkResponse_element_identifiers root_is_set(::bosdyn_msgs::msg::CompileAutowalkResponse::_root_is_set_type arg)
  {
    msg_.root_is_set = std::move(arg);
    return Init_CompileAutowalkResponse_element_identifiers(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_root
{
public:
  explicit Init_CompileAutowalkResponse_root(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkResponse_root_is_set root(::bosdyn_msgs::msg::CompileAutowalkResponse::_root_type arg)
  {
    msg_.root = std::move(arg);
    return Init_CompileAutowalkResponse_root_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_status
{
public:
  explicit Init_CompileAutowalkResponse_status(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkResponse_root status(::bosdyn_msgs::msg::CompileAutowalkResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CompileAutowalkResponse_root(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_header_is_set
{
public:
  explicit Init_CompileAutowalkResponse_header_is_set(::bosdyn_msgs::msg::CompileAutowalkResponse & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkResponse_status header_is_set(::bosdyn_msgs::msg::CompileAutowalkResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CompileAutowalkResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

class Init_CompileAutowalkResponse_header
{
public:
  Init_CompileAutowalkResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompileAutowalkResponse_header_is_set header(::bosdyn_msgs::msg::CompileAutowalkResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CompileAutowalkResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CompileAutowalkResponse>()
{
  return bosdyn_msgs::msg::builder::Init_CompileAutowalkResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_RESPONSE__BUILDER_HPP_
