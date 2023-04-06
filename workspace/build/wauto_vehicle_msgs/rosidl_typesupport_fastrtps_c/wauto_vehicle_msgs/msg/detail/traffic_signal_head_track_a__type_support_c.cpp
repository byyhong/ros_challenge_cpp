// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSignalHeadTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/traffic_signal_head_track_a__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_vehicle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_vehicle_msgs/msg/detail/traffic_signal_head_track_a__struct.h"
#include "wauto_vehicle_msgs/msg/detail/traffic_signal_head_track_a__functions.h"
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


using _TrafficSignalHeadTrackA__ros_msg_type = wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA;

static bool _TrafficSignalHeadTrackA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficSignalHeadTrackA__ros_msg_type * ros_message = static_cast<const _TrafficSignalHeadTrackA__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr << ros_message->rolling_count;
  }

  // Field name: signalobjectid
  {
    cdr << ros_message->signalobjectid;
  }

  // Field name: height_above_ground
  {
    cdr << ros_message->height_above_ground;
  }

  // Field name: longpos
  {
    cdr << ros_message->longpos;
  }

  // Field name: latpos
  {
    cdr << ros_message->latpos;
  }

  // Field name: confidence
  {
    cdr << ros_message->confidence;
  }

  // Field name: signal_head_type
  {
    cdr << ros_message->signal_head_type;
  }

  // Field name: illumltnone
  {
    cdr << ros_message->illumltnone;
  }

  // Field name: illumltredball
  {
    cdr << ros_message->illumltredball;
  }

  // Field name: illumltyellowball
  {
    cdr << ros_message->illumltyellowball;
  }

  // Field name: illumltgreenball
  {
    cdr << ros_message->illumltgreenball;
  }

  // Field name: illumltflshngredball
  {
    cdr << ros_message->illumltflshngredball;
  }

  // Field name: illumltflshngyellowball
  {
    cdr << ros_message->illumltflshngyellowball;
  }

  // Field name: illumltredleftarrow
  {
    cdr << ros_message->illumltredleftarrow;
  }

  // Field name: illumltyellowleftarrow
  {
    cdr << ros_message->illumltyellowleftarrow;
  }

  // Field name: illumltgreenleftarrow
  {
    cdr << ros_message->illumltgreenleftarrow;
  }

  // Field name: illumltflshngredleftarrow
  {
    cdr << ros_message->illumltflshngredleftarrow;
  }

  // Field name: illumltflshngyellowleftarrow
  {
    cdr << ros_message->illumltflshngyellowleftarrow;
  }

  // Field name: illumltredrightarrow
  {
    cdr << ros_message->illumltredrightarrow;
  }

  // Field name: illumltyellowrightarrow
  {
    cdr << ros_message->illumltyellowrightarrow;
  }

  // Field name: illumltgreenrightarrow
  {
    cdr << ros_message->illumltgreenrightarrow;
  }

  // Field name: illumltflshngredrightarrow
  {
    cdr << ros_message->illumltflshngredrightarrow;
  }

  // Field name: illumltflshngyellowrightarrow
  {
    cdr << ros_message->illumltflshngyellowrightarrow;
  }

  return true;
}

