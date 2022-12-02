L = ['Hello','World','IBM','Apple']
for s in L:
    s=s.lower()
    print(s) #将 list 中每个字符串都变成小写，返回每个字符串
#更简单的方式
L = ['Hello','World','IBM','Apple']
print([s.lower() for s in L])