import random
list1 = ['1','2','3','4','5','6','7','8','9','0']
for i in range(65,91):
    list1.append(chr(i)) #通过 for 循环遍历 ASCII 追加到空列表中
for j in range (97,123):
    list1.append(chr(j))
for k in range(48,58):
    list1.append(chr(k))
ma = random.sample(list1,6) #sample函数输出列表中的随机元素，长度为第二个变量
print(ma) #获取到的为列表
ma = ''.join(ma) #将列表转化为字符串,元素只能是字符串
print(ma)

import random,string #引入了string库
str1 = "0123456789"
str2 = string.ascii_letters # string.ascii_letters 包含所有字母（大写或小写）的字符串
str3 = str1+str2
ma1 = random.sample(str3,6) #多个字符中选取特定数量的字符
ma1 = ''.join(ma1) #使用 join 拼接转换为字符串
print(ma1)
