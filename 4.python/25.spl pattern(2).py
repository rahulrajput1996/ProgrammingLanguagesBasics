num1=int(input("enter a number\n"))

for i in range(0,num1):
    if(i==0  or i==num1-1):
        print(num1*"*")
    else:
        print("*"+(num1-2)*" "+"*")
