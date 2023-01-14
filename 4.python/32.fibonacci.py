from time import time

term=int(input("enter the number\n"))

initial=time()

def fun1(num):
    if num==1:
        return 0
    elif num==2:
        return 1
    else:
        termvalue=fun1(num-1)+fun1(num-2)
        return termvalue



def fun2(term):

    for i in range(1,term+1):
        if i==1:
            a=0
            termvalue=0
            # print(termvalue)
        elif i==2:
            b=1
            termvalue=1
            # print(termvalue)

        else:
            termvalue=a+b
            # print(termvalue)
            a=b
            b=termvalue


    return termvalue


initial1=time()
ans=fun1(term)
print("recursive term is",ans)
print(time()-initial1)

initial2=time()
ans=fun2(term)
print("iterative term is",ans)
print(time()-initial2)

print(time()-initial)