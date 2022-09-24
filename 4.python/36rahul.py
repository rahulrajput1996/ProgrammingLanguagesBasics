num1=[10,25,20,30,5]
cars=["mercedes","bmw","vw","bularo"]

def myfun1(a):
    return len(a)
cars.sort(reverse=False,key=myfun1)
print(cars)
num1.sort()
print(num1)





# def myfun2(a,b):
#     return a+b

myfun2=lambda a,b:a+b

ans1=myfun2(5,4)
print(ans1)







num2=[[10,3],[1,2],[10,5]]
# def myfun3(c):
#     return c[1]

myfun3=lambda a:a[0]

num2.sort(key=myfun3)
print(num2)