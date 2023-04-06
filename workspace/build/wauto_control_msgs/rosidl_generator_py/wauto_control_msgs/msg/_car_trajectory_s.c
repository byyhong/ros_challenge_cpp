// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
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
#include "wauto_control_msgs/msg/detail/car_trajectory__struct.h"
#include "wauto_control_msgs/msg/detail/car_trajectory__functions.h"

bool wauto_control_msgs__msg__car_input__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * wauto_control_msgs__msg__car_input__convert_to_py(void * raw_ros_message);
bool wauto_control_msgs__msg__car_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * wauto_control_msgs__msg__car_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool wauto_control_msgs__msg__car_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("wauto_control_msgs.msg._car_trajectory.CarTrajectory", full_classname_dest, 52) == 0);
  }
  wauto_control_msgs__msg__CarTrajectory * ros_message = _ros_message;
  {  // u
    PyObject * field = PyObject_GetAttrString(_pymsg, "u");
    if (!field) {
      return false;
    }
    if (!wauto_control_msgs__msg__car_input__convert_from_py(field, &ros_message->u)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    if (!wauto_control_msgs__msg__car_state__convert_from_py(field, &ros_message->x)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wauto_control_msgs__msg__car_trajectory__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarTrajectory */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_control_msgs.msg._car_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarTrajectory");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_control_msgs__msg__CarTrajectory * ros_message = (wauto_control_msgs__msg__CarTrajectory *)raw_ros_message;
  {  // u
    PyObject * field = NULL;
    field = wauto_control_msgs__msg__car_input__convert_to_py(&ros_message->u);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "u", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = wauto_control_msgs__msg__car_state__convert_to_py(&ros_message->x);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
