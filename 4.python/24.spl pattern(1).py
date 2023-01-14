num1=int(input("enter a number\n"))

j=num1
k=0
for i in range(0,num1+1):
    i=str(i)
    print(k*" "+j*i)
    j=j-1
    k=k+1