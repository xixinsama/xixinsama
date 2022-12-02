def hcf(x, y):
    # 获取最小值
    if x > y:
        smaller = y
    else:
        smaller = x
    for i in range(1, smaller + 1):
        if ((x % i == 0) and (y % i == 0)):
            hcf = i #反复赋值取最大
    return hcf

num1 = int(input("输入第一个数字: "))
num2 = int(input("输入第二个数字: "))
print(num1, "和", num2, "的最大公约数为", hcf(num1, num2))

"""
首先让a > b
1.如果b = 0,a就是最大公约数
2.否则，计算a除以b的余数，让a = b，而b等于那个余数
3.返回第一步
"""
def gcd(a, b):
    if a < b:
        a, b = b, a
    while b != 0:
        temp = a % b
        print(temp)
        a = b
        b = temp
    return a
print(gcd(8251,6105))