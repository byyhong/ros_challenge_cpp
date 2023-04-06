// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/VehicleLocation.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__VehicleLocation __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__VehicleLocation __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleLocation_
{
  using Type = VehicleLocation_<ContainerAllocator>;

  explicit VehicleLocation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->vehiclelatitude = 0l;
      this->vehiclelongitude = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->vehiclelatitude = 0l;
      this->vehiclelongitude = 0l;
    }
  }

  explicit VehicleLocation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->vehiclelatitude = 0l;
      this->vehiclelongitude = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->vehiclelatitude = 0l;
      this->vehiclelongitude = 0l;
    }
  }

  // field types and members
  using _vehiclelatitude_type =
    int32_t;
  _vehiclelatitude_type vehiclelatitude;
  using _vehiclelongitude_type =
    int32_t;
  _vehiclelongitude_type vehiclelongitude;

  // setters for named parameter idiom
  Type & set__vehiclelatitude(
    const int32_t & _arg)
  {
    this->vehiclelatitude = _arg;
    return *this;
  }
  Type & set__vehiclelongitude(
    const int32_t & _arg)
  {
    this->vehiclelongitude = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__VehicleLocation
    std::shared_ptr<wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__VehicleLocation
    std::shared_ptr<wauto_vehicle_msgs::msg::VehicleLocation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleLocation_ & other) const
  {
    if (this->vehiclelatitude != other.vehiclelatitude) {
      return false;
    }
    if (this->vehiclelongitude != other.vehiclelongitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleLocation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleLocation_

// alias to use template instance with default allocator
using VehicleLocation =
  wauto_vehicle_msgs::msg::VehicleLocation_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
VehicleLocation_<ContainerAllocator>::NAME = "VehicleLocation";

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__STRUCT_HPP_
