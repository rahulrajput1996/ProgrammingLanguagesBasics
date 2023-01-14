# dymond shape problem
class A:
    game=1
    pass

class B(A):
    # game=2
    pass

class C(A):
    game=3
    pass

class D(B,C):
    # game=4
    pass

harry=A()
mohan=B()
mukesh=C()
sohan=D()

print(sohan.game)