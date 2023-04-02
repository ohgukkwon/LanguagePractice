#create serial port object
#need to import serial library
import serial


ser = serial.Serial()
ser.port = "COM3" #change this to your com port
ser.baudrate = 9600
ser.bytesize = serial.EIGHTBITS
ser.parity = serial.PARITY_NONE
ser.stopbits = serial.STOPBITS_ONE
ser.timeout = None          #block read
#ser.timeout = 0             #non-block read
#ser.timeout = 2              #timeout block read
ser.xonxoff = False     #disable software flow control
ser.rtscts = False     #disable hardware (RTS/CTS) flow control
ser.dsrdtr = False       #disable hardware (DSR/DTR) flow control
ser.writeTimeout = 2     #timeout for write
try:
    ser.open()
except Exception as e:
    print ("error open serial port: " + str(e))
    exit()
