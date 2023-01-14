
sum=0

while(True):
    num1=input("enter a number and press q for quit\n")
    if(num1 != "q"):
        sum=sum+int(num1)
    else:
        break

print(sum)
