# public
# protected
# private
class Employee:
    noofleaves=10
    _dance=15
    __game=20
    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
    
harry=Employee("haary",2000)

print(harry.noofleaves)
print(harry._dance)
print(harry._Employee__game)