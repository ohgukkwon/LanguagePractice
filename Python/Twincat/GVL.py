import pyads

AMSNETID = '5.82.200.98.1.1'

plc = pyads.Connection(AMSNETID, 851)
plc.open()

print(f"Connected?: {plc.is_open}") #debugging statement, optional
print(f"Local Address : {plc.get_local_address()}") #debugging statement, optional
print(f"Net ID : {AMSNETID}\n")


iinput01 = plc.read_by_name("GVL.iData1")
iinput02 = plc.read_by_name("GVL.iData2")
iinput03 = plc.read_by_name("GVL.iData3")
iinput04 = plc.read_by_name("GVL.iData4")
iinput05 = plc.read_by_name("GVL.iData5")
iinput06 = plc.read_by_name("GVL.iData6")
iinput07 = plc.read_by_name("GVL.iData7")
iinput08 = plc.read_by_name("GVL.iData8")



qoutput01 = plc.read_by_name("GVL.qData1")
qoutput02 = plc.read_by_name("GVL.qData2")
qoutput03 = plc.read_by_name("GVL.qData3")
qoutput04 = plc.read_by_name("GVL.qData4")
qoutput05 = plc.read_by_name("GVL.qData5")
qoutput06 = plc.read_by_name("GVL.qData6")
qoutput07 = plc.read_by_name("GVL.qData7")
qoutput08 = plc.read_by_name("GVL.qData8")

input01 = plc.read_by_name("MAIN.POU1.input01")


sample_string01 = plc.read_by_name("GVL.sample_string", pyads.PLCTYPE_WSTRING)
int01 = plc.read_by_name("MAIN.POU1.pouTestInt01", pyads.PLCTYPE_INT)
int02 = plc.read_by_name("GVL.POU.gvlPouTestInt01", pyads.PLCTYPE_INT)

mainInput1 = plc.read_by_name("MAIN.input01")

plc.close()
	
