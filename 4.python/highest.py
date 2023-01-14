term=int(input("how many array elements u want: "))
mylist=[]
for i in range(term):
    myarr=int(input("enter element: "))
    mylist.append(myarr)

i=0
def myhighestnum(i,mylist):
    # print(mylist)
    highestterm=mylist[0]

    if(highestterm>=max(mylist)):
        print(f"highest term is {highestterm}")
        return highestterm
    else:
        mylist.remove(highestterm)
        # print(mylist)
        i=i+1
        myhighestnum(i,mylist)


value=myhighestnum(i,mylist)
