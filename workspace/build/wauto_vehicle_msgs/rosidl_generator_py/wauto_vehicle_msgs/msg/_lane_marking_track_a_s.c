// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_vehicle_msgs:msg/LaneMarkingTrackA.idl
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
#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__struct.h"
#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wauto_vehicle_msgs__msg__lane_marking_track_a__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("wauto_vehicle_msgs.msg._lane_marking_track_a.LaneMarkingTrackA", full_classname_dest, 62) == 0);
  }
  wauto_vehicle_msgs__msg__LaneMarkingTrackA * ros_message = _ros_message;
  {  // rolling_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkingid
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkingid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkingid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglnhdngtngtv
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglnhdngtngtv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglnhdngtngtv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglnhdngtngt
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglnhdngtngt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglnhdngtngt = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglndstv
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglndstv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglndstv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglndst
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglndst");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglndst = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglncrvtv
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglncrvtv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglncrvtv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglncrvtgradv
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglncrvtgradv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglncrvtgradv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglncrvtgrad
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglncrvtgrad");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglncrvtgrad = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglncrvt
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglncrvt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglncrvt = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglnqltyconflvl
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglnqltyconflvl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglnqltyconflvl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkinglnmrkrtyp
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkinglnmrkrtyp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkinglnmrkrtyp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanemarkingcolor
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemarkingcolor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemarkingcolor = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wauto_vehicle_msgs__msg__lane_marking_track_a__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneMarkingTrackA */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_vehicle_msgs.msg._lane_marking_track_a");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneMarkingTrackA");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_vehicle_msgs__msg__LaneMarkingTrackA * ros_message = (wauto_vehicle_msgs__msg__LaneMarkingTrackA *)raw_ros_message;
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
  {  // lanemarkingid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanemarkingid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkingid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglnhdngtngtv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanemarkinglnhdngtngtv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglnhdngtngtv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglnhdngtngt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lanemarkinglnhdngtngt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglnhdngtngt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglndstv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanemarkinglndstv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglndstv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglndst
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lanemarkinglndst);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglndst", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglncrvtv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanemarkinglncrvtv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglncrvtv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglncrvtgradv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanemarkinglncrvtgradv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglncrvtgradv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglncrvtgrad
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lanemarkinglncrvtgrad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglncrvtgrad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglncrvt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lanemarkinglncrvt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglncrvt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglnqltyconflvl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanemarkinglnqltyconflvl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglnqltyconflvl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkinglnmrkrtyp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanemarkinglnmrkrtyp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkinglnmrkrtyp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemarkingcolor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanemarkingcolor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemarkingcolor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
