num1=int(input("enter first number\n"))
num2=int(input("enter second number\n"))

num3=min(num1,num2)
print(num3)

while(True):
    if(num1%num3==0 and num2%num3==0):
        print("HCF is",num3)
        break
    num3=num3-1