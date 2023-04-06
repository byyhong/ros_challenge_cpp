// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_vehicle_msgs:msg/TrafficSignalHeadTrackA.idl
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
#include "wauto_vehicle_msgs/msg/detail/traffic_signal_head_track_a__struct.h"
#include "wauto_vehicle_msgs/msg/detail/traffic_signal_head_track_a__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wauto_vehicle_msgs__msg__traffic_signal_head_track_a__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
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
    assert(strncmp("wauto_vehicle_msgs.msg._traffic_signal_head_track_a.TrafficSignalHeadTrackA", full_classname_dest, 75) == 0);
  }
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * ros_message = _ros_message;
  {  // rolling_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // signalobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "signalobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signalobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // height_above_ground
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_above_ground");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height_above_ground = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // longpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "longpos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->longpos = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // latpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "latpos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latpos = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confidence = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // signal_head_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_head_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_head_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltnone
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltnone");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltnone = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltredball
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltredball");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltredball = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltyellowball
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltyellowball");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltyellowball = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltgreenball
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltgreenball");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltgreenball = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltflshngredball
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltflshngredball");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltflshngredball = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltflshngyellowball
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltflshngyellowball");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltflshngyellowball = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltredleftarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltredleftarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltredleftarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltyellowleftarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltyellowleftarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltyellowleftarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltgreenleftarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltgreenleftarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltgreenleftarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltflshngredleftarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltflshngredleftarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltflshngredleftarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltflshngyellowleftarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltflshngyellowleftarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltflshngyellowleftarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltredrightarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltredrightarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltredrightarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltyellowrightarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltyellowrightarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltyellowrightarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltgreenrightarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltgreenrightarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltgreenrightarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltflshngredrightarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltflshngredrightarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltflshngredrightarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // illumltflshngyellowrightarrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumltflshngyellowrightarrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumltflshngyellowrightarrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wauto_vehicle_msgs__msg__traffic_signal_head_track_a__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficSignalHeadTrackA */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_vehicle_msgs.msg._traffic_signal_head_track_a");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficSignalHeadTrackA");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * ros_message = (wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA *)raw_ros_message;
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
  {  // signalobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signalobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signalobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_above_ground
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->height_above_ground);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_above_ground", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longpos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->longpos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latpos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->latpos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_head_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signal_head_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_head_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltnone
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltnone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltnone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltredball
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltredball);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltredball", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltyellowball
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltyellowball);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltyellowball", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltgreenball
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltgreenball);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltgreenball", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltflshngredball
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltflshngredball);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltflshngredball", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltflshngyellowball
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltflshngyellowball);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltflshngyellowball", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltredleftarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltredleftarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltredleftarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltyellowleftarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltyellowleftarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltyellowleftarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltgreenleftarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltgreenleftarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltgreenleftarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltflshngredleftarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltflshngredleftarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltflshngredleftarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltflshngyellowleftarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltflshngyellowleftarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltflshngyellowleftarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltredrightarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltredrightarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltredrightarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltyellowrightarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltyellowrightarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltyellowrightarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltgreenrightarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltgreenrightarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltgreenrightarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltflshngredrightarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltflshngredrightarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltflshngredrightarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumltflshngyellowrightarrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumltflshngyellowrightarrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumltflshngyellowrightarrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
