lis1=["10","4","1","2","3"]
print(map(int,lis1))
lis2=list(map(int,lis1))
print(lis2)
res=lis2[1]+lis2[0]
print(res)




def sq(a):
    return a*a
lis3=list(map(sq,lis2))
print(lis3)
lis3=list(map(lambda a:a*a,lis2))
print(lis3)


def square(a):
    return a*a

def cube(b):
    return b*b*b

lis4=[square,cube]
for i in range(5):
    val=list(map(lambda x:x(i),lis4))
    print(val)


rahul=[1,2,3,4,5,6,7,8,9]
def fun1(a):
    return a>5
sohan=list(filter(fun1,rahul))
print(sohan)

from functools import reduce
num=reduce(lambda x,y:x+y,rahul)
print(num)
