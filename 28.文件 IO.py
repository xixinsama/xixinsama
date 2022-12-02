with open("C:\\Users\\Lenovo\\Desktop\\69.txt","at") as out_file: #完整路径最为保险
    out_file.write("此文本禁止直接编辑，需打开python文件28.文件IO才可编辑！")
# Read a file
with open("C:\\Users\\Lenovo\\Desktop\\69.txt","rt") as in_file:
    text = in_file.read()
print(text)