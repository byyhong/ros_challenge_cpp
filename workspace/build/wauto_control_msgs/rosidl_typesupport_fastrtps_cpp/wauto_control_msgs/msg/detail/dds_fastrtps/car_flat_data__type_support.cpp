// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wauto_control_msgs:msg/CarFlatData.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_flat_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wauto_control_msgs/msg/detail/car_flat_data__struct.hpp"

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
  const wauto_control_msgs::msg::CarFlatData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: l
  cdr << ros_message.l;
  // Member: nu
  cdr << ros_message.nu;
  // Member: gamma_max
  cdr << ros_message.gamma_max;
  // Member: a_max
  cdr << ros_message.a_max;
  // Member: v_max
  cdr << ros_message.v_max;
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
  wauto_control_msgs::msg::CarFlatData & ros_message)
{
  // Member: l
  cdr >> ros_message.l;

  // Member: nu
  cdr >> ros_message.nu;

  // Member: gamma_max
  cdr >> ros_message.gamma_max;

  // Member: a_max
  cdr >> ros_message.a_max;

  // Member: v_max
  cdr >> ros_message.v_max;

  // Member: x
  wauto_control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.x);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
get_serialized_size(
  const wauto_control_msgs::msg::CarFlatData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: l
  {
    size_t item_size = sizeof(ros_message.l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nu
  {
    size_t item_size = sizeof(ros_message.nu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gamma_max
  {
    size_t item_size = sizeof(ros_message.gamma_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a_max
  {
    size_t item_size = sizeof(ros_message.a_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v_max
  {
    size_t item_size = sizeof(ros_message.v_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x

  current_alignment +=
    wauto_control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.x, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
max_serialized_size_CarFlatData(
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


  // Member: l
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: nu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gamma_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: v_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
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

static bool _CarFlatData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wauto_control_msgs::msg::CarFlatData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarFlatData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wauto_control_msgs::msg::CarFlatData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarFlatData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wauto_control_msgs::msg::CarFlatData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarFlatData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CarFlatData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CarFlatData__callbacks = {
  "wauto_control_msgs::msg",
  "CarFlatData",
  _CarFlatData__cdr_serialize,
  _CarFlatData__cdr_deserialize,
  _CarFlatData__get_serialized_size,
  _CarFlatData__max_serialized_size
};

static rosidl_message_type_support_t _CarFlatData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarFlatData__callbacks,
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
get_message_type_support_handle<wauto_control_msgs::msg::CarFlatData>()
{
  return &wauto_control_msgs::msg::typesupport_fastrtps_cpp::_CarFlatData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wauto_control_msgs, msg, CarFlatData)() {
  return &wauto_control_msgs::msg::typesupport_fastrtps_cpp::_CarFlatData__handle;
}

#ifdef __cplusplus
}
#endif
