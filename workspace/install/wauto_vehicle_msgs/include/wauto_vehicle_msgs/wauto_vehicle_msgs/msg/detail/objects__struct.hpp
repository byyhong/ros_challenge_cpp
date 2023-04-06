// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECTS__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__Objects __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__Objects __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Objects_
{
  using Type = Objects_<ContainerAllocator>;

  explicit Objects_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->current_object_count = 0;
      this->observation_time_of_hour = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->current_object_count = 0;
      this->observation_time_of_hour = 0;
    }
  }

  explicit Objects_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->current_object_count = 0;
      this->observation_time_of_hour = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->current_object_count = 0;
      this->observation_time_of_hour = 0;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _current_object_count_type =
    uint8_t;
  _current_object_count_type current_object_count;
  using _observation_time_of_hour_type =
    uint16_t;
  _observation_time_of_hour_type observation_time_of_hour;

  // setters for named parameter idiom
  Type & set__rolling_count(
    const uint8_t & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__current_object_count(
    const uint8_t & _arg)
  {
    this->current_object_count = _arg;
    return *this;
  }
  Type & set__observation_time_of_hour(
    const uint16_t & _arg)
  {
    this->observation_time_of_hour = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::Objects_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::Objects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::Objects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::Objects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::Objects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::Objects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::Objects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::Objects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::Objects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::Objects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__Objects
    std::shared_ptr<wauto_vehicle_msgs::msg::Objects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__Objects
    std::shared_ptr<wauto_vehicle_msgs::msg::Objects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Objects_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->current_object_count != other.current_object_count) {
      return false;
    }
    if (this->observation_time_of_hour != other.observation_time_of_hour) {
      return false;
    }
    return true;
  }
  bool operator!=(const Objects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Objects_

// alias to use template instance with default allocator
using Objects =
  wauto_vehicle_msgs::msg::Objects_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Objects_<ContainerAllocator>::NAME = "Objects";

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECTS__STRUCT_HPP_
