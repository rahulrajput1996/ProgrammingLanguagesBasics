# single inheritance
class Employee:
    noofleaves=8
    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
    def printprog(self):
        return f"{self.name} and {self.salary}"

class Programmer(Employee):
    noofholiday=10
    def __init__(self,aname,asalary,alanguage):
        self.name=aname
        self.salary=asalary
        self.language=alanguage
    def printlog(self):
        return f"{self.name} and {self.language}"
    
mukesh=Programmer("mukesh",5000,["c++","python"])

print(mukesh.noofholiday)
print(mukesh.noofleaves)
print(mukesh.printlog())
print(mukesh.printprog())
print(mukesh.language)
print(mukesh.salary)