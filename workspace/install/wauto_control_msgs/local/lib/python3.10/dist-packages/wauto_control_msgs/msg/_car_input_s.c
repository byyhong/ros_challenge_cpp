// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_control_msgs:msg/CarInput.idl
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
#include "wauto_control_msgs/msg/detail/car_input__struct.h"
#include "wauto_control_msgs/msg/detail/car_input__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wauto_control_msgs__msg__car_input__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("wauto_control_msgs.msg._car_input.CarInput", full_classname_dest, 42) == 0);
  }
  wauto_control_msgs__msg__CarInput * ros_message = _ros_message;
  {  // v_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_dot = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psi_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "psi_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psi_dot = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gamma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gamma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gamma = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wauto_control_msgs__msg__car_input__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarInput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_control_msgs.msg._car_input");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarInput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_control_msgs__msg__CarInput * ros_message = (wauto_control_msgs__msg__CarInput *)raw_ros_message;
  {  // v_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psi_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psi_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psi_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gamma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gamma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
