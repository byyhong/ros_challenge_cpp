// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_control_msgs:msg/LaneBoundaries.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__BUILDER_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_control_msgs/msg/detail/lane_boundaries__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneBoundaries_left
{
public:
  explicit Init_LaneBoundaries_left(::wauto_control_msgs::msg::LaneBoundaries & msg)
  : msg_(msg)
  {}
  ::wauto_control_msgs::msg::LaneBoundaries left(::wauto_control_msgs::msg::LaneBoundaries::_left_type arg)
  {
    msg_.left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_control_msgs::msg::LaneBoundaries msg_;
};

class Init_LaneBoundaries_right
{
public:
  Init_LaneBoundaries_right()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneBoundaries_left right(::wauto_control_msgs::msg::LaneBoundaries::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_LaneBoundaries_left(msg_);
  }

private:
  ::wauto_control_msgs::msg::LaneBoundaries msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_control_msgs::msg::LaneBoundaries>()
{
  return wauto_control_msgs::msg::builder::Init_LaneBoundaries_right();
}

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__BUILDER_HPP_
