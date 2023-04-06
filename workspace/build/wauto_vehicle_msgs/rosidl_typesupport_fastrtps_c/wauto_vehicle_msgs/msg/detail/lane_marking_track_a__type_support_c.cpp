// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_vehicle_msgs:msg/LaneMarkingTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_vehicle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__struct.h"
#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__functions.h"
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


using _LaneMarkingTrackA__ros_msg_type = wauto_vehicle_msgs__msg__LaneMarkingTrackA;

static bool _LaneMarkingTrackA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneMarkingTrackA__ros_msg_type * ros_message = static_cast<const _LaneMarkingTrackA__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr << ros_message->rolling_count;
  }

  // Field name: lanemarkingid
  {
    cdr << ros_message->lanemarkingid;
  }

  // Field name: lanemarkinglnhdngtngtv
  {
    cdr << ros_message->lanemarkinglnhdngtngtv;
  }

  // Field name: lanemarkinglnhdngtngt
  {
    cdr << ros_message->lanemarkinglnhdngtngt;
  }

  // Field name: lanemarkinglndstv
  {
    cdr << ros_message->lanemarkinglndstv;
  }

  // Field name: lanemarkinglndst
  {
    cdr << ros_message->lanemarkinglndst;
  }

  // Field name: lanemarkinglncrvtv
  {
    cdr << ros_message->lanemarkinglncrvtv;
  }

  // Field name: lanemarkinglncrvtgradv
  {
    cdr << ros_message->lanemarkinglncrvtgradv;
  }

  // Field name: lanemarkinglncrvtgrad
  {
    cdr << ros_message->lanemarkinglncrvtgrad;
  }

  // Field name: lanemarkinglncrvt
  {
    cdr << ros_message->lanemarkinglncrvt;
  }

  // Field name: lanemarkinglnqltyconflvl
  {
    cdr << ros_message->lanemarkinglnqltyconflvl;
  }

  // Field name: lanemarkinglnmrkrtyp
  {
    cdr << ros_message->lanemarkinglnmrkrtyp;
  }

  // Field name: lanemarkingcolor
  {
    cdr << ros_message->lanemarkingcolor;
  }

  return true;
}

static bool _LaneMarkingTrackA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneMarkingTrackA__ros_msg_type * ros_message = static_cast<_LaneMarkingTrackA__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr >> ros_message->rolling_count;
  }

  // Field name: lanemarkingid
  {
    cdr >> ros_message->lanemarkingid;
  }

  // Field name: lanemarkinglnhdngtngtv
  {
    cdr >> ros_message->lanemarkinglnhdngtngtv;
  }

  // Field name: lanemarkinglnhdngtngt
  {
    cdr >> ros_message->lanemarkinglnhdngtngt;
  }

  // Field name: lanemarkinglndstv
  {
    cdr >> ros_message->lanemarkinglndstv;
  }

  // Field name: lanemarkinglndst
  {
    cdr >> ros_message->lanemarkinglndst;
  }

  // Field name: lanemarkinglncrvtv
  {
    cdr >> ros_message->lanemarkinglncrvtv;
  }

  // Field name: lanemarkinglncrvtgradv
  {
    cdr >> ros_message->lanemarkinglncrvtgradv;
  }

  // Field name: lanemarkinglncrvtgrad
  {
    cdr >> ros_message->lanemarkinglncrvtgrad;
  }

  // Field name: lanemarkinglncrvt
  {
    cdr >> ros_message->lanemarkinglncrvt;
  }

  // Field name: lanemarkinglnqltyconflvl
  {
    cdr >> ros_message->lanemarkinglnqltyconflvl;
  }

  // Field name: lanemarkinglnmrkrtyp
  {
    cdr >> ros_message->lanemarkinglnmrkrtyp;
  }

  // Field name: lanemarkingcolor
  {
    cdr >> ros_message->lanemarkingcolor;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t get_serialized_size_wauto_vehicle_msgs__msg__LaneMarkingTrackA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneMarkingTrackA__ros_msg_type * ros_message = static_cast<const _LaneMarkingTrackA__ros_msg_type *>(untyped_ros_message);
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
  // field.name lanemarkingid
  {
    size_t item_size = sizeof(ros_message->lanemarkingid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglnhdngtngtv
  {
    size_t item_size = sizeof(ros_message->lanemarkinglnhdngtngtv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglnhdngtngt
  {
    size_t item_size = sizeof(ros_message->lanemarkinglnhdngtngt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglndstv
  {
    size_t item_size = sizeof(ros_message->lanemarkinglndstv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglndst
  {
    size_t item_size = sizeof(ros_message->lanemarkinglndst);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglncrvtv
  {
    size_t item_size = sizeof(ros_message->lanemarkinglncrvtv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglncrvtgradv
  {
    size_t item_size = sizeof(ros_message->lanemarkinglncrvtgradv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglncrvtgrad
  {
    size_t item_size = sizeof(ros_message->lanemarkinglncrvtgrad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglncrvt
  {
    size_t item_size = sizeof(ros_message->lanemarkinglncrvt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglnqltyconflvl
  {
    size_t item_size = sizeof(ros_message->lanemarkinglnqltyconflvl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkinglnmrkrtyp
  {
    size_t item_size = sizeof(ros_message->lanemarkinglnmrkrtyp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemarkingcolor
  {
    size_t item_size = sizeof(ros_message->lanemarkingcolor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneMarkingTrackA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_vehicle_msgs__msg__LaneMarkingTrackA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t max_serialized_size_wauto_vehicle_msgs__msg__LaneMarkingTrackA(
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
  // member: lanemarkingid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemarkinglnhdngtngtv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemarkinglnhdngtngt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemarkinglndstv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemarkinglndst
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemarkinglncrvtv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemarkinglncrvtgradv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemarkinglncrvtgrad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lanemarkinglncrvt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lanemarkinglnqltyconflvl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemarkinglnmrkrtyp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemarkingcolor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneMarkingTrackA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_vehicle_msgs__msg__LaneMarkingTrackA(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LaneMarkingTrackA = {
  "wauto_vehicle_msgs::msg",
  "LaneMarkingTrackA",
  _LaneMarkingTrackA__cdr_serialize,
  _LaneMarkingTrackA__cdr_deserialize,
  _LaneMarkingTrackA__get_serialized_size,
  _LaneMarkingTrackA__max_serialized_size
};

static rosidl_message_type_support_t _LaneMarkingTrackA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneMarkingTrackA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_vehicle_msgs, msg, LaneMarkingTrackA)() {
  return &_LaneMarkingTrackA__type_support;
}

#if defined(__cplusplus)
}
#endif
