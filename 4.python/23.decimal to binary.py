num1=int(input("enter a number\n"))


mystr=""

while(True):
    remainder=num1%2
    mystr=mystr+str(remainder)
    num1=int(num1/2)
    if(num1==0):
        break

print(mystr)
newstr=mystr[::-1]
print(int(newstr))