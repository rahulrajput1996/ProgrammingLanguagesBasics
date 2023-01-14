num=int(input("enter a number\n"))

# num2=str(num)

# sum=0

# for i in range(0,len(num2)):
#     sum=sum+int(num2[i])

# print(sum)



sum=0

while(num!=0):
    remainder=num%10
    sum=sum+remainder
    num=int(num/10)

print(sum)