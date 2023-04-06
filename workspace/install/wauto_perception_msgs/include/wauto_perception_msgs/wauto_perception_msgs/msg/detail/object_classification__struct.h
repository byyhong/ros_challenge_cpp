// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WA_OBJECT_CLASSIFICATION_UNKNOWN'.
/**
  * The possible classification types
 */
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_OBJECT_CLASSIFICATION_UNKNOWN = 0
};

/// Constant 'WA_OBJECT_CLASSIFICATION_CAR'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_OBJECT_CLASSIFICATION_CAR = 1
};

/// Constant 'WA_OBJECT_CLASSIFICATION_PEDESTRIAN'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_OBJECT_CLASSIFICATION_PEDESTRIAN = 2
};

/// Constant 'WA_OBJECT_CLASSIFICATION_DEER'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_OBJECT_CLASSIFICATION_DEER = 3
};

/// Constant 'WA_OBJECT_CLASSIFICATION_BARRICADE'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_OBJECT_CLASSIFICATION_BARRICADE = 4
};

/// Constant 'WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT = 5
};

/// Constant 'WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN = 6
};

/// Constant 'WA_OBJECT_CLASSIFICATION_BARREL'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_OBJECT_CLASSIFICATION_BARREL = 7
};

/// Constant 'WA_TRAFFIC_LIGHT_STATE_UNKNOWN'.
/**
  * Additional classification for traffic light signals
  * Bit flags
 */
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_LIGHT_STATE_UNKNOWN = 0
};

/// Constant 'WA_TRAFFIC_LIGHT_STATE_RED'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_LIGHT_STATE_RED = 1
};

/// Constant 'WA_TRAFFIC_LIGHT_STATE_YELLOW'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_LIGHT_STATE_YELLOW = 2
};

/// Constant 'WA_TRAFFIC_LIGHT_STATE_GREEN'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_LIGHT_STATE_GREEN = 4
};

/// Constant 'WA_TRAFFIC_LIGHT_STATE_CIRCLE'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_LIGHT_STATE_CIRCLE = 8
};

/// Constant 'WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW = 16
};

/// Constant 'WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW = 32
};

/// Constant 'WA_TRAFFIC_LIGHT_STATE_FLASHING'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_LIGHT_STATE_FLASHING = 64
};

/// Constant 'WA_TRAFFIC_SIGN_UNKNOWN'.
/**
  * Additional classification for traffic signs
 */
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_SIGN_UNKNOWN = 0
};

/// Constant 'WA_TRAFFIC_SIGN_SPEED_LIMIT'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_SIGN_SPEED_LIMIT = 1
};

/// Constant 'WA_TRAFFIC_SIGN_STOP'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_SIGN_STOP = 2
};

/// Constant 'WA_TRAFFIC_SIGN_YIELD'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_TRAFFIC_SIGN_YIELD = 3
};

/// Constant 'WA_DYNPROP_UNKNOWN'.
/**
  * Dynamic Property ENUM
 */
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_DYNPROP_UNKNOWN = 0
};

/// Constant 'WA_DYNPROP_NEVER'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_DYNPROP_NEVER = 1
};

/// Constant 'WA_DYNPROP_STOPPED'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_DYNPROP_STOPPED = 2
};

/// Constant 'WA_DYNPROP_MOVING_SAME'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_DYNPROP_MOVING_SAME = 3
};

/// Constant 'WA_DYNPROP_MOVING_OPPOSITE'.
enum
{
  wauto_perception_msgs__msg__ObjectClassification__WA_DYNPROP_MOVING_OPPOSITE = 4
};

/// Struct defined in msg/ObjectClassification in the package wauto_perception_msgs.
/**
  * This message defines an object classification
 */
typedef struct wauto_perception_msgs__msg__ObjectClassification
{
  /// Value between 0 and 1 defining the percent confidence of the detection
  float confidence;
  /// The classification types
  /// See WA_OBJECT_CLASSIFICATION below
  uint8_t classification;
  /// The Dynamic Property types
  /// See WA_DYNPROP_CLASSIFICATION below
  uint8_t dynprop;
  /// Further custom classification types to be used to further define an object
  ///  Example use case is a traffic light, which can be defined as green, red, etc.
  ///  This variable should then be set to a different enum, as desired
  uint8_t custom_classification;
  /// Additional optional attribute that can be defined to show an objects "value"
  /// A good example is the value of a speed limit sign
  uint8_t value;
} wauto_perception_msgs__msg__ObjectClassification;

// Struct for a sequence of wauto_perception_msgs__msg__ObjectClassification.
typedef struct wauto_perception_msgs__msg__ObjectClassification__Sequence
{
  wauto_perception_msgs__msg__ObjectClassification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_perception_msgs__msg__ObjectClassification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_H_
