import datetime

def exercisefoodwrite(clientname):
    while True:
        mydata=input("enter your data\n")
        with open(f"{clientname}.txt",'a') as myfile:
            myfile.write(f"{datetime.datetime.now()} {mydata}\n")
        myloop=int(input("press 0 for continue entering your data, and press 1 if all data entered\n"))
        if myloop==0:
            continue
        elif myloop ==1:
            break

def datawrite():
    activityname=int(input("prees 0 for exercise lock ,press 1 for food lock\n"))
   
    if activityname==0:
        clientno=int(input("press 0,1,2 respectively for hammad,harry,rohan\n"))
        
        if clientno==0:
            clientname="hammadexercise"
        elif clientno==1:
            clientname="harryexercise"
        elif clientno==2:
            clientname="rohanexercise"
        
        exercisefoodwrite(clientname)
    
    elif activityname==1:
        clientno=int(input("press 0,1,2 respectively for hammad,harry,rohan\n"))
        
        if clientno==0:
            clientname="hammadfood"
        elif clientno==1:
            clientname="harryfood"
        elif clientno==2:
            clientname="rohanfood"
        
        exercisefoodwrite(clientname)

def exercisefoodretrieve(clientname):
    with open(f"{clientname}.txt",'rt') as myfile:
        content=myfile.read()
        print(content)

def dataretrieve():
    activityname=int(input("prees 0 for exercise ,press 1 for food\n"))
    
    if activityname==0:
        clientno=int(input("press 0,1,2 respectively for hammad,harry,rohan\n"))
        
        if clientno==0:
            clientname="hammadexercise"
        elif clientno==1:
            clientname="harryexercise"
        elif clientno==2:
            clientname="rohanexercise"
        
        exercisefoodretrieve(clientname)
    
    elif activityname==1:
        clientno=int(input("press 0,1,2 respectively for hammad,harry,rohan\n"))
        
        if clientno==0:
            clientname="hammadfood"
        elif clientno==1:
            clientname="harryfood"
        elif clientno==2:
            clientname="rohanfood"
        
        exercisefoodretrieve(clientname)

while True:
    start=int(input("press 0 for data write and press 1 for data retrieve and press 3 for quit\n"))
    if start ==0:
        datawrite()
    elif start==1:
        dataretrieve()
    elif start==3:
        break
