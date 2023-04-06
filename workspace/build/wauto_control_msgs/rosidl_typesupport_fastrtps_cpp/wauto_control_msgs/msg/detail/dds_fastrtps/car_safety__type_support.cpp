// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wauto_control_msgs:msg/CarSafety.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_safety__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wauto_control_msgs/msg/detail/car_safety__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
cdr_serialize(
  const wauto_control_msgs::msg::CarSafety & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: human_ready
  cdr << (ros_message.human_ready ? true : false);
  // Member: human_stop
  cdr << (ros_message.human_stop ? true : false);
  // Member: car_disabled
  cdr << (ros_message.car_disabled ? true : false);
  // Member: publishing_traj
  cdr << (ros_message.publishing_traj ? true : false);
  // Member: finished_traj
  cdr << (ros_message.finished_traj ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wauto_control_msgs::msg::CarSafety & ros_message)
{
  // Member: human_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.human_ready = tmp ? true : false;
  }

  // Member: human_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.human_stop = tmp ? true : false;
  }

  // Member: car_disabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.car_disabled = tmp ? true : false;
  }

  // Member: publishing_traj
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.publishing_traj = tmp ? true : false;
  }

  // Member: finished_traj
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.finished_traj = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
get_serialized_size(
  const wauto_control_msgs::msg::CarSafety & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: human_ready
  {
    size_t item_size = sizeof(ros_message.human_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: human_stop
  {
    size_t item_size = sizeof(ros_message.human_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: car_disabled
  {
    size_t item_size = sizeof(ros_message.car_disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: publishing_traj
  {
    size_t item_size = sizeof(ros_message.publishing_traj);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: finished_traj
  {
    size_t item_size = sizeof(ros_message.finished_traj);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_control_msgs
max_serialized_size_CarSafety(
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


  // Member: human_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: human_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: car_disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: publishing_traj
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: finished_traj
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CarSafety__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wauto_control_msgs::msg::CarSafety *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarSafety__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wauto_control_msgs::msg::CarSafety *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarSafety__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wauto_control_msgs::msg::CarSafety *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarSafety__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CarSafety(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CarSafety__callbacks = {
  "wauto_control_msgs::msg",
  "CarSafety",
  _CarSafety__cdr_serialize,
  _CarSafety__cdr_deserialize,
  _CarSafety__get_serialized_size,
  _CarSafety__max_serialized_size
};

static rosidl_message_type_support_t _CarSafety__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarSafety__callbacks,
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
get_message_type_support_handle<wauto_control_msgs::msg::CarSafety>()
{
  return &wauto_control_msgs::msg::typesupport_fastrtps_cpp::_CarSafety__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wauto_control_msgs, msg, CarSafety)() {
  return &wauto_control_msgs::msg::typesupport_fastrtps_cpp::_CarSafety__handle;
}

#ifdef __cplusplus
}
#endif
