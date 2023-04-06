// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSignalHeadTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/traffic_signal_head_track_a__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wauto_vehicle_msgs/msg/detail/traffic_signal_head_track_a__struct.hpp"

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
  const wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rolling_count
  cdr << ros_message.rolling_count;
  // Member: signalobjectid
  cdr << ros_message.signalobjectid;
  // Member: height_above_ground
  cdr << ros_message.height_above_ground;
  // Member: longpos
  cdr << ros_message.longpos;
  // Member: latpos
  cdr << ros_message.latpos;
  // Member: confidence
  cdr << ros_message.confidence;
  // Member: signal_head_type
  cdr << ros_message.signal_head_type;
  // Member: illumltnone
  cdr << ros_message.illumltnone;
  // Member: illumltredball
  cdr << ros_message.illumltredball;
  // Member: illumltyellowball
  cdr << ros_message.illumltyellowball;
  // Member: illumltgreenball
  cdr << ros_message.illumltgreenball;
  // Member: illumltflshngredball
  cdr << ros_message.illumltflshngredball;
  // Member: illumltflshngyellowball
  cdr << ros_message.illumltflshngyellowball;
  // Member: illumltredleftarrow
  cdr << ros_message.illumltredleftarrow;
  // Member: illumltyellowleftarrow
  cdr << ros_message.illumltyellowleftarrow;
  // Member: illumltgreenleftarrow
  cdr << ros_message.illumltgreenleftarrow;
  // Member: illumltflshngredleftarrow
  cdr << ros_message.illumltflshngredleftarrow;
  // Member: illumltflshngyellowleftarrow
  cdr << ros_message.illumltflshngyellowleftarrow;
  // Member: illumltredrightarrow
  cdr << ros_message.illumltredrightarrow;
  // Member: illumltyellowrightarrow
  cdr << ros_message.illumltyellowrightarrow;
  // Member: illumltgreenrightarrow
  cdr << ros_message.illumltgreenrightarrow;
  // Member: illumltflshngredrightarrow
  cdr << ros_message.illumltflshngredrightarrow;
  // Member: illumltflshngyellowrightarrow
  cdr << ros_message.illumltflshngyellowrightarrow;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA & ros_message)
{
  // Member: rolling_count
  cdr >> ros_message.rolling_count;

  // Member: signalobjectid
  cdr >> ros_message.signalobjectid;

  // Member: height_above_ground
  cdr >> ros_message.height_above_ground;

  // Member: longpos
  cdr >> ros_message.longpos;

  // Member: latpos
  cdr >> ros_message.latpos;

  // Member: confidence
  cdr >> ros_message.confidence;

  // Member: signal_head_type
  cdr >> ros_message.signal_head_type;

  // Member: illumltnone
  cdr >> ros_message.illumltnone;

  // Member: illumltredball
  cdr >> ros_message.illumltredball;

  // Member: illumltyellowball
  cdr >> ros_message.illumltyellowball;

  // Member: illumltgreenball
  cdr >> ros_message.illumltgreenball;

  // Member: illumltflshngredball
  cdr >> ros_message.illumltflshngredball;

  // Member: illumltflshngyellowball
  cdr >> ros_message.illumltflshngyellowball;

  // Member: illumltredleftarrow
  cdr >> ros_message.illumltredleftarrow;

  // Member: illumltyellowleftarrow
  cdr >> ros_message.illumltyellowleftarrow;

  // Member: illumltgreenleftarrow
  cdr >> ros_message.illumltgreenleftarrow;

  // Member: illumltflshngredleftarrow
  cdr >> ros_message.illumltflshngredleftarrow;

  // Member: illumltflshngyellowleftarrow
  cdr >> ros_message.illumltflshngyellowleftarrow;

  // Member: illumltredrightarrow
  cdr >> ros_message.illumltredrightarrow;

  // Member: illumltyellowrightarrow
  cdr >> ros_message.illumltyellowrightarrow;

  // Member: illumltgreenrightarrow
  cdr >> ros_message.illumltgreenrightarrow;

  // Member: illumltflshngredrightarrow
  cdr >> ros_message.illumltflshngredrightarrow;

  // Member: illumltflshngyellowrightarrow
  cdr >> ros_message.illumltflshngyellowrightarrow;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
get_serialized_size(
  const wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA & ros_message,
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
  // Member: signalobjectid
  {
    size_t item_size = sizeof(ros_message.signalobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height_above_ground
  {
    size_t item_size = sizeof(ros_message.height_above_ground);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longpos
  {
    size_t item_size = sizeof(ros_message.longpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latpos
  {
    size_t item_size = sizeof(ros_message.latpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: confidence
  {
    size_t item_size = sizeof(ros_message.confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_head_type
  {
    size_t item_size = sizeof(ros_message.signal_head_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltnone
  {
    size_t item_size = sizeof(ros_message.illumltnone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltredball
  {
    size_t item_size = sizeof(ros_message.illumltredball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltyellowball
  {
    size_t item_size = sizeof(ros_message.illumltyellowball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltgreenball
  {
    size_t item_size = sizeof(ros_message.illumltgreenball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltflshngredball
  {
    size_t item_size = sizeof(ros_message.illumltflshngredball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltflshngyellowball
  {
    size_t item_size = sizeof(ros_message.illumltflshngyellowball);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltredleftarrow
  {
    size_t item_size = sizeof(ros_message.illumltredleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltyellowleftarrow
  {
    size_t item_size = sizeof(ros_message.illumltyellowleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltgreenleftarrow
  {
    size_t item_size = sizeof(ros_message.illumltgreenleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltflshngredleftarrow
  {
    size_t item_size = sizeof(ros_message.illumltflshngredleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltflshngyellowleftarrow
  {
    size_t item_size = sizeof(ros_message.illumltflshngyellowleftarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltredrightarrow
  {
    size_t item_size = sizeof(ros_message.illumltredrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltyellowrightarrow
  {
    size_t item_size = sizeof(ros_message.illumltyellowrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltgreenrightarrow
  {
    size_t item_size = sizeof(ros_message.illumltgreenrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltflshngredrightarrow
  {
    size_t item_size = sizeof(ros_message.illumltflshngredrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: illumltflshngyellowrightarrow
  {
    size_t item_size = sizeof(ros_message.illumltflshngyellowrightarrow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
max_serialized_size_TrafficSignalHeadTrackA(
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

  // Member: signalobjectid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: height_above_ground
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: longpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: latpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: signal_head_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltnone
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltredball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltyellowball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltgreenball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltflshngredball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltflshngyellowball
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltredleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltyellowleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltgreenleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltflshngredleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltflshngyellowleftarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltredrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltyellowrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltgreenrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltflshngredrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: illumltflshngyellowrightarrow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TrafficSignalHeadTrackA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrafficSignalHeadTrackA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrafficSignalHeadTrackA__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrafficSignalHeadTrackA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrafficSignalHeadTrackA(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrafficSignalHeadTrackA__callbacks = {
  "wauto_vehicle_msgs::msg",
  "TrafficSignalHeadTrackA",
  _TrafficSignalHeadTrackA__cdr_serialize,
  _TrafficSignalHeadTrackA__cdr_deserialize,
  _TrafficSignalHeadTrackA__get_serialized_size,
  _TrafficSignalHeadTrackA__max_serialized_size
};

static rosidl_message_type_support_t _TrafficSignalHeadTrackA__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrafficSignalHeadTrackA__callbacks,
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
get_message_type_support_handle<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA>()
{
  return &wauto_vehicle_msgs::msg::typesupport_fastrtps_cpp::_TrafficSignalHeadTrackA__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wauto_vehicle_msgs, msg, TrafficSignalHeadTrackA)() {
  return &wauto_vehicle_msgs::msg::typesupport_fastrtps_cpp::_TrafficSignalHeadTrackA__handle;
}

#ifdef __cplusplus
}
#endif
