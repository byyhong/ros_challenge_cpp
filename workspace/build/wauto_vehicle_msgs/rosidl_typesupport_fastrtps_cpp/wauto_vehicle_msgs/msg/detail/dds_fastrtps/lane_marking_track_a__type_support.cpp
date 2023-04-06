// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wauto_vehicle_msgs:msg/LaneMarkingTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__struct.hpp"

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
  const wauto_vehicle_msgs::msg::LaneMarkingTrackA & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rolling_count
  cdr << ros_message.rolling_count;
  // Member: lanemarkingid
  cdr << ros_message.lanemarkingid;
  // Member: lanemarkinglnhdngtngtv
  cdr << ros_message.lanemarkinglnhdngtngtv;
  // Member: lanemarkinglnhdngtngt
  cdr << ros_message.lanemarkinglnhdngtngt;
  // Member: lanemarkinglndstv
  cdr << ros_message.lanemarkinglndstv;
  // Member: lanemarkinglndst
  cdr << ros_message.lanemarkinglndst;
  // Member: lanemarkinglncrvtv
  cdr << ros_message.lanemarkinglncrvtv;
  // Member: lanemarkinglncrvtgradv
  cdr << ros_message.lanemarkinglncrvtgradv;
  // Member: lanemarkinglncrvtgrad
  cdr << ros_message.lanemarkinglncrvtgrad;
  // Member: lanemarkinglncrvt
  cdr << ros_message.lanemarkinglncrvt;
  // Member: lanemarkinglnqltyconflvl
  cdr << ros_message.lanemarkinglnqltyconflvl;
  // Member: lanemarkinglnmrkrtyp
  cdr << ros_message.lanemarkinglnmrkrtyp;
  // Member: lanemarkingcolor
  cdr << ros_message.lanemarkingcolor;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wauto_vehicle_msgs::msg::LaneMarkingTrackA & ros_message)
{
  // Member: rolling_count
  cdr >> ros_message.rolling_count;

  // Member: lanemarkingid
  cdr >> ros_message.lanemarkingid;

  // Member: lanemarkinglnhdngtngtv
  cdr >> ros_message.lanemarkinglnhdngtngtv;

  // Member: lanemarkinglnhdngtngt
  cdr >> ros_message.lanemarkinglnhdngtngt;

  // Member: lanemarkinglndstv
  cdr >> ros_message.lanemarkinglndstv;

  // Member: lanemarkinglndst
  cdr >> ros_message.lanemarkinglndst;

  // Member: lanemarkinglncrvtv
  cdr >> ros_message.lanemarkinglncrvtv;

  // Member: lanemarkinglncrvtgradv
  cdr >> ros_message.lanemarkinglncrvtgradv;

  // Member: lanemarkinglncrvtgrad
  cdr >> ros_message.lanemarkinglncrvtgrad;

  // Member: lanemarkinglncrvt
  cdr >> ros_message.lanemarkinglncrvt;

  // Member: lanemarkinglnqltyconflvl
  cdr >> ros_message.lanemarkinglnqltyconflvl;

  // Member: lanemarkinglnmrkrtyp
  cdr >> ros_message.lanemarkinglnmrkrtyp;

  // Member: lanemarkingcolor
  cdr >> ros_message.lanemarkingcolor;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
get_serialized_size(
  const wauto_vehicle_msgs::msg::LaneMarkingTrackA & ros_message,
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
  // Member: lanemarkingid
  {
    size_t item_size = sizeof(ros_message.lanemarkingid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglnhdngtngtv
  {
    size_t item_size = sizeof(ros_message.lanemarkinglnhdngtngtv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglnhdngtngt
  {
    size_t item_size = sizeof(ros_message.lanemarkinglnhdngtngt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglndstv
  {
    size_t item_size = sizeof(ros_message.lanemarkinglndstv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglndst
  {
    size_t item_size = sizeof(ros_message.lanemarkinglndst);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglncrvtv
  {
    size_t item_size = sizeof(ros_message.lanemarkinglncrvtv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglncrvtgradv
  {
    size_t item_size = sizeof(ros_message.lanemarkinglncrvtgradv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglncrvtgrad
  {
    size_t item_size = sizeof(ros_message.lanemarkinglncrvtgrad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglncrvt
  {
    size_t item_size = sizeof(ros_message.lanemarkinglncrvt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglnqltyconflvl
  {
    size_t item_size = sizeof(ros_message.lanemarkinglnqltyconflvl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkinglnmrkrtyp
  {
    size_t item_size = sizeof(ros_message.lanemarkinglnmrkrtyp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanemarkingcolor
  {
    size_t item_size = sizeof(ros_message.lanemarkingcolor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
max_serialized_size_LaneMarkingTrackA(
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

  // Member: lanemarkingid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanemarkinglnhdngtngtv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanemarkinglnhdngtngt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanemarkinglndstv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanemarkinglndst
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanemarkinglncrvtv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanemarkinglncrvtgradv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanemarkinglncrvtgrad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lanemarkinglncrvt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lanemarkinglnqltyconflvl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanemarkinglnmrkrtyp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanemarkingcolor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _LaneMarkingTrackA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wauto_vehicle_msgs::msg::LaneMarkingTrackA *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneMarkingTrackA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wauto_vehicle_msgs::msg::LaneMarkingTrackA *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneMarkingTrackA__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wauto_vehicle_msgs::msg::LaneMarkingTrackA *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneMarkingTrackA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaneMarkingTrackA(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaneMarkingTrackA__callbacks = {
  "wauto_vehicle_msgs::msg",
  "LaneMarkingTrackA",
  _LaneMarkingTrackA__cdr_serialize,
  _LaneMarkingTrackA__cdr_deserialize,
  _LaneMarkingTrackA__get_serialized_size,
  _LaneMarkingTrackA__max_serialized_size
};

static rosidl_message_type_support_t _LaneMarkingTrackA__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneMarkingTrackA__callbacks,
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
get_message_type_support_handle<wauto_vehicle_msgs::msg::LaneMarkingTrackA>()
{
  return &wauto_vehicle_msgs::msg::typesupport_fastrtps_cpp::_LaneMarkingTrackA__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wauto_vehicle_msgs, msg, LaneMarkingTrackA)() {
  return &wauto_vehicle_msgs::msg::typesupport_fastrtps_cpp::_LaneMarkingTrackA__handle;
}

#ifdef __cplusplus
}
#endif
