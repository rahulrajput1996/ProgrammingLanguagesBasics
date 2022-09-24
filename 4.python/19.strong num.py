ranges=int(input("enter a number\n"))

count=0
i=0
while(1):
# for i in range(0,ranges+1):
    sum=0
    num2=str(i)

    for k in range(0,len(num2)):
        digit=int(num2[k])
        
        factorial=1
        for j in range(1,digit+1):
            factorial=factorial*j
        
        sum=sum+factorial

    if(sum==i):
        count=count+1
        print("number is strong number",i)

    if(count==5):
        break
    # else:
    #     print("number is not strong number")

    i=i+1