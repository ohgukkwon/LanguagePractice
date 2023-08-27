import TurboRpmSerial
import pyads
import time
import timeSec

AMSID = '192.168.1.222.1.1'
# connect to plc and open connection
plc = pyads.Connection(AMSID, pyads.PORT_TC3PLC1)

# TurboRPM = TurboRpmSerial.RPM_read()
# CurrentSec = timeSec.current_sec()
plc.open()

while 1:
        TurboRPM = TurboRpmSerial.RPM_read()
        CurrentSec = timeSec.current_sec()
        # read int value by name
        # i = plc.read_by_name("GVL.int_val")

        # write int value by name
        plc.write_by_name("GVL.TurboRPM", TurboRPM)
        plc.write_by_name("GVL.currentSec", CurrentSec)
        #print(TurboRPM)
        print(TurboRPM)
        print(CurrentSec)

        time.sleep(2)


