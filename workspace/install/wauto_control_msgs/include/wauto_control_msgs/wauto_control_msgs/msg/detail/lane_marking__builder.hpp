// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_control_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_control_msgs/msg/detail/lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_control_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneMarking_coordinates_y
{
public:
  explicit Init_LaneMarking_coordinates_y(::wauto_control_msgs::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  ::wauto_control_msgs::msg::LaneMarking coordinates_y(::wauto_control_msgs::msg::LaneMarking::_coordinates_y_type arg)
  {
    msg_.coordinates_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_control_msgs::msg::LaneMarking msg_;
};

class Init_LaneMarking_coordinates_x
{
public:
  explicit Init_LaneMarking_coordinates_x(::wauto_control_msgs::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  Init_LaneMarking_coordinates_y coordinates_x(::wauto_control_msgs::msg::LaneMarking::_coordinates_x_type arg)
  {
    msg_.coordinates_x = std::move(arg);
    return Init_LaneMarking_coordinates_y(msg_);
  }

private:
  ::wauto_control_msgs::msg::LaneMarking msg_;
};

class Init_LaneMarking_heading_angle
{
public:
  explicit Init_LaneMarking_heading_angle(::wauto_control_msgs::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  Init_LaneMarking_coordinates_x heading_angle(::wauto_control_msgs::msg::LaneMarking::_heading_angle_type arg)
  {
    msg_.heading_angle = std::move(arg);
    return Init_LaneMarking_coordinates_x(msg_);
  }

private:
  ::wauto_control_msgs::msg::LaneMarking msg_;
};

class Init_LaneMarking_lateral_offset
{
public:
  explicit Init_LaneMarking_lateral_offset(::wauto_control_msgs::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  Init_LaneMarking_heading_angle lateral_offset(::wauto_control_msgs::msg::LaneMarking::_lateral_offset_type arg)
  {
    msg_.lateral_offset = std::move(arg);
    return Init_LaneMarking_heading_angle(msg_);
  }

private:
  ::wauto_control_msgs::msg::LaneMarking msg_;
};

class Init_LaneMarking_boundary_type
{
public:
  Init_LaneMarking_boundary_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneMarking_lateral_offset boundary_type(::wauto_control_msgs::msg::LaneMarking::_boundary_type_type arg)
  {
    msg_.boundary_type = std::move(arg);
    return Init_LaneMarking_lateral_offset(msg_);
  }

private:
  ::wauto_control_msgs::msg::LaneMarking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_control_msgs::msg::LaneMarking>()
{
  return wauto_control_msgs::msg::builder::Init_LaneMarking_boundary_type();
}

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_
