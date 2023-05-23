#create serial port object
import serial
import time


ser = serial.Serial("COM4", 9600, timeout=1)
    # port='COM3',
    # baudrate=9600,
    # # parity=serial.PARITY_NONE,
    # stopbits=serial.STOPBITS_ONE,
    # bytesize=serial.EIGHTBITS)
# dataSet = ["0","0","0","0","0","0","0","0","0","0"]
rdate = []
while True:    
    rdate = ser.readline().decode('utf-8')
    rdata = rdate.split(' ')
    # print(rdata)
    new_rdate = rdata[1:11]
    print(new_rdate)
    time.sleep(1.3)



