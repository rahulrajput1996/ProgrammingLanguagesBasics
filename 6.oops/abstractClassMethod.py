from abc import ABC,abstractmethod

class shape(ABC):
    @abstractmethod
    def area():
        return 0

class rectange(shape):
    type="area"
    side=4

    def area(self):
        return self.side*self.side


mathematics=rectange()
print(mathematics)
print(mathematics.area())