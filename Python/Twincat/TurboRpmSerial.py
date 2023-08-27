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
# or
# ser = serial.Serial(
#     port='COM8',
#     baudrate=9600,
#     parity=serial.PARITY_NONE,
#     stopbits=serial.STOPBITS_ONE,
#     bytesize=serial.EIGHTBITS,
# )

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

def RPM_read():
    if ser.is_open:
        status = b'#000STA\r\n'
        ser.write(status)
        time.sleep(0.005)
        
        read_status = []
        Rpm = []
        #s= ser.readline()
        
        if ser.readline():            
            lowData = str(ser.readline())
            splitData = lowData.split(',')

            print(splitData)

            for i in splitData:
                read_status.append(i)
            Rpm = int(read_status[2])

        else:
            Rpm = 99999
            print("RPM is : ", Rpm)
            
        
    return Rpm
        
            
        
        
        
