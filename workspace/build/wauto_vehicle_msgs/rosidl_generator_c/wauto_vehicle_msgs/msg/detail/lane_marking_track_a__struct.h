// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/LaneMarkingTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NAME'.
/**
  * --------------------------
  * LaneMarking_TrackA Message
  * --------------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__LaneMarkingTrackA__NAME = "LaneMarking_TrackA";

/// Constant 'LANEMARKINGLNHDNGTNGTV_1'.
/**
  * -----
  * Enums
  * -----
  * Enum for LaneMarkingLnHdngTngtV signal
  * Invalid
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNHDNGTNGTV_1 = 1
};

/// Constant 'LANEMARKINGLNHDNGTNGTV_0'.
/**
  * Valid
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNHDNGTNGTV_0 = 0
};

/// Constant 'LANEMARKINGLNDSTV_1'.
/**
  * Enum for LaneMarkingLnDstV signal
  * Invalid
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNDSTV_1 = 1
};

/// Constant 'LANEMARKINGLNDSTV_0'.
/**
  * Valid
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNDSTV_0 = 0
};

/// Constant 'LANEMARKINGLNCRVTV_1'.
/**
  * Enum for LaneMarkingLnCrvtV signal
  * Invalid
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNCRVTV_1 = 1
};

/// Constant 'LANEMARKINGLNCRVTV_0'.
/**
  * Valid
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNCRVTV_0 = 0
};

/// Constant 'LANEMARKINGLNCRVTGRADV_1'.
/**
  * Enum for LaneMarkingLnCrvtGradV signal
  * Invalid
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNCRVTGRADV_1 = 1
};

/// Constant 'LANEMARKINGLNCRVTGRADV_0'.
/**
  * Valid
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNCRVTGRADV_0 = 0
};

/// Constant 'LANEMARKINGLNMRKRTYP_0'.
/**
  * Enum for LaneMarkingLnMrkrTyp signal
  * None
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNMRKRTYP_0 = 0
};

/// Constant 'LANEMARKINGLNMRKRTYP_1'.
/**
  * Solid
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNMRKRTYP_1 = 1
};

/// Constant 'LANEMARKINGLNMRKRTYP_2'.
/**
  * Dashed
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNMRKRTYP_2 = 2
};

/// Constant 'LANEMARKINGLNMRKRTYP_3'.
/**
  * Dotted
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNMRKRTYP_3 = 3
};

/// Constant 'LANEMARKINGLNMRKRTYP_4'.
/**
  * Botts Dots
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNMRKRTYP_4 = 4
};

/// Constant 'LANEMARKINGLNMRKRTYP_5'.
/**
  * Double
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNMRKRTYP_5 = 5
};

/// Constant 'LANEMARKINGLNMRKRTYP_6'.
/**
  * Road Edge
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGLNMRKRTYP_6 = 6
};

/// Constant 'LANEMARKINGCOLOR_0'.
/**
  * Enum for LaneMarkingColor signal
  * Unknown
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGCOLOR_0 = 0
};

/// Constant 'LANEMARKINGCOLOR_1'.
/**
  * White
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGCOLOR_1 = 1
};

/// Constant 'LANEMARKINGCOLOR_2'.
/**
  * Yellow
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGCOLOR_2 = 2
};

/// Constant 'LANEMARKINGCOLOR_3'.
/**
  * Other
 */
enum
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__LANEMARKINGCOLOR_3 = 3
};

/// Struct defined in msg/LaneMarkingTrackA in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__LaneMarkingTrackA
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// LaneMarkingID
  uint8_t lanemarkingid;
  /// LaneMarkingLnHdngTngtV
  uint8_t lanemarkinglnhdngtngtv;
  /// LaneMarkingLnHdngTngt
  int8_t lanemarkinglnhdngtngt;
  /// LaneMarkingLnDstV
  uint8_t lanemarkinglndstv;
  /// LaneMarkingLnDst
  int8_t lanemarkinglndst;
  /// LaneMarkingLnCrvtV
  uint8_t lanemarkinglncrvtv;
  /// LaneMarkingLnCrvtGradV
  uint8_t lanemarkinglncrvtgradv;
  /// LaneMarkingLnCrvtGrad
  int16_t lanemarkinglncrvtgrad;
  /// LaneMarkingLnCrvt
  int16_t lanemarkinglncrvt;
  /// LaneMarkingLnQltyConfLvl
  uint8_t lanemarkinglnqltyconflvl;
  /// LaneMarkingLnMrkrTyp
  uint8_t lanemarkinglnmrkrtyp;
  /// LaneMarkingColor
  uint8_t lanemarkingcolor;
} wauto_vehicle_msgs__msg__LaneMarkingTrackA;

// Struct for a sequence of wauto_vehicle_msgs__msg__LaneMarkingTrackA.
typedef struct wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence
{
  wauto_vehicle_msgs__msg__LaneMarkingTrackA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__STRUCT_H_
