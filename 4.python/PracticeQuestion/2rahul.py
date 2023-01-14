apples=int(input("enter how many apples harry have? "))
minnumber=int(input("enter the min number of range in which u want to distribute? "))
maxnumber=int(input("enter the max number of range in which u want to distribute? "))

if minnumber!=maxnumber:
    for i in range(minnumber,maxnumber+1):
        if(apples%i==0):
            print(f"apples can be equally distributed in {i} boys")
        else:
            print(f"apples can not be equally distributed in {i} boys")
else:
    print("the range of boys are not given properly")
    if (apples%minnumber==0):
        print(f"apples can be equally distributed in {minnumber} boys")
    else:
        print(f"apples can not be equally distributed in {minnumber} boys")

