num = ["harden","lampard",3,34,45,56,76,87,78,45,3,3,3,87686,98,76]
print(num.count(3))
print(num.index(3))
for i in range(num.count(3)): #获取 3 出现的次数
    ele_index = num.index(3) #获取首次 3 出现的坐标
    num[ele_index]="3a" #修改 3 为 3a
print(num)