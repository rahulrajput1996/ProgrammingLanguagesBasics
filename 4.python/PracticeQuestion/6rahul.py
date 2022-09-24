import random
minnumber=int(input("enter lower limit of choosed number: "))
maxnumber=int(input("enter higher limit of choosed number: "))
computerNumber=random.randint(minnumber,maxnumber)
print(computerNumber)
print("Player 1 starts: ")
trialOne=1
trialTwo=1
while True:
    player1number=int(input("choose a number: "))
    if(computerNumber==player1number):
        print(f"Number is matched and you took {trialOne} trials to get exact number")
        break
    elif(computerNumber<player1number):
        print("choose a smaller number! try again")
    elif(computerNumber>player1number):
        print("choose a larger number! try again")
    
    trialOne=trialOne+1

print("Player 2 starts: ")
while True:
    player1number=int(input("choose a number: "))
    if(computerNumber==player1number):
        print(f"Number is matched and you took {trialTwo} trials to get exact number")
        break
    elif(computerNumber<player1number):
        print("choose a smaller number! try again")
    elif(computerNumber>player1number):
        print("choose a larger number! try again")
    
    trialTwo=trialTwo+1

if(trialOne>trialTwo):
    print("Player 2 wins")
elif(trialOne<trialTwo):
    print("Player 1 wins")
elif(trialOne==trialTwo):
    print("Match is tied")
