// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from stm32_mavlink_msgs:msg/DCMotorState.idl
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
#include "stm32_mavlink_msgs/msg/detail/dc_motor_state__struct.h"
#include "stm32_mavlink_msgs/msg/detail/dc_motor_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool stm32_mavlink_msgs__msg__dc_motor_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("stm32_mavlink_msgs.msg._dc_motor_state.DCMotorState", full_classname_dest, 51) == 0);
  }
  stm32_mavlink_msgs__msg__DCMotorState * ros_message = _ros_message;
  {  // motor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_rad_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_rad_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_rad_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_c");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_c = (float)PyFloat_AS_DOUBLE(field);
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
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled = (Py_True == field);
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
  {  // current_duty_cycle
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_duty_cycle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_duty_cycle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_duty_cycle
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_duty_cycle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_duty_cycle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_velocity_rad_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_velocity_rad_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_velocity_rad_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stm32_mavlink_msgs__msg__dc_motor_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DCMotorState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stm32_mavlink_msgs.msg._dc_motor_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DCMotorState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stm32_mavlink_msgs__msg__DCMotorState * ros_message = (stm32_mavlink_msgs__msg__DCMotorState *)raw_ros_message;
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
  {  // position_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_rad_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_rad_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_rad_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_c
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_c", field);
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
  {  // enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
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
  {  // current_duty_cycle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_duty_cycle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_duty_cycle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_duty_cycle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_duty_cycle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_duty_cycle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_velocity_rad_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_velocity_rad_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_velocity_rad_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
