class Employee:
    game=6
    def __init__(self):
        self.game=7
        self.ball=8

class Player(Employee):
    language="C++"
    dance=9
    game=10
    def __init__(self):
        self.game=11
        self.dance=12
        super().__init__()
        print(super().game)

harry=Employee()
rohan=Player()

print(rohan.game)
print(rohan.ball) #due to overwrite Employee __init__ will not run before adding super().__init__()