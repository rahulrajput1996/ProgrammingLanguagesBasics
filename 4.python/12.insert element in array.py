list1=["rahul","shyam",5,5,"morning",20]

index=int(input("where to insert\n"))

terms=int(input("total terms to input\n"))


list2=[]
for i in range(0,terms):
    list2.append(input())

j=0
for i in range(index-1,len(list2)+(index-1)):
    
    list1.insert(i,list2[j])
    j=j+1
    

print(list1)
