// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackB.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/object_track_b__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_vehicle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_vehicle_msgs/msg/detail/object_track_b__struct.h"
#include "wauto_vehicle_msgs/msg/detail/object_track_b__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ObjectTrackB__ros_msg_type = wauto_vehicle_msgs__msg__ObjectTrackB;

static bool _ObjectTrackB__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectTrackB__ros_msg_type * ros_message = static_cast<const _ObjectTrackB__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr << ros_message->rolling_count;
  }

  // Field name: objobjectid
  {
    cdr << ros_message->objobjectid;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: object_relative_orientation
  {
    cdr << ros_message->object_relative_orientation;
  }

  // Field name: rellnposition
  {
    cdr << ros_message->rellnposition;
  }

  // Field name: object_source_camera
  {
    cdr << ros_message->object_source_camera;
  }

  // Field name: object_source_radar
  {
    cdr << ros_message->object_source_radar;
  }

  // Field name: object_source_ultrasonic
  {
    cdr << ros_message->object_source_ultrasonic;
  }

  // Field name: object_source_v2x
  {
    cdr << ros_message->object_source_v2x;
  }

  // Field name: object_source_lidar
  {
    cdr << ros_message->object_source_lidar;
  }

  // Field name: object_source_other
  {
    cdr << ros_message->object_source_other;
  }

  return true;
}

static bool _ObjectTrackB__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectTrackB__ros_msg_type * ros_message = static_cast<_ObjectTrackB__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr >> ros_message->rolling_count;
  }

  // Field name: objobjectid
  {
    cdr >> ros_message->objobjectid;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: object_relative_orientation
  {
    cdr >> ros_message->object_relative_orientation;
  }

  // Field name: rellnposition
  {
    cdr >> ros_message->rellnposition;
  }

  // Field name: object_source_camera
  {
    cdr >> ros_message->object_source_camera;
  }

  // Field name: object_source_radar
  {
    cdr >> ros_message->object_source_radar;
  }

  // Field name: object_source_ultrasonic
  {
    cdr >> ros_message->object_source_ultrasonic;
  }

  // Field name: object_source_v2x
  {
    cdr >> ros_message->object_source_v2x;
  }

  // Field name: object_source_lidar
  {
    cdr >> ros_message->object_source_lidar;
  }

  // Field name: object_source_other
  {
    cdr >> ros_message->object_source_other;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t get_serialized_size_wauto_vehicle_msgs__msg__ObjectTrackB(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectTrackB__ros_msg_type * ros_message = static_cast<const _ObjectTrackB__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rolling_count
  {
    size_t item_size = sizeof(ros_message->rolling_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name objobjectid
  {
    size_t item_size = sizeof(ros_message->objobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_relative_orientation
  {
    size_t item_size = sizeof(ros_message->object_relative_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rellnposition
  {
    size_t item_size = sizeof(ros_message->rellnposition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_source_camera
  {
    size_t item_size = sizeof(ros_message->object_source_camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_source_radar
  {
    size_t item_size = sizeof(ros_message->object_source_radar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_source_ultrasonic
  {
    size_t item_size = sizeof(ros_message->object_source_ultrasonic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_source_v2x
  {
    size_t item_size = sizeof(ros_message->object_source_v2x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_source_lidar
  {
    size_t item_size = sizeof(ros_message->object_source_lidar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_source_other
  {
    size_t item_size = sizeof(ros_message->object_source_other);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectTrackB__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_vehicle_msgs__msg__ObjectTrackB(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t max_serialized_size_wauto_vehicle_msgs__msg__ObjectTrackB(
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

  // member: rolling_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: objobjectid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_relative_orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rellnposition
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_source_camera
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_source_radar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_source_ultrasonic
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_source_v2x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_source_lidar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_source_other
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ObjectTrackB__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_vehicle_msgs__msg__ObjectTrackB(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ObjectTrackB = {
  "wauto_vehicle_msgs::msg",
  "ObjectTrackB",
  _ObjectTrackB__cdr_serialize,
  _ObjectTrackB__cdr_deserialize,
  _ObjectTrackB__get_serialized_size,
  _ObjectTrackB__max_serialized_size
};

static rosidl_message_type_support_t _ObjectTrackB__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectTrackB,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_vehicle_msgs, msg, ObjectTrackB)() {
  return &_ObjectTrackB__type_support;
}

#if defined(__cplusplus)
}
#endif
