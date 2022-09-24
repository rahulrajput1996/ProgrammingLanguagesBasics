# num1=int(input("enter a number\n"))
# sum=0
# for i in range(1,num1):
#     if(num1%i==0):
#         factor=i
#         sum=sum+factor

# if(sum==num1):
#     print("number is perfect number")
# else:
#     print("number is not perfect number")


lower=int(input("enter lower limit\n"))
upper=int(input("enter upper limit\n"))

for i in range (lower,upper+1):
    sum=0
    for j in range (1,i):
        if(i%j==0):
            factor=j
            sum=factor+sum

    if(sum==i):
        print(i)



