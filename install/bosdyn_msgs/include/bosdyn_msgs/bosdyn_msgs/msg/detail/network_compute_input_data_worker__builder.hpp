// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputDataWorker.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_WORKER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_WORKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_input_data_worker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeInputDataWorker_parameters_is_set
{
public:
  explicit Init_NetworkComputeInputDataWorker_parameters_is_set(::bosdyn_msgs::msg::NetworkComputeInputDataWorker & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeInputDataWorker parameters_is_set(::bosdyn_msgs::msg::NetworkComputeInputDataWorker::_parameters_is_set_type arg)
  {
    msg_.parameters_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputDataWorker msg_;
};

class Init_NetworkComputeInputDataWorker_parameters
{
public:
  explicit Init_NetworkComputeInputDataWorker_parameters(::bosdyn_msgs::msg::NetworkComputeInputDataWorker & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeInputDataWorker_parameters_is_set parameters(::bosdyn_msgs::msg::NetworkComputeInputDataWorker::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_NetworkComputeInputDataWorker_parameters_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputDataWorker msg_;
};

class Init_NetworkComputeInputDataWorker_images
{
public:
  Init_NetworkComputeInputDataWorker_images()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeInputDataWorker_parameters images(::bosdyn_msgs::msg::NetworkComputeInputDataWorker::_images_type arg)
  {
    msg_.images = std::move(arg);
    return Init_NetworkComputeInputDataWorker_parameters(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputDataWorker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeInputDataWorker>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeInputDataWorker_images();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_WORKER__BUILDER_HPP_
