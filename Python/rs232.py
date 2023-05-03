#create Beckhoff ADS connection
import pyads

# connect to plc and open connection
plc = pyads.Connection('127.0.0.1.1.1', pyads.PORT_TC3PLC1)
plc.open()

# read int value by name while plc is running
#WHILE syntex PLC IS RUNNING
#
while plc.read_state() == pyads.STATE_RUN:
    i = plc.read_by_name("GVL.int_val")
    print(i)

    # write int value by name
    plc.write_by_name("GVL.int_val", i)

# close connection
plc.close()