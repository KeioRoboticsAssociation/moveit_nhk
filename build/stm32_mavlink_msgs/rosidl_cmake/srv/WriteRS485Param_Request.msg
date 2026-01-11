# Write RS485 Parameter Service
# Synchronous request to write data to RS485 motor control table

uint8 motor_id       # Motor ID (30-49 for RS485 motors)
uint16 address       # Control table address to write
uint8 length         # Number of bytes to write (1-64)
uint8[64] data       # Data to write
