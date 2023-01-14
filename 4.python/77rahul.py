import time
def myfun():
    mystr="this is a good boy and i have a dog which is very small"
    print("hiiiii")
    time.sleep(3)
    print("hmmmm")
    while(True):
        print("Bye")
        text=(yield)
        print("yes")
        print(text)
        if text in mystr:
            print("available")
        else:
            print("No available")
        print("no")

myvariable=myfun()
print(type(myvariable))
print("first")
myvariable.__next__()
# next(myvariable)
print("second")
myvariable.send("good boy")
# myvariable.close()
myvariable.send("i have a dog")
myvariable.send("bad boy")
