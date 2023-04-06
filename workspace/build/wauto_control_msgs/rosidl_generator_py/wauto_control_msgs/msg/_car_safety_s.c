// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_control_msgs:msg/CarSafety.idl
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
#include "wauto_control_msgs/msg/detail/car_safety__struct.h"
#include "wauto_control_msgs/msg/detail/car_safety__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wauto_control_msgs__msg__car_safety__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("wauto_control_msgs.msg._car_safety.CarSafety", full_classname_dest, 44) == 0);
  }
  wauto_control_msgs__msg__CarSafety * ros_message = _ros_message;
  {  // human_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "human_ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->human_ready = (Py_True == field);
    Py_DECREF(field);
  }
  {  // human_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "human_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->human_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // car_disabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "car_disabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->car_disabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // publishing_traj
    PyObject * field = PyObject_GetAttrString(_pymsg, "publishing_traj");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->publishing_traj = (Py_True == field);
    Py_DECREF(field);
  }
  {  // finished_traj
    PyObject * field = PyObject_GetAttrString(_pymsg, "finished_traj");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->finished_traj = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wauto_control_msgs__msg__car_safety__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarSafety */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_control_msgs.msg._car_safety");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarSafety");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_control_msgs__msg__CarSafety * ros_message = (wauto_control_msgs__msg__CarSafety *)raw_ros_message;
  {  // human_ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->human_ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "human_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // human_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->human_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "human_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // car_disabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->car_disabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "car_disabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // publishing_traj
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->publishing_traj ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "publishing_traj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // finished_traj
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->finished_traj ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "finished_traj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
