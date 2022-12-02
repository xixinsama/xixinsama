#方法一(格里高利闰年规则)
year = int(input("请输入一个年份："))
if (year % 4) == 0:
    if (year % 100) == 0:
        if(year % 400) ==0:
            print("{0}是世纪闰年".format(year)) #整百年能被 400 整除的是闰年
        else:
            print("{0}不是闰年".format(year)) #
    else:
        print("{0}是闰年".format(year)) #非整百年能被 4 整除的为闰年
else:
    print("{0}不是闰年".format(year))
 
#方法二
year = int(input("请输入一个年份："))
if (year % 4) == 0 and (year % 100)!=0 or (year % 400) == 0:
    print("{0}是闰年".format(year))
else:
    print("{0}不是闰年".format(year))
 
#方法三
import calendar #日历库
year = int(input("请输入年份："))
check_year=calendar.isleap(year)
if check_year == True:
    print("%d 是闰年"%year)
else:
    print("%d 是平年"%year)