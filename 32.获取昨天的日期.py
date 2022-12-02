import datetime
def getYesterday(): 
    today=datetime.date.today() 
    oneday=datetime.timedelta(days = 1) #更改数值可以逆转时间
    yesterday = today - oneday 
    return yesterday

print(getYesterday())