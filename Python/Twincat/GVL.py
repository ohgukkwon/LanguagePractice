import pyads

AMSNETID = '5.111.153.2.1.1'

plc = pyads.Connection(AMSNETID, 851)
plc.open()

def ChkConnection():
    if plc.is_open:
        print(f"Connected?: {plc.is_open}\n") #debugging statement, optional
    else:
        print(f"Disconnect") #debug

chk = ChkConnection()


def AIStart():
    plc.write_by_name('MAIN.AIStart', True, pyads.PLCTYPE_BOOL)

    
        
def GetAIData():   
    AI01 = plc.read_by_name('MAIN.AI01', pyads.PLCTYPE_INT)
    return AI01

def AIStop():
    plc.write_by_name('MAIN.AIStop', True, pyads.PLCTYPE_BOOL)
    
    
aistart = AIStart()

data = GetAIData()

aistop  = AIStop()





plc.close()