# name="23 25 rahul khan 37 39"
# print(name.split())







# mylist=[]
# num=int(input("elemets you want"))

# for i in range (0,num):
#     mylist.append(int(input()))

# print(mylist)








# list=input("enter elemets by spaces")
# mylist=list.split()
# print(mylist)
# print(list)

# for i in range (0,len(mylist)):
#     mylist[i]=int(mylist[i])

# print(mylist)











mylist=[]
num=int(input("total number of elements\n"))

for i in range (0,num):
    item=input()
    mylist.append(item)

print(mylist)

for i in range(0,num):

    if(mylist[i].isnumeric()):
        mylist[i]=int(mylist[i])

print(mylist)


for i in range (0,len(mylist)):
    mylist[i]=str(mylist[i])
print(mylist)



sum=0
for i in range (0,len(mylist)):
    if(mylist[i].isnumeric()):
        sum=sum+int(mylist[i])

print("sum is ",sum)




mylist2=[]
for i in range(0,num):
    if(mylist[i].isnumeric()):
        mylist2.append(mylist[i])
        
print(mylist2)




for i in range(0,len(mylist2)-1):
    if(int(mylist2[i])>int(mylist2[i+1])):
        largest=int(mylist2[i])
    else:
        largest=int(mylist2[i+1])

print(largest)