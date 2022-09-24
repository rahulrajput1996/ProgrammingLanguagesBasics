num1=int(input("enter a number\n"))

factorial=1
for i in range(num1,0,-1):
    factorial=i*factorial

print(factorial)

newftr=str(factorial)
length=len(newftr)

count=0
for i in range(length,0,-1):
    if(newftr[i-1]=="0"):
        count=count+1
    else:
        break

print(count)