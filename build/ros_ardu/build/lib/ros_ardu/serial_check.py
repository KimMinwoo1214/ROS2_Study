import serial
import time

port = '/dev/ttyUSB0'
baudrate = 9600
timeout = 1

ser = serial.Serial(port, baudrate, timeout=timeout)

while True:
    direction = str(input("Direction: "))
    speed = str(input("Speed: "))
    
    a = direction + speed
    ser.write(a.encode())
    # ser.close()