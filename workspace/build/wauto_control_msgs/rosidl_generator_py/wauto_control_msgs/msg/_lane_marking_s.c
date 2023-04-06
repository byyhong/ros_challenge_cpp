// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wauto_control_msgs:msg/LaneMarking.idl
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
#include "wauto_control_msgs/msg/detail/lane_marking__struct.h"
#include "wauto_control_msgs/msg/detail/lane_marking__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wauto_control_msgs__msg__lane_marking__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("wauto_control_msgs.msg._lane_marking.LaneMarking", full_classname_dest, 48) == 0);
  }
  wauto_control_msgs__msg__LaneMarking * ros_message = _ros_message;
  {  // boundary_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "boundary_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->boundary_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lateral_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // coordinates_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinates_x");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 20;
      double * dest = ros_message->coordinates_x;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // coordinates_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinates_y");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 20;
      double * dest = ros_message->coordinates_y;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wauto_control_msgs__msg__lane_marking__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneMarking */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wauto_control_msgs.msg._lane_marking");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneMarking");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wauto_control_msgs__msg__LaneMarking * ros_message = (wauto_control_msgs__msg__LaneMarking *)raw_ros_message;
  {  // boundary_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->boundary_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boundary_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordinates_x
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "coordinates_x");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->coordinates_x[0]);
    memcpy(dst, src, 20 * sizeof(double));
    Py_DECREF(field);
  }
  {  // coordinates_y
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "coordinates_y");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->coordinates_y[0]);
    memcpy(dst, src, 20 * sizeof(double));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
