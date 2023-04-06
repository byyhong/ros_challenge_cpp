// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from wauto_control_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "wauto_control_msgs/msg/detail/lane_marking__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wauto_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneMarking_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wauto_control_msgs::msg::LaneMarking(_init);
}

void LaneMarking_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wauto_control_msgs::msg::LaneMarking *>(message_memory);
  typed_message->~LaneMarking();
}

size_t size_function__LaneMarking__coordinates_x(const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * get_const_function__LaneMarking__coordinates_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 20> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneMarking__coordinates_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 20> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneMarking__coordinates_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__LaneMarking__coordinates_x(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__LaneMarking__coordinates_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__LaneMarking__coordinates_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__LaneMarking__coordinates_y(const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * get_const_function__LaneMarking__coordinates_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 20> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneMarking__coordinates_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 20> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneMarking__coordinates_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__LaneMarking__coordinates_y(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__LaneMarking__coordinates_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__LaneMarking__coordinates_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneMarking_message_member_array[5] = {
  {
    "boundary_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs::msg::LaneMarking, boundary_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lateral_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs::msg::LaneMarking, lateral_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heading_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs::msg::LaneMarking, heading_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coordinates_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs::msg::LaneMarking, coordinates_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneMarking__coordinates_x,  // size() function pointer
    get_const_function__LaneMarking__coordinates_x,  // get_const(index) function pointer
    get_function__LaneMarking__coordinates_x,  // get(index) function pointer
    fetch_function__LaneMarking__coordinates_x,  // fetch(index, &value) function pointer
    assign_function__LaneMarking__coordinates_x,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coordinates_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs::msg::LaneMarking, coordinates_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneMarking__coordinates_y,  // size() function pointer
    get_const_function__LaneMarking__coordinates_y,  // get_const(index) function pointer
    get_function__LaneMarking__coordinates_y,  // get(index) function pointer
    fetch_function__LaneMarking__coordinates_y,  // fetch(index, &value) function pointer
    assign_function__LaneMarking__coordinates_y,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneMarking_message_members = {
  "wauto_control_msgs::msg",  // message namespace
  "LaneMarking",  // message name
  5,  // number of fields
  sizeof(wauto_control_msgs::msg::LaneMarking),
  LaneMarking_message_member_array,  // message members
  LaneMarking_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneMarking_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneMarking_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneMarking_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace wauto_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wauto_control_msgs::msg::LaneMarking>()
{
  return &::wauto_control_msgs::msg::rosidl_typesupport_introspection_cpp::LaneMarking_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wauto_control_msgs, msg, LaneMarking)() {
  return &::wauto_control_msgs::msg::rosidl_typesupport_introspection_cpp::LaneMarking_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
