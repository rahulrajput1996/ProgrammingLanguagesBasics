# def fun1(num2):

#     factorial=1

#     for i in range(num2,0,-1):
#         factorial=factorial*i
    
#     return factorial

# num=int(input("enter the number\n"))
# ans=fun1(num)
# print(ans)





# def fun1(num):

#     if num==0:
#         return 1
#     else:
#         factorial=num*fun1(num-1)
#         return factorial

# num=int(input("enter the number\n"))
# print(fun1(num))





# def fun1(num):
#     if num==1:
#         return 0
#     elif num==2:
#         return 1
#     else:
#         termvalue=fun1(num-1)+fun1(num-2)
#         return termvalue

# term=int(input("enter the number\n"))
# print(fun1(term))






def fun1(term):

    for i in range(1,term+1):
        if i==1:
            a=0
            termvalue=0
            print(termvalue)
        elif i==2:
            b=1
            termvalue=1
            print(termvalue)

        else:
            termvalue=a+b
            print(termvalue)
            a=b
            b=termvalue


    return termvalue


term=int(input("enter the number\n"))
fun1(term)
# print(fun1(term))