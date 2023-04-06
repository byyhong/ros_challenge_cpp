// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/Roi.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Roi_top_right
{
public:
  explicit Init_Roi_top_right(::wauto_perception_msgs::msg::Roi & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::Roi top_right(::wauto_perception_msgs::msg::Roi::_top_right_type arg)
  {
    msg_.top_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Roi msg_;
};

class Init_Roi_bottom_left
{
public:
  explicit Init_Roi_bottom_left(::wauto_perception_msgs::msg::Roi & msg)
  : msg_(msg)
  {}
  Init_Roi_top_right bottom_left(::wauto_perception_msgs::msg::Roi::_bottom_left_type arg)
  {
    msg_.bottom_left = std::move(arg);
    return Init_Roi_top_right(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Roi msg_;
};

class Init_Roi_classification
{
public:
  explicit Init_Roi_classification(::wauto_perception_msgs::msg::Roi & msg)
  : msg_(msg)
  {}
  Init_Roi_bottom_left classification(::wauto_perception_msgs::msg::Roi::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Roi_bottom_left(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Roi msg_;
};

class Init_Roi_id
{
public:
  Init_Roi_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Roi_classification id(::wauto_perception_msgs::msg::Roi::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Roi_classification(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Roi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::Roi>()
{
  return wauto_perception_msgs::msg::builder::Init_Roi_id();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI__BUILDER_HPP_
