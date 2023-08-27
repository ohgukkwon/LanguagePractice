import time
import serial

# configure the serial connections (the parameters differs on the device you are connecting to)
ser = serial.Serial()
#ser.port='/dev/ttyUSB0'
ser.port='COM5'

ser.baudrate=9600
ser.parity=serial.PARITY_NONE
ser.stopbits=serial.STOPBITS_ONE
ser.bytesize=serial.EIGHTBITS
ser.timeout = 1.0


ser.xonxoff = True
ser.rtscts = 0
ser.dsrdtr = 0

ser.close()
ser.open()

ser.flushInput()
ser.flushOutput()

ser.reset_input_buffer()
ser.reset_output_buffer()

data = b'#000STA,111,222,333\r\n'
#noReadData = b'9999999\r\n'

# s = ser.readline()
# print(s)

if ser.is_open:
    while 1:
        ser.write(data)
        print(data)
        time.sleep(1)
    
    