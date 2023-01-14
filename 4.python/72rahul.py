def gen(n):
    for i in range(n):
        yield i


# print(dir(gen))  
myans=gen(2)
print(myans)
# print(dir(myans))
print(myans.__next__())
print(myans.__next__())

myname="rahulBHAI"
print(dir(myname))
myans=iter(myname)
print(myans)
print(myans.__next__())
print(myans.__next__())
# print(dir(myname))
