// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackD.idl
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
#include "wauto_vehicle_msgs/msg/detail/object_track_d__struct.h"
#include "wauto_vehicle_msgs/msg/detail/object_track_d__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wauto_vehicle_msgs__msg__object_track_d__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("wauto_vehicle_msgs.msg._object_track_d.ObjectTrackD", full_classname_dest, 51) == 0);
  }
  wauto_vehicle_msgs__msg__ObjectTrackD * ros_message = _ros_message;
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
  {  // object_longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_longitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_longitude = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wauto_vehicle_msgs__msg__object_track_d__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectTrackD */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_vehicle_msgs.msg._object_track_d");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectTrackD");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_vehicle_msgs__msg__ObjectTrackD * ros_message = (wauto_vehicle_msgs__msg__ObjectTrackD *)raw_ros_message;
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
  {  // object_longitude
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->object_longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
