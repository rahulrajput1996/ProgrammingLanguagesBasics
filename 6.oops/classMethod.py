class Employee:
    noofleaves=10

    def __init__(self):
        self.name="harry"
        self.salary=1000
    
    @classmethod
    def myfun(cls,newleaves):
        cls.noofleaves=newleaves
    
    @classmethod
    def myalternativeconstructor(cls,newstring):
        str=newstring.split("-")
        cls.newname=str[0]
        cls.newsalary=str[1]

student1=Employee()
student1.myfun(20)
print(student1.noofleaves)
print(Employee.noofleaves)

print(student1.__dict__)
print(Employee.__dict__)

student2=Employee()
student2.myalternativeconstructor("ankit-3000")
print(student2.newname)
print(student2.newsalary)
        
