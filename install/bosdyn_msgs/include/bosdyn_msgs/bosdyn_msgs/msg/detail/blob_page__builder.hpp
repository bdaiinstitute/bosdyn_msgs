// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BlobPage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/blob_page__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BlobPage_page_is_set
{
public:
  explicit Init_BlobPage_page_is_set(::bosdyn_msgs::msg::BlobPage & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BlobPage page_is_set(::bosdyn_msgs::msg::BlobPage::_page_is_set_type arg)
  {
    msg_.page_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BlobPage msg_;
};

class Init_BlobPage_page
{
public:
  explicit Init_BlobPage_page(::bosdyn_msgs::msg::BlobPage & msg)
  : msg_(msg)
  {}
  Init_BlobPage_page_is_set page(::bosdyn_msgs::msg::BlobPage::_page_type arg)
  {
    msg_.page = std::move(arg);
    return Init_BlobPage_page_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BlobPage msg_;
};

class Init_BlobPage_spec_is_set
{
public:
  explicit Init_BlobPage_spec_is_set(::bosdyn_msgs::msg::BlobPage & msg)
  : msg_(msg)
  {}
  Init_BlobPage_page spec_is_set(::bosdyn_msgs::msg::BlobPage::_spec_is_set_type arg)
  {
    msg_.spec_is_set = std::move(arg);
    return Init_BlobPage_page(msg_);
  }

private:
  ::bosdyn_msgs::msg::BlobPage msg_;
};

class Init_BlobPage_spec
{
public:
  Init_BlobPage_spec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlobPage_spec_is_set spec(::bosdyn_msgs::msg::BlobPage::_spec_type arg)
  {
    msg_.spec = std::move(arg);
    return Init_BlobPage_spec_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BlobPage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BlobPage>()
{
  return bosdyn_msgs::msg::builder::Init_BlobPage_spec();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGE__BUILDER_HPP_
