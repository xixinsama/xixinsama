import calendar
yy = int(input("输入年份: "))
mm = int(input("输入月份: "))
monthRange = calendar.monthrange(yy,mm)
print(monthRange) #第一个数字为此月第一天星期（0~6/Su~Se）