#create serial port object
import serial
import time


ser = serial.Serial("COM4", 9600, timeout=1)

rdate = []
while True:    
    row_date = ser.readline().decode('utf-8')
    row_data = row_date.split(' ')
    # print(rdata)
    date = row_data[1:11]
    print(date)
    time.sleep(1.3)



