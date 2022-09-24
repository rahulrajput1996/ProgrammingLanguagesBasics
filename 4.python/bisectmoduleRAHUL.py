import bisect

number=4
mylist=[1,2,3,5,7,8]
print(bisect.bisect(mylist,number))
bisect.insort(mylist,number)
print(mylist)