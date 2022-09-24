class Employee:
    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
    
    def __add__(self,other):
        return self.salary+other.salary

    def __truediv__(self,other):
        return self.salary/other.salary
    
    def __mul__(self,other):
        return self.salary*other.salary
    
    def __pow__(self,other):
        return self.salary**other.salary

    def __repr__(self):
        return f"{self.name} and {self.salary}"

    def __str__(self):
        return f"{self.name} & {self.salary}"
    
harry=Employee("harry",20)
rohan=Employee("rohan",15)

print(harry+rohan)
print(harry/rohan)
print(harry*rohan)
print(harry**rohan)

print(harry)
print(repr(harry))
print(str(harry))