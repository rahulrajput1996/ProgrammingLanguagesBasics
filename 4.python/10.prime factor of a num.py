num1=int(input("enter a number\n"))

for i in range(1,num1):
    
    if(num1%i==0):
        factor=i
        
        count=0
        for j in range(1,factor+1):
            if(factor%j==0):
                count=count+1
        if(count==2):
            print(factor)