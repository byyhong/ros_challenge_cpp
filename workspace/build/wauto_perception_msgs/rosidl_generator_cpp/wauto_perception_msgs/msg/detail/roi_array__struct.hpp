// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_perception_msgs:msg/RoiArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'rois'
#include "wauto_perception_msgs/msg/detail/roi__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wauto_perception_msgs__msg__RoiArray __attribute__((deprecated))
#else
# define DEPRECATED__wauto_perception_msgs__msg__RoiArray __declspec(deprecated)
#endif

namespace wauto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoiArray_
{
  using Type = RoiArray_<ContainerAllocator>;

  explicit RoiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RoiArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rois_type =
    std::vector<wauto_perception_msgs::msg::Roi_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wauto_perception_msgs::msg::Roi_<ContainerAllocator>>>;
  _rois_type rois;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rois(
    const std::vector<wauto_perception_msgs::msg::Roi_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wauto_perception_msgs::msg::Roi_<ContainerAllocator>>> & _arg)
  {
    this->rois = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wauto_perception_msgs::msg::RoiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_perception_msgs::msg::RoiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::RoiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::RoiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::RoiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::RoiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::RoiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::RoiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::RoiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::RoiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_perception_msgs__msg__RoiArray
    std::shared_ptr<wauto_perception_msgs::msg::RoiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_perception_msgs__msg__RoiArray
    std::shared_ptr<wauto_perception_msgs::msg::RoiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoiArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rois != other.rois) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoiArray_

// alias to use template instance with default allocator
using RoiArray =
  wauto_perception_msgs::msg::RoiArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_HPP_
