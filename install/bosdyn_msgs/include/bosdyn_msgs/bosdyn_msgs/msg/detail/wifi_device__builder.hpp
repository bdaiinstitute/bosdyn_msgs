// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WifiDevice.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WIFI_DEVICE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WIFI_DEVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/wifi_device__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WifiDevice_associations
{
public:
  explicit Init_WifiDevice_associations(::bosdyn_msgs::msg::WifiDevice & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WifiDevice associations(::bosdyn_msgs::msg::WifiDevice::_associations_type arg)
  {
    msg_.associations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WifiDevice msg_;
};

class Init_WifiDevice_tx_power_dbm
{
public:
  explicit Init_WifiDevice_tx_power_dbm(::bosdyn_msgs::msg::WifiDevice & msg)
  : msg_(msg)
  {}
  Init_WifiDevice_associations tx_power_dbm(::bosdyn_msgs::msg::WifiDevice::_tx_power_dbm_type arg)
  {
    msg_.tx_power_dbm = std::move(arg);
    return Init_WifiDevice_associations(msg_);
  }

private:
  ::bosdyn_msgs::msg::WifiDevice msg_;
};

class Init_WifiDevice_ssid
{
public:
  explicit Init_WifiDevice_ssid(::bosdyn_msgs::msg::WifiDevice & msg)
  : msg_(msg)
  {}
  Init_WifiDevice_tx_power_dbm ssid(::bosdyn_msgs::msg::WifiDevice::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return Init_WifiDevice_tx_power_dbm(msg_);
  }

private:
  ::bosdyn_msgs::msg::WifiDevice msg_;
};

class Init_WifiDevice_mac_address
{
public:
  explicit Init_WifiDevice_mac_address(::bosdyn_msgs::msg::WifiDevice & msg)
  : msg_(msg)
  {}
  Init_WifiDevice_ssid mac_address(::bosdyn_msgs::msg::WifiDevice::_mac_address_type arg)
  {
    msg_.mac_address = std::move(arg);
    return Init_WifiDevice_ssid(msg_);
  }

private:
  ::bosdyn_msgs::msg::WifiDevice msg_;
};

class Init_WifiDevice_name
{
public:
  explicit Init_WifiDevice_name(::bosdyn_msgs::msg::WifiDevice & msg)
  : msg_(msg)
  {}
  Init_WifiDevice_mac_address name(::bosdyn_msgs::msg::WifiDevice::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_WifiDevice_mac_address(msg_);
  }

private:
  ::bosdyn_msgs::msg::WifiDevice msg_;
};

class Init_WifiDevice_type
{
public:
  Init_WifiDevice_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiDevice_name type(::bosdyn_msgs::msg::WifiDevice::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_WifiDevice_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::WifiDevice msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WifiDevice>()
{
  return bosdyn_msgs::msg::builder::Init_WifiDevice_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WIFI_DEVICE__BUILDER_HPP_
