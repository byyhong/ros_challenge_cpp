// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__BUILDER_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_control_msgs/msg/detail/car_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CarTrajectory_x
{
public:
  explicit Init_CarTrajectory_x(::wauto_control_msgs::msg::CarTrajectory & msg)
  : msg_(msg)
  {}
  ::wauto_control_msgs::msg::CarTrajectory x(::wauto_control_msgs::msg::CarTrajectory::_x_type arg)
  {
    msg_.x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarTrajectory msg_;
};

class Init_CarTrajectory_u
{
public:
  Init_CarTrajectory_u()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarTrajectory_x u(::wauto_control_msgs::msg::CarTrajectory::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_CarTrajectory_x(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_control_msgs::msg::CarTrajectory>()
{
  return wauto_control_msgs::msg::builder::Init_CarTrajectory_u();
}

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__BUILDER_HPP_