static bool _TrafficSignalHeadTrackA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficSignalHeadTrackA__ros_msg_type * ros_message = static_cast<_TrafficSignalHeadTrackA__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr >> ros_message->rolling_count;
  }

  // Field name: signalobjectid
  {
    cdr >> ros_message->signalobjectid;
  }

  // Field name: height_above_ground
  {
    cdr >> ros_message->height_above_ground;
  }

  // Field name: longpos
  {
    cdr >> ros_message->longpos;
  }

  // Field name: latpos
  {
    cdr >> ros_message->latpos;
  }

  // Field name: confidence
  {
    cdr >> ros_message->confidence;
  }

  // Field name: signal_head_type
  {
    cdr >> ros_message->signal_head_type;
  }

  // Field name: illumltnone
  {
    cdr >> ros_message->illumltnone;
  }

  // Field name: illumltredball
  {
    cdr >> ros_message->illumltredball;
  }

  // Field name: illumltyellowball
  {
    cdr >> ros_message->illumltyellowball;
  }

  // Field name: illumltgreenball
  {
    cdr >> ros_message->illumltgreenball;
  }

  // Field name: illumltflshngredball
  {
    cdr >> ros_message->illumltflshngredball;
  }

  // Field name: illumltflshngyellowball
  {
    cdr >> ros_message->illumltflshngyellowball;
  }

  // Field name: illumltredleftarrow
  {
    cdr >> ros_message->illumltredleftarrow;
  }

  // Field name: illumltyellowleftarrow
  {
    cdr >> ros_message->illumltyellowleftarrow;
  }

  // Field name: illumltgreenleftarrow
  {
    cdr >> ros_message->illumltgreenleftarrow;
  }

  // Field name: illumltflshngredleftarrow
  {
    cdr >> ros_message->illumltflshngredleftarrow;
  }

  // Field name: illumltflshngyellowleftarrow
  {
    cdr >> ros_message->illumltflshngyellowleftarrow;
  }

  // Field name: illumltredrightarrow
  {
    cdr >> ros_message->illumltredrightarrow;
  }

  // Field name: illumltyellowrightarrow
  {
    cdr >> ros_message->illumltyellowrightarrow;
  }

  // Field name: illumltgreenrightarrow
  {
    cdr >> ros_message->illumltgreenrightarrow;
  }

  // Field name: illumltflshngredrightarrow
  {
    cdr >> ros_message->illumltflshngredrightarrow;
  }

  // Field name: illumltflshngyellowrightarrow
  {
    cdr >> ros_message->illumltflshngyellowrightarrow;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t get_serialized_size_wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficSignalHeadTrackA__ros_msg_type * ros_message = static_cast<const _TrafficSignalHeadTrackA__ros_msg_type *>(untyped_ros_message);
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
  // field.name signalobjectid
  {
    size_t item_size = sizeof(ros_message->signalobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_above_ground
  {
    size_t item_size = sizeof(ros_message->height_above_ground);
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
  // field.name confidence
  {
    size_t item_size = sizeof(ros_message->confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_head_type
  {
    size_t item_size = sizeof(ros_message->signal_head_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltnone
  {
    size_t item_size = sizeof(ros_message->illumltnone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltredball
  {
    size_t item_size = sizeof(ros_message->illumltredball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltyellowball
  {
    size_t item_size = sizeof(ros_message->illumltyellowball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltgreenball
  {
    size_t item_size = sizeof(ros_message->illumltgreenball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltflshngredball
  {
    size_t item_size = sizeof(ros_message->illumltflshngredball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltflshngyellowball
  {
    size_t item_size = sizeof(ros_message->illumltflshngyellowball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltredleftarrow
  {
    size_t item_size = sizeof(ros_message->illumltredleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltyellowleftarrow
  {
    size_t item_size = sizeof(ros_message->illumltyellowleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltgreenleftarrow
  {
    size_t item_size = sizeof(ros_message->illumltgreenleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltflshngredleftarrow
  {
    size_t item_size = sizeof(ros_message->illumltflshngredleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltflshngyellowleftarrow
  {
    size_t item_size = sizeof(ros_message->illumltflshngyellowleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltredrightarrow
  {
    size_t item_size = sizeof(ros_message->illumltredrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltyellowrightarrow
  {
    size_t item_size = sizeof(ros_message->illumltyellowrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltgreenrightarrow
  {
    size_t item_size = sizeof(ros_message->illumltgreenrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltflshngredrightarrow
  {
    size_t item_size = sizeof(ros_message->illumltflshngredrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name illumltflshngyellowrightarrow
  {
    size_t item_size = sizeof(ros_message->illumltflshngyellowrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficSignalHeadTrackA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t max_serialized_size_wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA(
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
  // member: signalobjectid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: height_above_ground
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
  // member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_head_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltnone
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltredball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltyellowball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltgreenball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltflshngredball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltflshngyellowball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltredleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltyellowleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltgreenleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltflshngredleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltflshngyellowleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltredrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltyellowrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltgreenrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltflshngredrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: illumltflshngyellowrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficSignalHeadTrackA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrafficSignalHeadTrackA = {
  "wauto_vehicle_msgs::msg",
  "TrafficSignalHeadTrackA",
  _TrafficSignalHeadTrackA__cdr_serialize,
  _TrafficSignalHeadTrackA__cdr_deserialize,
  _TrafficSignalHeadTrackA__get_serialized_size,
  _TrafficSignalHeadTrackA__max_serialized_size
};

static rosidl_message_type_support_t _TrafficSignalHeadTrackA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficSignalHeadTrackA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_vehicle_msgs, msg, TrafficSignalHeadTrackA)() {
  return &_TrafficSignalHeadTrackA__type_support;
}

#if defined(__cplusplus)
}
#endif
