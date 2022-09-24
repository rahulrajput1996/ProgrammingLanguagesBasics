num1=int(input("enter the number\n"))
count=0
for i in range(1,num1+1):
    if(num1%i==0):
        count=count+1
    
if(count==2):
    print("number is prime")
else:
    print("number is not prime")
