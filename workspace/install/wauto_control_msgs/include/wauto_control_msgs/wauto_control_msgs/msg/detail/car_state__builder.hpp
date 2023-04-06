// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_control_msgs:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_STATE__BUILDER_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_control_msgs/msg/detail/car_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CarState_psi
{
public:
  explicit Init_CarState_psi(::wauto_control_msgs::msg::CarState & msg)
  : msg_(msg)
  {}
  ::wauto_control_msgs::msg::CarState psi(::wauto_control_msgs::msg::CarState::_psi_type arg)
  {
    msg_.psi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarState msg_;
};

class Init_CarState_v
{
public:
  explicit Init_CarState_v(::wauto_control_msgs::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_psi v(::wauto_control_msgs::msg::CarState::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_CarState_psi(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarState msg_;
};

class Init_CarState_y
{
public:
  explicit Init_CarState_y(::wauto_control_msgs::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_v y(::wauto_control_msgs::msg::CarState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CarState_v(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarState msg_;
};

class Init_CarState_x
{
public:
  Init_CarState_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarState_y x(::wauto_control_msgs::msg::CarState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CarState_y(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_control_msgs::msg::CarState>()
{
  return wauto_control_msgs::msg::builder::Init_CarState_x();
}

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_STATE__BUILDER_HPP_
