row=int(input("enter the rows\n"))

j=row-1

for i in range(1,row+1):
    print(j*" "+i*"*")
    j=j-1