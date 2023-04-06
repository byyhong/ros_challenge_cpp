// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/object_classification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectClassification_value
{
public:
  explicit Init_ObjectClassification_value(::wauto_perception_msgs::msg::ObjectClassification & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::ObjectClassification value(::wauto_perception_msgs::msg::ObjectClassification::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::ObjectClassification msg_;
};

class Init_ObjectClassification_custom_classification
{
public:
  explicit Init_ObjectClassification_custom_classification(::wauto_perception_msgs::msg::ObjectClassification & msg)
  : msg_(msg)
  {}
  Init_ObjectClassification_value custom_classification(::wauto_perception_msgs::msg::ObjectClassification::_custom_classification_type arg)
  {
    msg_.custom_classification = std::move(arg);
    return Init_ObjectClassification_value(msg_);
  }

private:
  ::wauto_perception_msgs::msg::ObjectClassification msg_;
};

class Init_ObjectClassification_dynprop
{
public:
  explicit Init_ObjectClassification_dynprop(::wauto_perception_msgs::msg::ObjectClassification & msg)
  : msg_(msg)
  {}
  Init_ObjectClassification_custom_classification dynprop(::wauto_perception_msgs::msg::ObjectClassification::_dynprop_type arg)
  {
    msg_.dynprop = std::move(arg);
    return Init_ObjectClassification_custom_classification(msg_);
  }

private:
  ::wauto_perception_msgs::msg::ObjectClassification msg_;
};

class Init_ObjectClassification_classification
{
public:
  explicit Init_ObjectClassification_classification(::wauto_perception_msgs::msg::ObjectClassification & msg)
  : msg_(msg)
  {}
  Init_ObjectClassification_dynprop classification(::wauto_perception_msgs::msg::ObjectClassification::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_ObjectClassification_dynprop(msg_);
  }

private:
  ::wauto_perception_msgs::msg::ObjectClassification msg_;
};

class Init_ObjectClassification_confidence
{
public:
  Init_ObjectClassification_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectClassification_classification confidence(::wauto_perception_msgs::msg::ObjectClassification::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_ObjectClassification_classification(msg_);
  }

private:
  ::wauto_perception_msgs::msg::ObjectClassification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::ObjectClassification>()
{
  return wauto_perception_msgs::msg::builder::Init_ObjectClassification_confidence();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__BUILDER_HPP_
