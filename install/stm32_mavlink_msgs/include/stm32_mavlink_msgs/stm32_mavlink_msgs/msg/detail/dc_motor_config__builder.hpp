// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_DCMotorConfig_control_period_ms
{
public:
  explicit Init_DCMotorConfig_control_period_ms(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::DCMotorConfig control_period_ms(::stm32_mavlink_msgs::msg::DCMotorConfig::_control_period_ms_type arg)
  {
    msg_.control_period_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_watchdog_timeout_ms
{
public:
  explicit Init_DCMotorConfig_watchdog_timeout_ms(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_control_period_ms watchdog_timeout_ms(::stm32_mavlink_msgs::msg::DCMotorConfig::_watchdog_timeout_ms_type arg)
  {
    msg_.watchdog_timeout_ms = std::move(arg);
    return Init_DCMotorConfig_control_period_ms(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_position_limit_max_rad
{
public:
  explicit Init_DCMotorConfig_position_limit_max_rad(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_watchdog_timeout_ms position_limit_max_rad(::stm32_mavlink_msgs::msg::DCMotorConfig::_position_limit_max_rad_type arg)
  {
    msg_.position_limit_max_rad = std::move(arg);
    return Init_DCMotorConfig_watchdog_timeout_ms(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_position_limit_min_rad
{
public:
  explicit Init_DCMotorConfig_position_limit_min_rad(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_position_limit_max_rad position_limit_min_rad(::stm32_mavlink_msgs::msg::DCMotorConfig::_position_limit_min_rad_type arg)
  {
    msg_.position_limit_min_rad = std::move(arg);
    return Init_DCMotorConfig_position_limit_max_rad(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_use_position_limits
{
public:
  explicit Init_DCMotorConfig_use_position_limits(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_position_limit_min_rad use_position_limits(::stm32_mavlink_msgs::msg::DCMotorConfig::_use_position_limits_type arg)
  {
    msg_.use_position_limits = std::move(arg);
    return Init_DCMotorConfig_position_limit_min_rad(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_max_acceleration_rad_s2
{
public:
  explicit Init_DCMotorConfig_max_acceleration_rad_s2(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_use_position_limits max_acceleration_rad_s2(::stm32_mavlink_msgs::msg::DCMotorConfig::_max_acceleration_rad_s2_type arg)
  {
    msg_.max_acceleration_rad_s2 = std::move(arg);
    return Init_DCMotorConfig_use_position_limits(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_max_speed_rad_s
{
public:
  explicit Init_DCMotorConfig_max_speed_rad_s(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_max_acceleration_rad_s2 max_speed_rad_s(::stm32_mavlink_msgs::msg::DCMotorConfig::_max_speed_rad_s_type arg)
  {
    msg_.max_speed_rad_s = std::move(arg);
    return Init_DCMotorConfig_max_acceleration_rad_s2(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_position_max_output
{
public:
  explicit Init_DCMotorConfig_position_max_output(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_max_speed_rad_s position_max_output(::stm32_mavlink_msgs::msg::DCMotorConfig::_position_max_output_type arg)
  {
    msg_.position_max_output = std::move(arg);
    return Init_DCMotorConfig_max_speed_rad_s(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_position_max_integral
{
public:
  explicit Init_DCMotorConfig_position_max_integral(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_position_max_output position_max_integral(::stm32_mavlink_msgs::msg::DCMotorConfig::_position_max_integral_type arg)
  {
    msg_.position_max_integral = std::move(arg);
    return Init_DCMotorConfig_position_max_output(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_position_kd
{
public:
  explicit Init_DCMotorConfig_position_kd(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_position_max_integral position_kd(::stm32_mavlink_msgs::msg::DCMotorConfig::_position_kd_type arg)
  {
    msg_.position_kd = std::move(arg);
    return Init_DCMotorConfig_position_max_integral(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_position_ki
{
public:
  explicit Init_DCMotorConfig_position_ki(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_position_kd position_ki(::stm32_mavlink_msgs::msg::DCMotorConfig::_position_ki_type arg)
  {
    msg_.position_ki = std::move(arg);
    return Init_DCMotorConfig_position_kd(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_position_kp
{
public:
  explicit Init_DCMotorConfig_position_kp(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_position_ki position_kp(::stm32_mavlink_msgs::msg::DCMotorConfig::_position_kp_type arg)
  {
    msg_.position_kp = std::move(arg);
    return Init_DCMotorConfig_position_ki(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_speed_max_output
{
public:
  explicit Init_DCMotorConfig_speed_max_output(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_position_kp speed_max_output(::stm32_mavlink_msgs::msg::DCMotorConfig::_speed_max_output_type arg)
  {
    msg_.speed_max_output = std::move(arg);
    return Init_DCMotorConfig_position_kp(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_speed_max_integral
{
public:
  explicit Init_DCMotorConfig_speed_max_integral(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_speed_max_output speed_max_integral(::stm32_mavlink_msgs::msg::DCMotorConfig::_speed_max_integral_type arg)
  {
    msg_.speed_max_integral = std::move(arg);
    return Init_DCMotorConfig_speed_max_output(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_speed_kd
{
public:
  explicit Init_DCMotorConfig_speed_kd(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_speed_max_integral speed_kd(::stm32_mavlink_msgs::msg::DCMotorConfig::_speed_kd_type arg)
  {
    msg_.speed_kd = std::move(arg);
    return Init_DCMotorConfig_speed_max_integral(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_speed_ki
{
public:
  explicit Init_DCMotorConfig_speed_ki(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_speed_kd speed_ki(::stm32_mavlink_msgs::msg::DCMotorConfig::_speed_ki_type arg)
  {
    msg_.speed_ki = std::move(arg);
    return Init_DCMotorConfig_speed_kd(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_speed_kp
{
public:
  explicit Init_DCMotorConfig_speed_kp(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_speed_ki speed_kp(::stm32_mavlink_msgs::msg::DCMotorConfig::_speed_kp_type arg)
  {
    msg_.speed_kp = std::move(arg);
    return Init_DCMotorConfig_speed_ki(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_mode
{
public:
  explicit Init_DCMotorConfig_mode(::stm32_mavlink_msgs::msg::DCMotorConfig & msg)
  : msg_(msg)
  {}
  Init_DCMotorConfig_speed_kp mode(::stm32_mavlink_msgs::msg::DCMotorConfig::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_DCMotorConfig_speed_kp(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

class Init_DCMotorConfig_motor_id
{
public:
  Init_DCMotorConfig_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DCMotorConfig_mode motor_id(::stm32_mavlink_msgs::msg::DCMotorConfig::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_DCMotorConfig_mode(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::DCMotorConfig>()
{
  return stm32_mavlink_msgs::msg::builder::Init_DCMotorConfig_motor_id();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__BUILDER_HPP_
