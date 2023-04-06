// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/RoiArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI_ARRAY__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/roi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RoiArray_rois
{
public:
  explicit Init_RoiArray_rois(::wauto_perception_msgs::msg::RoiArray & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::RoiArray rois(::wauto_perception_msgs::msg::RoiArray::_rois_type arg)
  {
    msg_.rois = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::RoiArray msg_;
};

class Init_RoiArray_header
{
public:
  Init_RoiArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoiArray_rois header(::wauto_perception_msgs::msg::RoiArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RoiArray_rois(msg_);
  }

private:
  ::wauto_perception_msgs::msg::RoiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::RoiArray>()
{
  return wauto_perception_msgs::msg::builder::Init_RoiArray_header();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI_ARRAY__BUILDER_HPP_
