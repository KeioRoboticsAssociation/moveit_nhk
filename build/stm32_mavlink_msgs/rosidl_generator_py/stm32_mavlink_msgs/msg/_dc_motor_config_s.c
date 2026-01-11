// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from stm32_mavlink_msgs:msg/DCMotorConfig.idl
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
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__struct.h"
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool stm32_mavlink_msgs__msg__dc_motor_config__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("stm32_mavlink_msgs.msg._dc_motor_config.DCMotorConfig", full_classname_dest, 53) == 0);
  }
  stm32_mavlink_msgs__msg__DCMotorConfig * ros_message = _ros_message;
  {  // motor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed_kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_kp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_ki
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_ki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_ki = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_kd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_kd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_max_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_max_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_max_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_max_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_max_output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_max_output = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_kp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_ki
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_ki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_ki = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_kd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_kd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_max_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_max_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_max_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_max_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_max_output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_max_output = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_speed_rad_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_speed_rad_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_speed_rad_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_acceleration_rad_s2
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_acceleration_rad_s2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_acceleration_rad_s2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // use_position_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_position_limits");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_position_limits = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_limit_min_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_limit_min_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_limit_min_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_limit_max_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_limit_max_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_limit_max_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // watchdog_timeout_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "watchdog_timeout_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->watchdog_timeout_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // control_period_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_period_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_period_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stm32_mavlink_msgs__msg__dc_motor_config__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DCMotorConfig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stm32_mavlink_msgs.msg._dc_motor_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DCMotorConfig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stm32_mavlink_msgs__msg__DCMotorConfig * ros_message = (stm32_mavlink_msgs__msg__DCMotorConfig *)raw_ros_message;
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
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_ki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_ki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_ki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_kd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_max_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_max_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_max_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_max_output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_max_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_max_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_ki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_ki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_ki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_kd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_max_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_max_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_max_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_max_output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_max_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_max_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_speed_rad_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_speed_rad_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_speed_rad_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_acceleration_rad_s2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_acceleration_rad_s2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_acceleration_rad_s2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_position_limits
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_position_limits ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_position_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_limit_min_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_limit_min_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_limit_min_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_limit_max_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_limit_max_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_limit_max_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // watchdog_timeout_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->watchdog_timeout_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "watchdog_timeout_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_period_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_period_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_period_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
