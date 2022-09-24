# a=10
# def myfun(b):
#     # a=5
#     print(a)
#     print(b)

# print(a)
# myfun(a)
# print(a)




# a=10
# def myfun(b):
#     # a=5
#     global a
#     a=a+5
#     print(a)
#     print(b)

# print(a)
# myfun(a)
# print(a)


a=10
def myfun1():
    a=5
    print(a)
    def myfun2():
        global a
        a=20
        print(a)
    myfun2()
    print(a)
    

print(a)
myfun1()
print(a)