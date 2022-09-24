num1=int(input("enter the number one\n"))
num2=int(input("enter the number two\n"))

num3=int(input("for multiply press 1,for addition press 2,for divide press 3\n"))
if num3==1:
    if num1==45:
        if num2==3:
            print(555)
        else:
            num4=num1*num2
            print(num4)
    else:
        print(num1*num2) 

elif  num3==2:
    if num1==56:
        if num2==9:
           print(77)
        else:
           num4=num1+num2
           print(num4)  
    else:
        print(num1+num2) 

else:
    if num1==56:
        if num2==6:
           print(4)
        else:
           num4=num1/num2
           print(num4)           
    else:
        print(num1+num2)        