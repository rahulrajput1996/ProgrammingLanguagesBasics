row=int(input("enter the rows\n"))

j=39
for i in range(1,2*row+1,2):
    print(j*" "+i*"*")
    j=j-1

