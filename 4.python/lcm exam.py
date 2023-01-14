term=int(input("how many array elements u want: "))
mylist=[]
for i in range(term):
    myarr=int(input("enter element: "))
    mylist.append(myarr)

maxterm=max(mylist)

i=maxterm
while(True):
    count=0
    for element in mylist:
        if(i%element==0):
            count=count+1
    
    if(count==len(mylist)):
        print(f"LCM is {i}")
        break
    else:
        i=i+1
