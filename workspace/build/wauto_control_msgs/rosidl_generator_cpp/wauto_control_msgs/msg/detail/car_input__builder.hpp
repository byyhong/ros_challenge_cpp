// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_control_msgs:msg/CarInput.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__BUILDER_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_control_msgs/msg/detail/car_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CarInput_gamma
{
public:
  explicit Init_CarInput_gamma(::wauto_control_msgs::msg::CarInput & msg)
  : msg_(msg)
  {}
  ::wauto_control_msgs::msg::CarInput gamma(::wauto_control_msgs::msg::CarInput::_gamma_type arg)
  {
    msg_.gamma = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarInput msg_;
};

class Init_CarInput_psi_dot
{
public:
  explicit Init_CarInput_psi_dot(::wauto_control_msgs::msg::CarInput & msg)
  : msg_(msg)
  {}
  Init_CarInput_gamma psi_dot(::wauto_control_msgs::msg::CarInput::_psi_dot_type arg)
  {
    msg_.psi_dot = std::move(arg);
    return Init_CarInput_gamma(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarInput msg_;
};

class Init_CarInput_v_dot
{
public:
  Init_CarInput_v_dot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarInput_psi_dot v_dot(::wauto_control_msgs::msg::CarInput::_v_dot_type arg)
  {
    msg_.v_dot = std::move(arg);
    return Init_CarInput_psi_dot(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_control_msgs::msg::CarInput>()
{
  return wauto_control_msgs::msg::builder::Init_CarInput_v_dot();
}

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__BUILDER_HPP_
