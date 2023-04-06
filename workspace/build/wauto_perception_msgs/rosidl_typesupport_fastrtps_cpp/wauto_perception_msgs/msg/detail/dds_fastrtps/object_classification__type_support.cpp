// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wauto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice
#include "wauto_perception_msgs/msg/detail/object_classification__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wauto_perception_msgs/msg/detail/object_classification__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace wauto_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_perception_msgs
cdr_serialize(
  const wauto_perception_msgs::msg::ObjectClassification & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: confidence
  cdr << ros_message.confidence;
  // Member: classification
  cdr << ros_message.classification;
  // Member: dynprop
  cdr << ros_message.dynprop;
  // Member: custom_classification
  cdr << ros_message.custom_classification;
  // Member: value
  cdr << ros_message.value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wauto_perception_msgs::msg::ObjectClassification & ros_message)
{
  // Member: confidence
  cdr >> ros_message.confidence;

  // Member: classification
  cdr >> ros_message.classification;

  // Member: dynprop
  cdr >> ros_message.dynprop;

  // Member: custom_classification
  cdr >> ros_message.custom_classification;

  // Member: value
  cdr >> ros_message.value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_perception_msgs
get_serialized_size(
  const wauto_perception_msgs::msg::ObjectClassification & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: confidence
  {
    size_t item_size = sizeof(ros_message.confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: classification
  {
    size_t item_size = sizeof(ros_message.classification);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dynprop
  {
    size_t item_size = sizeof(ros_message.dynprop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: custom_classification
  {
    size_t item_size = sizeof(ros_message.custom_classification);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: value
  {
    size_t item_size = sizeof(ros_message.value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_perception_msgs
max_serialized_size_ObjectClassification(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: classification
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dynprop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: custom_classification
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ObjectClassification__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wauto_perception_msgs::msg::ObjectClassification *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObjectClassification__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wauto_perception_msgs::msg::ObjectClassification *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObjectClassification__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wauto_perception_msgs::msg::ObjectClassification *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObjectClassification__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ObjectClassification(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ObjectClassification__callbacks = {
  "wauto_perception_msgs::msg",
  "ObjectClassification",
  _ObjectClassification__cdr_serialize,
  _ObjectClassification__cdr_deserialize,
  _ObjectClassification__get_serialized_size,
  _ObjectClassification__max_serialized_size
};

static rosidl_message_type_support_t _ObjectClassification__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObjectClassification__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wauto_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wauto_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<wauto_perception_msgs::msg::ObjectClassification>()
{
  return &wauto_perception_msgs::msg::typesupport_fastrtps_cpp::_ObjectClassification__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wauto_perception_msgs, msg, ObjectClassification)() {
  return &wauto_perception_msgs::msg::typesupport_fastrtps_cpp::_ObjectClassification__handle;
}

#ifdef __cplusplus
}
#endif
