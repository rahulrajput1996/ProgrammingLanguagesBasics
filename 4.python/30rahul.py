myfile=open("rahul.txt","rt")
print(myfile.tell())
print(myfile.readline())
print(myfile.tell())
print(myfile.readline())
print(myfile.tell())
print(myfile.readline())
myfile.seek(3)
print(myfile.tell())
print(myfile.readline())