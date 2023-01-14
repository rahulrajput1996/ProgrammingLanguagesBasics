myfile=open("rahul1.txt","w")
a= myfile.write("i am\n")
print(a)
myfile.close()

myfile=open("rahul1.txt","w")
a= myfile.write("i was\n")
print(a)
myfile.close()

myfile=open("rahul1.txt","a")
a= myfile.write("i will\n")
print(a)
myfile.close()

myfile=open("rahul.txt","r+")
print(myfile.read())
myfile.write("\ni am trying\n")
myfile.close()