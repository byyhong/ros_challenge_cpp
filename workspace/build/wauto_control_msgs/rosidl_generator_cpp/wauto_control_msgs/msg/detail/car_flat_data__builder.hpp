// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_control_msgs:msg/CarFlatData.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__BUILDER_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_control_msgs/msg/detail/car_flat_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_CarFlatData_x
{
public:
  explicit Init_CarFlatData_x(::wauto_control_msgs::msg::CarFlatData & msg)
  : msg_(msg)
  {}
  ::wauto_control_msgs::msg::CarFlatData x(::wauto_control_msgs::msg::CarFlatData::_x_type arg)
  {
    msg_.x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarFlatData msg_;
};

class Init_CarFlatData_v_max
{
public:
  explicit Init_CarFlatData_v_max(::wauto_control_msgs::msg::CarFlatData & msg)
  : msg_(msg)
  {}
  Init_CarFlatData_x v_max(::wauto_control_msgs::msg::CarFlatData::_v_max_type arg)
  {
    msg_.v_max = std::move(arg);
    return Init_CarFlatData_x(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarFlatData msg_;
};

class Init_CarFlatData_a_max
{
public:
  explicit Init_CarFlatData_a_max(::wauto_control_msgs::msg::CarFlatData & msg)
  : msg_(msg)
  {}
  Init_CarFlatData_v_max a_max(::wauto_control_msgs::msg::CarFlatData::_a_max_type arg)
  {
    msg_.a_max = std::move(arg);
    return Init_CarFlatData_v_max(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarFlatData msg_;
};

class Init_CarFlatData_gamma_max
{
public:
  explicit Init_CarFlatData_gamma_max(::wauto_control_msgs::msg::CarFlatData & msg)
  : msg_(msg)
  {}
  Init_CarFlatData_a_max gamma_max(::wauto_control_msgs::msg::CarFlatData::_gamma_max_type arg)
  {
    msg_.gamma_max = std::move(arg);
    return Init_CarFlatData_a_max(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarFlatData msg_;
};

class Init_CarFlatData_nu
{
public:
  explicit Init_CarFlatData_nu(::wauto_control_msgs::msg::CarFlatData & msg)
  : msg_(msg)
  {}
  Init_CarFlatData_gamma_max nu(::wauto_control_msgs::msg::CarFlatData::_nu_type arg)
  {
    msg_.nu = std::move(arg);
    return Init_CarFlatData_gamma_max(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarFlatData msg_;
};

class Init_CarFlatData_l
{
public:
  Init_CarFlatData_l()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarFlatData_nu l(::wauto_control_msgs::msg::CarFlatData::_l_type arg)
  {
    msg_.l = std::move(arg);
    return Init_CarFlatData_nu(msg_);
  }

private:
  ::wauto_control_msgs::msg::CarFlatData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_control_msgs::msg::CarFlatData>()
{
  return wauto_control_msgs::msg::builder::Init_CarFlatData_l();
}

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__BUILDER_HPP_
