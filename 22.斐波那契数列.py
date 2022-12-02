nterms = eval(input("请输入n值："))
n1,n2 = 1,1
count = 2
if nterms <= 0:
    print("请输入一个正整数。")
elif nterms == 1:
    print("斐波那契数列：")
    print(n1)
else:
    print("斐波那契数列：") #主体
    print(n1, ",", n2, end=" , ")
    while count < nterms:
        nth = n1 + n2
        print(n1+n2, end=" , ")
# 更新值（交换数值）
        n1 = n2
        n2 = nth
        count += 1