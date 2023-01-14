from abc import ABC,abstractmethod

class Shape(ABC):
    @abstractmethod
    def printarea(self):
        return 0
    
class rectangle(Shape):
    type="rectangle"
    sides=4
    def __init__(self):
        self.length=6
        self.breadth=7

    def printarea(self):
        return self.length * self.breadth
        
rec1=rectangle()
print(rec1.printarea())
