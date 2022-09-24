print("enter the number,how many row u want")
num=int(input())
ques=bool(int(input("do you know riding? press 1 for yes & press 0 for no\n")))
print(type (ques))
print(ques)
count=1

if(ques):
    while(count<=num):
        print(count* "*")
        count=count+1
else:
    count=num
    for x in range(num+1,1,-1):
        print(count*"*")
        count=count-1
   
