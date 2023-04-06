// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_perception_msgs__msg__ObjectClassification __attribute__((deprecated))
#else
# define DEPRECATED__wauto_perception_msgs__msg__ObjectClassification __declspec(deprecated)
#endif

namespace wauto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectClassification_
{
  using Type = ObjectClassification_<ContainerAllocator>;

  explicit ObjectClassification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->value = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->confidence = 0.0f;
      this->classification = 0;
      this->dynprop = 0;
      this->custom_classification = 0;
      this->value = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
      this->classification = 0;
      this->dynprop = 0;
      this->custom_classification = 0;
    }
  }

  explicit ObjectClassification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->value = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->confidence = 0.0f;
      this->classification = 0;
      this->dynprop = 0;
      this->custom_classification = 0;
      this->value = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
      this->classification = 0;
      this->dynprop = 0;
      this->custom_classification = 0;
    }
  }

  // field types and members
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _classification_type =
    uint8_t;
  _classification_type classification;
  using _dynprop_type =
    uint8_t;
  _dynprop_type dynprop;
  using _custom_classification_type =
    uint8_t;
  _custom_classification_type custom_classification;
  using _value_type =
    uint8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__classification(
    const uint8_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__dynprop(
    const uint8_t & _arg)
  {
    this->dynprop = _arg;
    return *this;
  }
  Type & set__custom_classification(
    const uint8_t & _arg)
  {
    this->custom_classification = _arg;
    return *this;
  }
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t WA_OBJECT_CLASSIFICATION_UNKNOWN =
    0u;
  static constexpr uint8_t WA_OBJECT_CLASSIFICATION_CAR =
    1u;
  static constexpr uint8_t WA_OBJECT_CLASSIFICATION_PEDESTRIAN =
    2u;
  static constexpr uint8_t WA_OBJECT_CLASSIFICATION_DEER =
    3u;
  static constexpr uint8_t WA_OBJECT_CLASSIFICATION_BARRICADE =
    4u;
  static constexpr uint8_t WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT =
    5u;
  static constexpr uint8_t WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN =
    6u;
  static constexpr uint8_t WA_OBJECT_CLASSIFICATION_BARREL =
    7u;
  static constexpr uint8_t WA_TRAFFIC_LIGHT_STATE_UNKNOWN =
    0u;
  static constexpr uint8_t WA_TRAFFIC_LIGHT_STATE_RED =
    1u;
  static constexpr uint8_t WA_TRAFFIC_LIGHT_STATE_YELLOW =
    2u;
  static constexpr uint8_t WA_TRAFFIC_LIGHT_STATE_GREEN =
    4u;
  static constexpr uint8_t WA_TRAFFIC_LIGHT_STATE_CIRCLE =
    8u;
  static constexpr uint8_t WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW =
    16u;
  static constexpr uint8_t WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW =
    32u;
  static constexpr uint8_t WA_TRAFFIC_LIGHT_STATE_FLASHING =
    64u;
  static constexpr uint8_t WA_TRAFFIC_SIGN_UNKNOWN =
    0u;
  static constexpr uint8_t WA_TRAFFIC_SIGN_SPEED_LIMIT =
    1u;
  static constexpr uint8_t WA_TRAFFIC_SIGN_STOP =
    2u;
  static constexpr uint8_t WA_TRAFFIC_SIGN_YIELD =
    3u;
  static constexpr uint8_t WA_DYNPROP_UNKNOWN =
    0u;
  static constexpr uint8_t WA_DYNPROP_NEVER =
    1u;
  static constexpr uint8_t WA_DYNPROP_STOPPED =
    2u;
  static constexpr uint8_t WA_DYNPROP_MOVING_SAME =
    3u;
  static constexpr uint8_t WA_DYNPROP_MOVING_OPPOSITE =
    4u;

  // pointer types
  using RawPtr =
    wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_perception_msgs__msg__ObjectClassification
    std::shared_ptr<wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_perception_msgs__msg__ObjectClassification
    std::shared_ptr<wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectClassification_ & other) const
  {
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->dynprop != other.dynprop) {
      return false;
    }
    if (this->custom_classification != other.custom_classification) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectClassification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectClassification_

// alias to use template instance with default allocator
using ObjectClassification =
  wauto_perception_msgs::msg::ObjectClassification_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_OBJECT_CLASSIFICATION_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_OBJECT_CLASSIFICATION_CAR;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_OBJECT_CLASSIFICATION_PEDESTRIAN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_OBJECT_CLASSIFICATION_DEER;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_OBJECT_CLASSIFICATION_BARRICADE;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_OBJECT_CLASSIFICATION_BARREL;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_LIGHT_STATE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_LIGHT_STATE_RED;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_LIGHT_STATE_YELLOW;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_LIGHT_STATE_GREEN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_LIGHT_STATE_CIRCLE;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_LIGHT_STATE_FLASHING;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_SIGN_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_SIGN_SPEED_LIMIT;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_SIGN_STOP;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_TRAFFIC_SIGN_YIELD;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_DYNPROP_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_DYNPROP_NEVER;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_DYNPROP_STOPPED;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_DYNPROP_MOVING_SAME;
template<typename ContainerAllocator>
constexpr uint8_t ObjectClassification_<ContainerAllocator>::WA_DYNPROP_MOVING_OPPOSITE;

}  // namespace msg

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__STRUCT_HPP_
