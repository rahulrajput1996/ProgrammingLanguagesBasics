with open("rahul.txt") as myfile:
    a=myfile.readlines()
    print(a)

myfile=open("rahul.txt")
a=myfile.readlines()
print(a)
myfile.close()