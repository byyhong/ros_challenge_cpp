// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneMarking_color
{
public:
  explicit Init_LaneMarking_color(::wauto_perception_msgs::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::LaneMarking color(::wauto_perception_msgs::msg::LaneMarking::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LaneMarking msg_;
};

class Init_LaneMarking_type
{
public:
  explicit Init_LaneMarking_type(::wauto_perception_msgs::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  Init_LaneMarking_color type(::wauto_perception_msgs::msg::LaneMarking::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_LaneMarking_color(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LaneMarking msg_;
};

class Init_LaneMarking_distance
{
public:
  explicit Init_LaneMarking_distance(::wauto_perception_msgs::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  Init_LaneMarking_type distance(::wauto_perception_msgs::msg::LaneMarking::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_LaneMarking_type(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LaneMarking msg_;
};

class Init_LaneMarking_id
{
public:
  Init_LaneMarking_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneMarking_distance id(::wauto_perception_msgs::msg::LaneMarking::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LaneMarking_distance(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LaneMarking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::LaneMarking>()
{
  return wauto_perception_msgs::msg::builder::Init_LaneMarking_id();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_
