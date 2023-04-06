// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_trajectory__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wauto_control_msgs/msg/detail/car_trajectory__struct.hpp"

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
  const wauto_control_msgs::msg::CarInput &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  wauto_control_msgs::msg::CarInput &);
size_t get_serialized_size(
  const wauto_control_msgs::msg::CarInput &,
  size_t current_alignment);
size_t
max_serialized_size_CarInput(
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
  const wauto_control_msgs::msg::CarState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  wauto_control_msgs::msg::CarState &);
size_t get_serialized_size(
  const wauto_control_msgs::msg::CarState &,
  size_t current_alignment);
size_t
max_serialized_size_CarState(
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
  const wauto_control_msgs::msg::CarTrajectory & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: u
  wauto_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.u,
    cdr);
  // Member: x
  wauto_control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.x,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wauto_control_msgs::msg::CarTrajectory & ros_message)
{
  // Member: u
  wauto_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.u);

  // Member: x
  wauto_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.x);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
get_serialized_size(
  const wauto_control_msgs::msg::CarTrajectory & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: u

  current_alignment +=
    wauto_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.u, current_alignment);
  // Member: x

  current_alignment +=
    wauto_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.x, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
max_serialized_size_CarTrajectory(
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


  // Member: u
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        wauto_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CarInput(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: x
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        wauto_control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CarState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CarTrajectory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wauto_control_msgs::msg::CarTrajectory *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarTrajectory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wauto_control_msgs::msg::CarTrajectory *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarTrajectory__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wauto_control_msgs::msg::CarTrajectory *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarTrajectory__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CarTrajectory(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CarTrajectory__callbacks = {
  "wauto_control_msgs::msg",
  "CarTrajectory",
  _CarTrajectory__cdr_serialize,
  _CarTrajectory__cdr_deserialize,
  _CarTrajectory__get_serialized_size,
  _CarTrajectory__max_serialized_size
};

static rosidl_message_type_support_t _CarTrajectory__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarTrajectory__callbacks,
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
get_message_type_support_handle<wauto_control_msgs::msg::CarTrajectory>()
{
  return &wauto_control_msgs::msg::typesupport_fastrtps_cpp::_CarTrajectory__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wauto_control_msgs, msg, CarTrajectory)() {
  return &wauto_control_msgs::msg::typesupport_fastrtps_cpp::_CarTrajectory__handle;
}

#ifdef __cplusplus
}
#endif
