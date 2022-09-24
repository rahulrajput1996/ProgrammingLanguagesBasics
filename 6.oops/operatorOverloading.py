class Employee:
    noofleaves=5

    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
    
    def __add__(self,other):
        return self.salary+other.salary

    def __mul__(self,other):
        return self.salary*other.salary

    def __repr__(self):
        return f"{self.name} and {self.salary}"
    
    def __str__(self):
        return f"{self.name} & {self.salary}"

student1=Employee("harry",2000)
student2=Employee("Larry",3000)

print(student1+student2)
print(student1*student2)

print(student1)
print(student2)

print(str(student1))
print(str(student2))

print(repr(student1))
print(repr(student2))