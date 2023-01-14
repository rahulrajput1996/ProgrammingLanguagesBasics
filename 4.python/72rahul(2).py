print("Factorial")
def factorial(n):

    myfac=1
    for i in range(0,n+1):
        if i==0:
            yield myfac
        else:
            myfac=myfac*i
            yield myfac

n=5
myans=factorial(n)
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())

print("fibonaci series")
def fibonaci(n):
    a=0
    b=1
    for i in range(1,n+1):
        if i==1:
            yield a
        elif i==2:
            yield b
        else:
            term=a+b
            a,b=b,term
            yield term
        
n=8
myans=fibonaci(n)
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())
print(myans.__next__())
