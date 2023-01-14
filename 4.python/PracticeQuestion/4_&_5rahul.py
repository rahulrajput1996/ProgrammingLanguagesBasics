number=int(input("enter how many numbers you will give: "))
mylist=[]
for i in range(0,number):
    mynum=int(input(f"enter {i+1} number: "))
    mylist.append(mynum)

print(mylist)

palindromelist=[]
for element in mylist:
    newelement=element
    while True:
        mystr=str(newelement)
        if mystr[::-1]==mystr:
            print(f"next palindrome number for {element} is {mystr}")
            palindromelist.append(newelement)
            break
        newelement=newelement+1

print(palindromelist)
