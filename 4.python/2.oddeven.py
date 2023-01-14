# num=int(input("enter the number\n"))
# if(num%2==0):
#     print("number is even")
# else:
#     print("number is odd")

num1 = int(input("enter lower limit\n"))
num2=int(input("enter upper limit\n"))
for i in range(num1,num2+1):
    if(i%2==0):
        print("even number is",i)
    else:
        print("odd number is", i)

