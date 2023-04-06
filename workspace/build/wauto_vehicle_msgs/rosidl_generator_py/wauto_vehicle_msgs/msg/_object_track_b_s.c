// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackB.idl
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
#include "wauto_vehicle_msgs/msg/detail/object_track_b__struct.h"
#include "wauto_vehicle_msgs/msg/detail/object_track_b__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wauto_vehicle_msgs__msg__object_track_b__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("wauto_vehicle_msgs.msg._object_track_b.ObjectTrackB", full_classname_dest, 51) == 0);
  }
  wauto_vehicle_msgs__msg__ObjectTrackB * ros_message = _ros_message;
  {  // rolling_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // objobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "objobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->objobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->width = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_relative_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_relative_orientation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_relative_orientation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rellnposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "rellnposition");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rellnposition = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // object_source_camera
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_source_camera");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_source_camera = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_source_radar
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_source_radar");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_source_radar = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_source_ultrasonic
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_source_ultrasonic");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_source_ultrasonic = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_source_v2x
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_source_v2x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_source_v2x = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_source_lidar
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_source_lidar");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_source_lidar = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // object_source_other
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_source_other");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_source_other = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wauto_vehicle_msgs__msg__object_track_b__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectTrackB */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_vehicle_msgs.msg._object_track_b");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectTrackB");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_vehicle_msgs__msg__ObjectTrackB * ros_message = (wauto_vehicle_msgs__msg__ObjectTrackB *)raw_ros_message;
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
  {  // objobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->objobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "objobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_relative_orientation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_relative_orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_relative_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rellnposition
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rellnposition);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rellnposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_source_camera
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_source_camera);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_source_camera", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_source_radar
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_source_radar);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_source_radar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_source_ultrasonic
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_source_ultrasonic);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_source_ultrasonic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_source_v2x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_source_v2x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_source_v2x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_source_lidar
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_source_lidar);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_source_lidar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_source_other
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->object_source_other);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_source_other", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
