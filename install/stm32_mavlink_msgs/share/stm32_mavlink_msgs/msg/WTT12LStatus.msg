# WTT12L Sensor Status Message
# Real-time status of WTT12L photoelectric sensors

std_msgs/Header header          # Header with timestamp
uint8 device_count              # Number of WTT12L devices configured (max 8)
bool[8] device_states           # Boolean array of device states
                                # false = not triggered (object not detected)
                                # true = triggered (object detected)
                                # Each element represents one WTT12L device
uint32 timestamp_ms             # STM32 timestamp in milliseconds
