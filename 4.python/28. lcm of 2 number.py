num1=int(input("enter first number\n"))
num2=int(input("enter second number\n"))

num3=max(num1,num2)
print("max number is",num3)

while(True):
    if(num3%num2==0 and num3%num1==0):
        print("lcm is",num3)
        break
    num3=num3+1

a=input()
