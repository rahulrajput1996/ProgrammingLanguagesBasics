import random
number=int(input("how many name u want to give: "))

myfirstname=[]
mysecondname=[]

for i in range(number):
    name=input("enter the name: ")
    name2=name.split(" ",1)
    myfirstname.append(name2[0])
    mysecondname.append(name2[1])


newnamelist=[]
while(True):
    rad1=random.randint(0,number-1)
    rad2=random.randint(0,number-1)
    if(rad1==rad2):
        continue

    newname=myfirstname[rad1]+" "+mysecondname[rad2]
    newnamelist.append(newname)
    if(len(newnamelist)==number):
        break

for element in newnamelist:
    print(element)
    
