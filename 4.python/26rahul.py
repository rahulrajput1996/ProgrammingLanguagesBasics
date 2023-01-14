myfile = open("rahul.txt","rb")
myfile = open("rahul.txt")  # can be use only once to read   # read line by line


# print(myfile.readlines())

# print(myfile.readline())
# print(myfile.readline())
# print(myfile.readline())


content= myfile.read()  # can be used mutilple times  # read character by character
for line in content:
    print(line)       

# for line2 in myfile:
#     print(line2)   

# print(content)
# print(content)

# content = myfile.read(4)
# print(content)

# content = myfile.read(5)
# print(content)

# content = myfile.read()
# print(content)

myfile.close()
