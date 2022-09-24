import random
tableNumber=int(input("for which number you want table: "))
wrongNumber=random.randint(tableNumber,10*tableNumber)
wrongNumberPosition=random.randint(0,9)

def rohandas(tableNumber,wrongNumber,wrongNumberPosition):
    wrongtable=[]
    for i in range(0,10):
        if(wrongNumberPosition==i):
            wrongtable.append(wrongNumber)
        else:
            wrongtable.append(tableNumber*(i+1))
    
    return wrongtable


def correctTable(wrongtable,tableNumber):
    righttable=[]
    for i in range(0,10):
            righttable.append(tableNumber*(i+1))

    print(f"righttable: {righttable}")
    overwritePosition=1
    for i in range(0,10):
        if righttable[i]!=wrongtable[i]:
            print(f"at position {overwritePosition} rohan table is wrong")
            break
        overwritePosition=overwritePosition+1

    if wrongtable==righttable:
        return None
    else:        
        return overwritePosition


if __name__=="__main__":
    wrongtable=rohandas(tableNumber,wrongNumber,wrongNumberPosition)
    print(f"wrongtable: {wrongtable}")
    wrongindex=correctTable(wrongtable,tableNumber)
    print(f"wrong position of rohan das table is {wrongindex}")
