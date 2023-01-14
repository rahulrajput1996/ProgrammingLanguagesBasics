# a=10
# b=5
# c=sum([a,b])
# print(c)

def function2(a,b):
    '''this take three input and give one output'''
    '''this take  input and give one output'''
    print("inside") 
    average=(a+b)/2

    print(average)
    return average
    print("outside")

ans=function2(20,40)
print(ans)
# print(function2(10,15))
print(function2.__doc__)
