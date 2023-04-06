// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_control_msgs:msg/CarSafety.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__BUILDER_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_control_msgs/msg/detail/car_safety__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CarSafety_finished_traj
{
public:
  explicit Init_CarSafety_finished_traj(::wauto_control_msgs::msg::CarSafety & msg)
  : msg_(msg)
  {}
  ::wauto_control_msgs::msg::CarSafety finished_traj(::wauto_control_msgs::msg::CarSafety::_finished_traj_type arg)
  {
    msg_.finished_traj = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarSafety msg_;
};

class Init_CarSafety_publishing_traj
{
public:
  explicit Init_CarSafety_publishing_traj(::wauto_control_msgs::msg::CarSafety & msg)
  : msg_(msg)
  {}
  Init_CarSafety_finished_traj publishing_traj(::wauto_control_msgs::msg::CarSafety::_publishing_traj_type arg)
  {
    msg_.publishing_traj = std::move(arg);
    return Init_CarSafety_finished_traj(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarSafety msg_;
};

class Init_CarSafety_car_disabled
{
public:
  explicit Init_CarSafety_car_disabled(::wauto_control_msgs::msg::CarSafety & msg)
  : msg_(msg)
  {}
  Init_CarSafety_publishing_traj car_disabled(::wauto_control_msgs::msg::CarSafety::_car_disabled_type arg)
  {
    msg_.car_disabled = std::move(arg);
    return Init_CarSafety_publishing_traj(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarSafety msg_;
};

class Init_CarSafety_human_stop
{
public:
  explicit Init_CarSafety_human_stop(::wauto_control_msgs::msg::CarSafety & msg)
  : msg_(msg)
  {}
  Init_CarSafety_car_disabled human_stop(::wauto_control_msgs::msg::CarSafety::_human_stop_type arg)
  {
    msg_.human_stop = std::move(arg);
    return Init_CarSafety_car_disabled(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarSafety msg_;
};

class Init_CarSafety_human_ready
{
public:
  Init_CarSafety_human_ready()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarSafety_human_stop human_ready(::wauto_control_msgs::msg::CarSafety::_human_ready_type arg)
  {
    msg_.human_ready = std::move(arg);
    return Init_CarSafety_human_stop(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarSafety msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_control_msgs::msg::CarSafety>()
{
  return wauto_control_msgs::msg::builder::Init_CarSafety_human_ready();
}

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__BUILDER_HPP_
