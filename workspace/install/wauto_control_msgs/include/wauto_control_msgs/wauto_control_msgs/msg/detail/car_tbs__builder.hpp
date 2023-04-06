// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_control_msgs:msg/CarTBS.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__BUILDER_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_control_msgs/msg/detail/car_tbs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CarTBS_s
{
public:
  explicit Init_CarTBS_s(::wauto_control_msgs::msg::CarTBS & msg)
  : msg_(msg)
  {}
  ::wauto_control_msgs::msg::CarTBS s(::wauto_control_msgs::msg::CarTBS::_s_type arg)
  {
    msg_.s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarTBS msg_;
};

class Init_CarTBS_b
{
public:
  explicit Init_CarTBS_b(::wauto_control_msgs::msg::CarTBS & msg)
  : msg_(msg)
  {}
  Init_CarTBS_s b(::wauto_control_msgs::msg::CarTBS::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_CarTBS_s(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarTBS msg_;
};

class Init_CarTBS_t
{
public:
  Init_CarTBS_t()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarTBS_b t(::wauto_control_msgs::msg::CarTBS::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_CarTBS_b(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarTBS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_control_msgs::msg::CarTBS>()
{
  return wauto_control_msgs::msg::builder::Init_CarTBS_t();
}

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__BUILDER_HPP_
