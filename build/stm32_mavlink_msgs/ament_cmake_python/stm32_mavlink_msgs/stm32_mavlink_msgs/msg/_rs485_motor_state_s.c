// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from stm32_mavlink_msgs:msg/RS485MotorState.idl
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
#include "stm32_mavlink_msgs/msg/detail/rs485_motor_state__struct.h"
#include "stm32_mavlink_msgs/msg/detail/rs485_motor_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool stm32_mavlink_msgs__msg__rs485_motor_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("stm32_mavlink_msgs.msg._rs485_motor_state.RS485MotorState", full_classname_dest, 57) == 0);
  }
  stm32_mavlink_msgs__msg__RS485MotorState * ros_message = _ros_message;
  {  // motor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_index = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // control_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_position_rotations
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_position_rotations");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_position_rotations = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_velocity_rps
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_velocity_rps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_velocity_rps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_velocity_rps
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_velocity_rps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_velocity_rps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_rps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_rps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_rps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timestamp_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stm32_mavlink_msgs__msg__rs485_motor_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RS485MotorState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stm32_mavlink_msgs.msg._rs485_motor_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RS485MotorState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stm32_mavlink_msgs__msg__RS485MotorState * ros_message = (stm32_mavlink_msgs__msg__RS485MotorState *)raw_ros_message;
  {  // motor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_position_rotations
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_position_rotations);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_position_rotations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_velocity_rps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_velocity_rps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_velocity_rps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_velocity_rps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_velocity_rps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_velocity_rps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_rps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_rps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_rps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
