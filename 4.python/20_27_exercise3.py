# print("working")
mainnum=18
count=0
print("you have limited chances of 5 for guess the num")

while(True):
    num1=int(input("\nenter the number and guess\n"))
    if(num1==mainnum):
        print("you entered right number and you won")
        print("you have taken no. of guess",count+1,)
        break
    else:
        count= count+1
        print("you entered wrong number!")
        print("No. of guess left = ",5-count)
        if (5-count==0):
            print("you loose the game")
            break
        else:
            if(mainnum>num1):
                print("pls increase the number")
                continue
            else:
                print("pls decrease the number") 
                continue   
