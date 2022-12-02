def fac1():
    num = int(input("请输入一个数字："))
    factorial = 1
#查看数字是负数，0 或者正数
    if num<0:
        print("抱歉，负数没有阶乘")
    elif num == 0:
        print("0 的阶乘为 1")
    else:
        for i in range(1,num+1):
            factorial = factorial*i
    print("%d 的阶乘为%d"%(num,factorial))

def fac2():
    num = int(input("请输入一个数字："))
    if num<0:
        print("抱歉，负数没有阶乘")
    elif num == 0:
        print("0 的阶乘为 1")
    else:
        print("%d 的阶乘为%d"%(num,factorial(num))) #就是又套了个算阶乘的函数罢了
def factorial(n):
    result = n
    for i in range(1,n):
        result=result*i
    return result

def fac3():
    num = int(input("请输入一个数字："))
    if num<0:
        print("抱歉，负数没有阶乘")
    elif num == 0:
        print("0 的阶乘为 1")
    else:
        print("%d 的阶乘为%d"%(num,fact(num)))
def fact(n):
    if n == 1:
        return 1
    return n * fact(n - 1) #更进一步，自己套自己

"""
以上fac()只要输入浮点数
都得报错
ValueError: invalid literal for int() with base 10: 'x.xx'
因为int()
"""
