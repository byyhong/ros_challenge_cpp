// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackC.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackC __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackC __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectTrackC_
{
  using Type = ObjectTrackC_<ContainerAllocator>;

  explicit ObjectTrackC_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->object_latitude = 0l;
      this->object_absolute_velocity = 0;
      this->object_course = 0;
      this->dynprop = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->object_latitude = 0l;
      this->object_absolute_velocity = 0;
      this->object_course = 0;
      this->dynprop = 0;
    }
  }

  explicit ObjectTrackC_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->object_latitude = 0l;
      this->object_absolute_velocity = 0;
      this->object_course = 0;
      this->dynprop = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->object_latitude = 0l;
      this->object_absolute_velocity = 0;
      this->object_course = 0;
      this->dynprop = 0;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _objobjectid_type =
    uint8_t;
  _objobjectid_type objobjectid;
  using _object_latitude_type =
    int32_t;
  _object_latitude_type object_latitude;
  using _object_absolute_velocity_type =
    uint8_t;
  _object_absolute_velocity_type object_absolute_velocity;
  using _object_course_type =
    uint8_t;
  _object_course_type object_course;
  using _dynprop_type =
    uint8_t;
  _dynprop_type dynprop;

  // setters for named parameter idiom
  Type & set__rolling_count(
    const uint8_t & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__objobjectid(
    const uint8_t & _arg)
  {
    this->objobjectid = _arg;
    return *this;
  }
  Type & set__object_latitude(
    const int32_t & _arg)
  {
    this->object_latitude = _arg;
    return *this;
  }
  Type & set__object_absolute_velocity(
    const uint8_t & _arg)
  {
    this->object_absolute_velocity = _arg;
    return *this;
  }
  Type & set__object_course(
    const uint8_t & _arg)
  {
    this->object_course = _arg;
    return *this;
  }
  Type & set__dynprop(
    const uint8_t & _arg)
  {
    this->dynprop = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;
  static constexpr uint8_t DYNPROP_4 =
    4u;
  static constexpr uint8_t DYNPROP_3 =
    3u;
  static constexpr uint8_t DYNPROP_2 =
    2u;
  static constexpr uint8_t DYNPROP_1 =
    1u;
  static constexpr uint8_t DYNPROP_0 =
    0u;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackC
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackC
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackC_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectTrackC_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->objobjectid != other.objobjectid) {
      return false;
    }
    if (this->object_latitude != other.object_latitude) {
      return false;
    }
    if (this->object_absolute_velocity != other.object_absolute_velocity) {
      return false;
    }
    if (this->object_course != other.object_course) {
      return false;
    }
    if (this->dynprop != other.dynprop) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectTrackC_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectTrackC_

// alias to use template instance with default allocator
using ObjectTrackC =
  wauto_vehicle_msgs::msg::ObjectTrackC_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ObjectTrackC_<ContainerAllocator>::NAME = "Object_TrackC";
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackC_<ContainerAllocator>::DYNPROP_4;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackC_<ContainerAllocator>::DYNPROP_3;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackC_<ContainerAllocator>::DYNPROP_2;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackC_<ContainerAllocator>::DYNPROP_1;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackC_<ContainerAllocator>::DYNPROP_0;

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__STRUCT_HPP_
