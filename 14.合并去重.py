list1 = [2,3,8,4,9,5,6]
list2 = [5,6,10,17,11,2]
list3 = list1 + list2
print(list3) #不去重只进行两个列表的组合
print(set(list3)) #去重，类型为set（集合）需要转换成 list
print(list(set(list3)))