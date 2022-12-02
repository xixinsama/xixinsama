def calc(*numbers):
    sum=0
    for n in numbers:
        sum = sum + n*n
    return sum

print(calc(2,4,5,2))