// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/object_track_a__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_vehicle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_vehicle_msgs/msg/detail/object_track_a__struct.h"
#include "wauto_vehicle_msgs/msg/detail/object_track_a__functions.h"
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


using _ObjectTrackA__ros_msg_type = wauto_vehicle_msgs__msg__ObjectTrackA;

static bool _ObjectTrackA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectTrackA__ros_msg_type * ros_message = static_cast<const _ObjectTrackA__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr << ros_message->rolling_count;
  }

  // Field name: objobjectid
  {
    cdr << ros_message->objobjectid;
  }

  // Field name: objobjecttype
  {
    cdr << ros_message->objobjecttype;
  }

  // Field name: longpos
  {
    cdr << ros_message->longpos;
  }

  // Field name: latpos
  {
    cdr << ros_message->latpos;
  }

  // Field name: rellongvel
  {
    cdr << ros_message->rellongvel;
  }

  // Field name: rellatvel
  {
    cdr << ros_message->rellatvel;
  }

  // Field name: confidence
  {
    cdr << ros_message->confidence;
  }

  // Field name: relative_lane
  {
    cdr << ros_message->relative_lane;
  }

  return true;
}

static bool _ObjectTrackA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectTrackA__ros_msg_type * ros_message = static_cast<_ObjectTrackA__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr >> ros_message->rolling_count;
  }

  // Field name: objobjectid
  {
    cdr >> ros_message->objobjectid;
  }

  // Field name: objobjecttype
  {
    cdr >> ros_message->objobjecttype;
  }

  // Field name: longpos
  {
    cdr >> ros_message->longpos;
  }

  // Field name: latpos
  {
    cdr >> ros_message->latpos;
  }

  // Field name: rellongvel
  {
    cdr >> ros_message->rellongvel;
  }

  // Field name: rellatvel
  {
    cdr >> ros_message->rellatvel;
  }

  // Field name: confidence
  {
    cdr >> ros_message->confidence;
  }

  // Field name: relative_lane
  {
    cdr >> ros_message->relative_lane;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t get_serialized_size_wauto_vehicle_msgs__msg__ObjectTrackA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectTrackA__ros_msg_type * ros_message = static_cast<const _ObjectTrackA__ros_msg_type *>(untyped_ros_message);
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
  // field.name objobjecttype
  {
    size_t item_size = sizeof(ros_message->objobjecttype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longpos
  {
    size_t item_size = sizeof(ros_message->longpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latpos
  {
    size_t item_size = sizeof(ros_message->latpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rellongvel
  {
    size_t item_size = sizeof(ros_message->rellongvel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rellatvel
  {
    size_t item_size = sizeof(ros_message->rellatvel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence
  {
    size_t item_size = sizeof(ros_message->confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_lane
  {
    size_t item_size = sizeof(ros_message->relative_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectTrackA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_vehicle_msgs__msg__ObjectTrackA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t max_serialized_size_wauto_vehicle_msgs__msg__ObjectTrackA(
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
  // member: objobjecttype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: latpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rellongvel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rellatvel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: relative_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ObjectTrackA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_vehicle_msgs__msg__ObjectTrackA(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ObjectTrackA = {
  "wauto_vehicle_msgs::msg",
  "ObjectTrackA",
  _ObjectTrackA__cdr_serialize,
  _ObjectTrackA__cdr_deserialize,
  _ObjectTrackA__get_serialized_size,
  _ObjectTrackA__max_serialized_size
};

static rosidl_message_type_support_t _ObjectTrackA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectTrackA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_vehicle_msgs, msg, ObjectTrackA)() {
  return &_ObjectTrackA__type_support;
}

#if defined(__cplusplus)
}
#endif
