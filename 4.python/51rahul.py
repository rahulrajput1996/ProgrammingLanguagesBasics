def func1(func2):
    def exec():
        print("executing")
        func2()
        print("executed")
    return exec

@func1
def harry():
    print("good boy")

# harry=func1(harry)
harry()