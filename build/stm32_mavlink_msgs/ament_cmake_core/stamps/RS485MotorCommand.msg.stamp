# RS485 Motor Command Message (Protocol v2.2)
# User-friendly command message using physical device addressing
# Use this with /rs485motor/command topic

# Physical motor addressing (user-friendly)
uint8 device_id             # RS485 device ID (1-15, set via DIP switches)
uint8 motor_index           # Motor index on device (0-2)

# Control mode: 0=velocity, 1=position, 2=duty (matches RS485_PROTOCOL_v2-2.md)
uint8 control_mode          # 0=velocity, 1=position, 2=duty
float32 target_velocity     # Target velocity in rad/s (for velocity mode)
float32 target_position     # Target position in rad (for position mode)
float32 target_duty         # Target duty cycle -1.0 to 1.0 (for duty mode)
float32 acceleration        # Acceleration in rad/s^2 (reserved for future use)
bool enabled                # Enable/disable motor
