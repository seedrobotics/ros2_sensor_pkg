// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
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
#include "ros2_sensor_pkg/msg/detail/sensor_user_command__struct.h"
#include "ros2_sensor_pkg/msg/detail/sensor_user_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_sensor_pkg__msg__sensor_user_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("ros2_sensor_pkg.msg._sensor_user_command.SensorUserCommand", full_classname_dest, 58) == 0);
  }
  ros2_sensor_pkg__msg__SensorUserCommand * ros_message = _ros_message;
  {  // calibrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibrate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->calibrate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // setepoch
    PyObject * field = PyObject_GetAttrString(_pymsg, "setepoch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->setepoch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // epoch_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "epoch_sec");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->epoch_sec, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // epoch_msec
    PyObject * field = PyObject_GetAttrString(_pymsg, "epoch_msec");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->epoch_msec, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // diagnosis_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "diagnosis_request");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->diagnosis_request = (Py_True == field);
    Py_DECREF(field);
  }
  {  // set_frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_frequency");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_frequency = (Py_True == field);
    Py_DECREF(field);
  }
  {  // frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "frequency");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frequency = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // raw_string
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_string");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->raw_string = (Py_True == field);
    Py_DECREF(field);
  }
  {  // raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->raw, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_sensor_pkg__msg__sensor_user_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorUserCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_sensor_pkg.msg._sensor_user_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorUserCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_sensor_pkg__msg__SensorUserCommand * ros_message = (ros2_sensor_pkg__msg__SensorUserCommand *)raw_ros_message;
  {  // calibrate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->calibrate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // setepoch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->setepoch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "setepoch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epoch_sec
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->epoch_sec.data,
      strlen(ros_message->epoch_sec.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "epoch_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epoch_msec
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->epoch_msec.data,
      strlen(ros_message->epoch_msec.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "epoch_msec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diagnosis_request
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->diagnosis_request ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diagnosis_request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_frequency
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_frequency ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frequency
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw_string
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->raw_string ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw_string", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->raw.data,
      strlen(ros_message->raw.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
