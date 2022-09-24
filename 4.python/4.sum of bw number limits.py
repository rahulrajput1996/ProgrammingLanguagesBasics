num1=int(input("enter the first number\n"))
num2=int(input("enter the second number\n"))
sum=0
for i in range(num1,num2+1):
    sum=i+sum

print("sum is",sum)