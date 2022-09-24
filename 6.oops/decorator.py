def deco(fun):
    def exec():
        print("executing")
        fun()
        print("executed")
    return exec

@deco
def harry():
    print("working")

harry()