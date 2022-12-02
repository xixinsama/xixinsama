import os
for d in os.listdir('.'):
    print(d)
#另外列表推导式代码：（此内容不在教材范围，仅供借鉴）
[d for d in os.listdir('.')]
