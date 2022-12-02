import os
def print_dir():
    filepath = input("请输入一个路径：")
    if filepath == "":
        print("请输入正确的路径")
    else:
        for i in os.listdir(filepath): #获取目录中的文件及子目录列表
            print(os.path.join(filepath,i)) #把路径组合起来
print(print_dir())