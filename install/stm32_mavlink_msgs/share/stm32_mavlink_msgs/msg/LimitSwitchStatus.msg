# Limit Switch Status Message
# Real-time status of limit switches on STM32

std_msgs/Header header          # Header with timestamp
uint8 switch_count              # Number of limit switches (always 16)
bool[16] switch_states          # Boolean array of switch states
                                # false = not triggered (LOW)
                                # true = triggered (HIGH)
uint32 timestamp_ms             # STM32 timestamp in milliseconds
