// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/LimitLineArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE_ARRAY__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/limit_line_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LimitLineArray_limit_lines
{
public:
  explicit Init_LimitLineArray_limit_lines(::wauto_perception_msgs::msg::LimitLineArray & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::LimitLineArray limit_lines(::wauto_perception_msgs::msg::LimitLineArray::_limit_lines_type arg)
  {
    msg_.limit_lines = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LimitLineArray msg_;
};

class Init_LimitLineArray_header
{
public:
  Init_LimitLineArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimitLineArray_limit_lines header(::wauto_perception_msgs::msg::LimitLineArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LimitLineArray_limit_lines(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LimitLineArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::LimitLineArray>()
{
  return wauto_perception_msgs::msg::builder::Init_LimitLineArray_header();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE_ARRAY__BUILDER_HPP_
