class Employee:
    noofleaves=10
    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
    def printlog(self):
        return f"{self.name} and {self.salary}"

class Player:
    noofleaves=15
    def __init__(self,agame,aweight):
        self.game=agame
        self.weight=aweight
    def printfun(self):
        return f"{self.game} and {self.weight}"   
    
class Programmer(Employee,Player):
    noofleaves=20
    def printlog(self):
        return f"{self.name} & {self.salary}"

karan=Programmer("karan","9999")

print(karan.noofleaves)
print(karan.printlog())

   
   
