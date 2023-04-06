// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/LaneMarkingArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/lane_marking_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneMarkingArray_lane_markings
{
public:
  explicit Init_LaneMarkingArray_lane_markings(::wauto_perception_msgs::msg::LaneMarkingArray & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::LaneMarkingArray lane_markings(::wauto_perception_msgs::msg::LaneMarkingArray::_lane_markings_type arg)
  {
    msg_.lane_markings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LaneMarkingArray msg_;
};

class Init_LaneMarkingArray_header
{
public:
  Init_LaneMarkingArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneMarkingArray_lane_markings header(::wauto_perception_msgs::msg::LaneMarkingArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneMarkingArray_lane_markings(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LaneMarkingArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::LaneMarkingArray>()
{
  return wauto_perception_msgs::msg::builder::Init_LaneMarkingArray_header();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__BUILDER_HPP_
