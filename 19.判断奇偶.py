#方法一
num = int(input('请输入一个数字：'))
if (num % 2) == 0:
    print("{0}是偶数".format(num))
else:
    print("{0}是奇数".format(num))
 
#方法二（加入一个输入判断）
while True:
    try:
        num = int(input('请输入一个整数：')) #判断输入是否为整数，不是纯数字需要重新输入
    except ValueError:
        print("输入的不是整数！")
        continue
    if (num % 2) == 0:
        print("{0}是偶数".format(num))
    else:
        print("{0}是奇数".format(num))
    break