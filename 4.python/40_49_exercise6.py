import random

manpoints=0
pcpoints=0

while(True):
    options=["snake","water","gun"]
    pcchoose=random.choice(options)
    manchoose=input("enter your choose Man! s For snake/w for water/g for gun and press q for quit\n")

    if(manchoose=="q"):
        break

    if(pcchoose=="snake" and manchoose=="w"):
        print("Man win")
        manpoints=manpoints+1

    elif(pcchoose=="water" and manchoose=="g"):
        print("PC win")
        pcpoints=pcpoints+1

    elif(pcchoose=="gun" and manchoose=="s"):
        print("PC win")
        pcpoints=pcpoints+1

    elif(pcchoose=="water" and manchoose=="s"):
        print("PC win")
        pcpoints=pcpoints+1

    elif(pcchoose=="gun" and manchoose=="w"):
        print("Man win")
        manpoints=manpoints+1

    elif(pcchoose=="snake" and manchoose=="g"):
        print("Man win")
        manpoints=manpoints+1
    
    elif(pcchoose=="snake" and manchoose=="s"):
        print("Both win")
        manpoints=manpoints+1
        pcpoints=pcpoints+1
    
    elif(pcchoose=="water" and manchoose=="w"):
        print("Both win")
        manpoints=manpoints+1
        pcpoints=pcpoints+1
    
    elif(pcchoose=="gun" and manchoose=="g"):
        print("Both win")
        manpoints=manpoints+1
        pcpoints=pcpoints+1
    
    else:
        print("wrong input")


print(f"man-{manpoints} PC-{pcpoints}")  

if(manpoints>pcpoints):
    print("man win")
elif(manpoints<pcpoints):
    print("PC win")
elif(manpoints==pcpoints):
    print("Game tie")

    
    