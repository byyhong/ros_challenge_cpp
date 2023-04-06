// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/AVState.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__AV_STATE__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__AV_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/av_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_AVState_unused_msg_placeholder
{
public:
  Init_AVState_unused_msg_placeholder()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wauto_vehicle_msgs::msg::AVState unused_msg_placeholder(::wauto_vehicle_msgs::msg::AVState::_unused_msg_placeholder_type arg)
  {
    msg_.unused_msg_placeholder = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::AVState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::AVState>()
{
  return wauto_vehicle_msgs::msg::builder::Init_AVState_unused_msg_placeholder();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__AV_STATE__BUILDER_HPP_
