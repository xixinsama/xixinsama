# while的运用
i = 1
while i <= 9:  # 每一列的循环
    j = 1
    while j <= i:  # 每一行的循环
        print("%d*%d=%d" % (j, i, i * j), end=' ')  # 把i和j反过来就一样了
        # end是关键字，可以去除原本打印的分行，并在结果之后添加字符。
        j += 1
        pass
    print()  # 与上面end的作用一样 ，去除分行。
    i += 1
    pass
# for的运用
for a in range(1, 10):  # 左闭右开区间，默认步数为一。
    for b in range(1, a + 1):
        print('%d*%d=%d' % (a, b, a * b), end=' ')
        pass
    print()
    pass
# 由此可见：使用while时不知道循环次数，而for循环在知道次数的情况下使用且更简洁。
