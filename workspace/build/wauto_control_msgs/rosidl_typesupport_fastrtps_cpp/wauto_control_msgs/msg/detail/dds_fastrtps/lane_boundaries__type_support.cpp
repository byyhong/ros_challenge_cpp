// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wauto_control_msgs:msg/LaneBoundaries.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/lane_boundaries__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wauto_control_msgs/msg/detail/lane_boundaries__struct.hpp"

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
namespace wauto_control_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const wauto_control_msgs::msg::LaneMarking &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  wauto_control_msgs::msg::LaneMarking &);
size_t get_serialized_size(
  const wauto_control_msgs::msg::LaneMarking &,
  size_t current_alignment);
size_t
max_serialized_size_LaneMarking(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace wauto_control_msgs

namespace wauto_control_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const wauto_control_msgs::msg::LaneMarking &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  wauto_control_msgs::msg::LaneMarking &);
size_t get_serialized_size(
  const wauto_control_msgs::msg::LaneMarking &,
  size_t current_alignment);
size_t
max_serialized_size_LaneMarking(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace wauto_control_msgs


namespace wauto_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
cdr_serialize(
  const wauto_control_msgs::msg::LaneBoundaries & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right
  wauto_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.right,
    cdr);
  // Member: left
  wauto_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.left,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wauto_control_msgs::msg::LaneBoundaries & ros_message)
{
  // Member: right
  wauto_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.right);

  // Member: left
  wauto_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.left);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
get_serialized_size(
  const wauto_control_msgs::msg::LaneBoundaries & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right

  current_alignment +=
    wauto_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.right, current_alignment);
  // Member: left

  current_alignment +=
    wauto_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.left, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
max_serialized_size_LaneBoundaries(
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


  // Member: right
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        wauto_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: left
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        wauto_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LaneBoundaries__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wauto_control_msgs::msg::LaneBoundaries *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneBoundaries__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wauto_control_msgs::msg::LaneBoundaries *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneBoundaries__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wauto_control_msgs::msg::LaneBoundaries *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneBoundaries__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaneBoundaries(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaneBoundaries__callbacks = {
  "wauto_control_msgs::msg",
  "LaneBoundaries",
  _LaneBoundaries__cdr_serialize,
  _LaneBoundaries__cdr_deserialize,
  _LaneBoundaries__get_serialized_size,
  _LaneBoundaries__max_serialized_size
};

static rosidl_message_type_support_t _LaneBoundaries__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneBoundaries__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wauto_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wauto_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<wauto_control_msgs::msg::LaneBoundaries>()
{
  return &wauto_control_msgs::msg::typesupport_fastrtps_cpp::_LaneBoundaries__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wauto_control_msgs, msg, LaneBoundaries)() {
  return &wauto_control_msgs::msg::typesupport_fastrtps_cpp::_LaneBoundaries__handle;
}

#ifdef __cplusplus
}
#endif
