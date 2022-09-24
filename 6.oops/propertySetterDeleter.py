class Employee:
    noofleaves=10

    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
    
    @property
    def mymail(self):
        if(self.name==None and self.salary==None):
            return "Email is deleted"
        return f"{self.name}.{self.salary}@gmail.com"

    @mymail.setter
    def mymail(self,string):
        str1=string.split("@")
        str2=str1[0].split(".")
        self.name=str2[0]
        self.salary=str2[1]

    @mymail.deleter
    def mymail(self):
        self.name=None
        self.salary=None

Student=Employee("harry",1000)
print(Student)
print(Student.name)
print(Student.salary)
print(Student.mymail)

Student.name="larry"
Student.salary=2000
print(Student)
print(Student.name)
print(Student.salary)
print(Student.mymail)

Student.mymail="perry.3000@gmail.com"
print(Student)
print(Student.name)
print(Student.salary)
print(Student.mymail)

del Student.mymail
print(Student)
print(Student.name)
print(Student.salary)
print(Student.mymail)