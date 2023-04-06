// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_control_msgs:msg/CarFlatData.idl
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
#include "wauto_control_msgs/msg/detail/car_flat_data__struct.h"
#include "wauto_control_msgs/msg/detail/car_flat_data__functions.h"

bool wauto_control_msgs__msg__car_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * wauto_control_msgs__msg__car_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool wauto_control_msgs__msg__car_flat_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("wauto_control_msgs.msg._car_flat_data.CarFlatData", full_classname_dest, 49) == 0);
  }
  wauto_control_msgs__msg__CarFlatData * ros_message = _ros_message;
  {  // l
    PyObject * field = PyObject_GetAttrString(_pymsg, "l");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->l = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nu
    PyObject * field = PyObject_GetAttrString(_pymsg, "nu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nu = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gamma_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "gamma_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gamma_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "a_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_max = PyFloat_AS_DOUBLE(field);
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
PyObject * wauto_control_msgs__msg__car_flat_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarFlatData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_control_msgs.msg._car_flat_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarFlatData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_control_msgs__msg__CarFlatData * ros_message = (wauto_control_msgs__msg__CarFlatData *)raw_ros_message;
  {  // l
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gamma_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gamma_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamma_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_max", field);
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
