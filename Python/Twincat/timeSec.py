import datetime

def current_sec():
    now = datetime.datetime.now()
    #print (now.strftime("      %a %d-%m-%Y @ %H:%M:%S"))
    sec = int(now.strftime("%S"))
    print (sec)
    return sec

current_sec()