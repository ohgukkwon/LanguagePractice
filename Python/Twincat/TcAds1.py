#import sys
#import site
#site.getsitepackages("c:\py3.8\lib\site-packages")
#import pyads
import GVL
import pyads

"""AMSNETID = '5.82.200.98.1.1'

plc = pyads.Connection(AMSNETID, 851)
plc.open()"""

input1 = GVL.input01
mainInput1 = GVL.mainInput1
sample_string = GVL.sample_string01
int1 = GVL.int01
int2 = GVL.int02



# read int value by name
print(input1)
print(mainInput1)
print(sample_string)
print(int1)
print(int2)


print("\n")
GVL.plc.write_by_name(input1,True) 
GVL.plc.write_by_name(mainInput1,True)
GVL.plc.write_by_name(int1, 111, pyads.PLCTYPE_INT) 
GVL.plc.write_by_name(int2, 666, pyads.PLCTYPE_INT)

print("\n")
print(input1)
print(mainInput1)
print(int1)
print(int2)

"""
plc.write_by_name("MAIN.input01", False)
plc.write_by_name("GVL.sample_string", "test out", pyads.PLCTYPE_WSTRING)
plc.write_by_name("MAIN.POU1.pouTestInt01", 111, pyads.PLCTYPE_INT)
plc.write_by_name("GVL.POU.gvlPouTestInt01",666, pyads.PLCTYPE_INT)

print(plc.read_by_name("MAIN.input01"))
print(plc.read_by_name("GVL.sample_string", pyads.PLCTYPE_WSTRING))
print(plc.read_by_name("MAIN.POU1.pouTestInt01", pyads.PLCTYPE_INT))
print(plc.read_by_name("GVL.POU.gvlPouTestInt01", pyads.PLCTYPE_INT))
#print(i)

# write int value by name
#plc.write_by_name("GVL.iData1", i)

# close connection"""

