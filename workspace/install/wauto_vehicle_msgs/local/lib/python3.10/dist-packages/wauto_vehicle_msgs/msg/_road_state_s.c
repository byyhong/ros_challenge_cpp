// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_vehicle_msgs:msg/RoadState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_vehicle_msgs/msg/detail/road_state__struct.h"
#include "wauto_vehicle_msgs/msg/detail/road_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wauto_vehicle_msgs__msg__road_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("wauto_vehicle_msgs.msg._road_state.RoadState", full_classname_dest, 44) == 0);
  }
  wauto_vehicle_msgs__msg__RoadState * ros_message = _ros_message;
  {  // rolling_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // active_traffic_signal_head_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_traffic_signal_head_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_traffic_signal_head_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_observed_speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_observed_speed_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_observed_speed_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // next_observed_speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_observed_speed_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->next_observed_speed_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // next_observed_speed_limit_longit
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_observed_speed_limit_longit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->next_observed_speed_limit_longit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // active_lane_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_lane_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_lane_number = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_lane_marking_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lane_marking_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_lane_marking_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_lane_marking_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane_marking_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_lane_marking_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // llndistancevalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "llndistancevalid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->llndistancevalid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // disttollnedge
    PyObject * field = PyObject_GetAttrString(_pymsg, "disttollnedge");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->disttollnedge = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rlndistancevalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "rlndistancevalid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rlndistancevalid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // disttorlnedge
    PyObject * field = PyObject_GetAttrString(_pymsg, "disttorlnedge");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->disttorlnedge = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wauto_vehicle_msgs__msg__road_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RoadState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_vehicle_msgs.msg._road_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RoadState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_vehicle_msgs__msg__RoadState * ros_message = (wauto_vehicle_msgs__msg__RoadState *)raw_ros_message;
  {  // rolling_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rolling_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_traffic_signal_head_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_traffic_signal_head_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_traffic_signal_head_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_observed_speed_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_observed_speed_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_observed_speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_observed_speed_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->next_observed_speed_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_observed_speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_observed_speed_limit_longit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->next_observed_speed_limit_longit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_observed_speed_limit_longit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_lane_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_lane_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_lane_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_lane_marking_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_lane_marking_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lane_marking_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lane_marking_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_lane_marking_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane_marking_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // llndistancevalid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->llndistancevalid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "llndistancevalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disttollnedge
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->disttollnedge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disttollnedge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rlndistancevalid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rlndistancevalid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rlndistancevalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disttorlnedge
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->disttorlnedge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disttorlnedge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
