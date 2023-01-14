calorieslist=[10,20,100,40,50]

myreverselist1=calorieslist.copy()
myreverselist1.reverse()
print(myreverselist1)
# print(calorieslist)

myreverselist2=calorieslist[::-1]
print(myreverselist2)
# print(calorieslist)

myreverselist3=[]
for i in range(len(calorieslist)-1,-1,-1):
    myreverselist3.append(calorieslist[i])
print(myreverselist3)



