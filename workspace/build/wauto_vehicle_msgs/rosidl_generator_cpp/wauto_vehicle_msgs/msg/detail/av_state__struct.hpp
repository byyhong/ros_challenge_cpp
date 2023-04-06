// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/AVState.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__AV_STATE__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__AV_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__AVState __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__AVState __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AVState_
{
  using Type = AVState_<ContainerAllocator>;

  explicit AVState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->unused_msg_placeholder = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->unused_msg_placeholder = 0;
    }
  }

  explicit AVState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->unused_msg_placeholder = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->unused_msg_placeholder = 0;
    }
  }

  // field types and members
  using _unused_msg_placeholder_type =
    uint8_t;
  _unused_msg_placeholder_type unused_msg_placeholder;

  // setters for named parameter idiom
  Type & set__unused_msg_placeholder(
    const uint8_t & _arg)
  {
    this->unused_msg_placeholder = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::AVState_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::AVState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::AVState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::AVState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::AVState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::AVState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::AVState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::AVState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::AVState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::AVState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__AVState
    std::shared_ptr<wauto_vehicle_msgs::msg::AVState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__AVState
    std::shared_ptr<wauto_vehicle_msgs::msg::AVState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AVState_ & other) const
  {
    if (this->unused_msg_placeholder != other.unused_msg_placeholder) {
      return false;
    }
    return true;
  }
  bool operator!=(const AVState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AVState_

// alias to use template instance with default allocator
using AVState =
  wauto_vehicle_msgs::msg::AVState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AVState_<ContainerAllocator>::NAME = "AVState";

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__AV_STATE__STRUCT_HPP_
