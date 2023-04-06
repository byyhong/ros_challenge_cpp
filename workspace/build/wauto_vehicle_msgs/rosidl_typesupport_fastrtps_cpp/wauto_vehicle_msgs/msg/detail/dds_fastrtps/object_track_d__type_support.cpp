// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackD.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/object_track_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wauto_vehicle_msgs/msg/detail/object_track_d__struct.hpp"

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

namespace wauto_vehicle_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
cdr_serialize(
  const wauto_vehicle_msgs::msg::ObjectTrackD & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rolling_count
  cdr << ros_message.rolling_count;
  // Member: objobjectid
  cdr << ros_message.objobjectid;
  // Member: object_longitude
  cdr << ros_message.object_longitude;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wauto_vehicle_msgs::msg::ObjectTrackD & ros_message)
{
  // Member: rolling_count
  cdr >> ros_message.rolling_count;

  // Member: objobjectid
  cdr >> ros_message.objobjectid;

  // Member: object_longitude
  cdr >> ros_message.object_longitude;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
get_serialized_size(
  const wauto_vehicle_msgs::msg::ObjectTrackD & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rolling_count
  {
    size_t item_size = sizeof(ros_message.rolling_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: objobjectid
  {
    size_t item_size = sizeof(ros_message.objobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_longitude
  {
    size_t item_size = sizeof(ros_message.object_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
max_serialized_size_ObjectTrackD(
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


  // Member: rolling_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: objobjectid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: object_longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ObjectTrackD__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wauto_vehicle_msgs::msg::ObjectTrackD *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObjectTrackD__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wauto_vehicle_msgs::msg::ObjectTrackD *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObjectTrackD__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wauto_vehicle_msgs::msg::ObjectTrackD *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObjectTrackD__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ObjectTrackD(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ObjectTrackD__callbacks = {
  "wauto_vehicle_msgs::msg",
  "ObjectTrackD",
  _ObjectTrackD__cdr_serialize,
  _ObjectTrackD__cdr_deserialize,
  _ObjectTrackD__get_serialized_size,
  _ObjectTrackD__max_serialized_size
};

static rosidl_message_type_support_t _ObjectTrackD__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObjectTrackD__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wauto_vehicle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wauto_vehicle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<wauto_vehicle_msgs::msg::ObjectTrackD>()
{
  return &wauto_vehicle_msgs::msg::typesupport_fastrtps_cpp::_ObjectTrackD__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wauto_vehicle_msgs, msg, ObjectTrackD)() {
  return &wauto_vehicle_msgs::msg::typesupport_fastrtps_cpp::_ObjectTrackD__handle;
}

#ifdef __cplusplus
}
#endif
