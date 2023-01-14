number=int(input("enter a number\n"))

number2=str(number)
power=len(number2)

cube=0
for i in range(0,len(number2)):
    digit=int(number2[i])

    cube=cube+(digit**power)

if(cube==number):
        print("number is armstrong")
else:
        print("number is not armstrong")    

