# Read RS485 Parameter Service
# Synchronous request to read data from RS485 motor control table

uint8 motor_id       # Motor ID (30-49 for RS485 motors)
uint16 address       # Control table address to read
uint8 length         # Number of bytes to read (1-64)
