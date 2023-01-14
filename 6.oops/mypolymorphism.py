class Employee:
    game=10

    def __init__(self):
        self.games=14
        self.book=23
    
class Programmer(Employee):
    games=16

    def __init__(self):
        self.games=20
        super().__init__()
        print(super().game)


Student1=Programmer()
print(Student1.games)
print(Student1.book)