class Employee:
    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
    
    @property
    def setmail(self):
        if self.name==None or self.salary==None:
            return f"Email is deleted"

        return f"{self.name}.{self.salary}@gmail.com"
    
    @setmail.setter
    def setmail(self,string):
        mystr=string.split("@")
        mystr2=mystr[0].split(".")
        self.name=mystr2[0]
        self.salary=mystr2[1]

    @setmail.deleter
    def setmail(self):
        self.name=None
        self.salary=None


harry=Employee("harry",1000)

print(harry.setmail)
print(harry.name)
print(harry.salary)

harry.name="mohan"
harry.salary=2000

print(harry.setmail)
print(harry.name)
print(harry.salary)

harry.setmail="rohan.3000@gmail.com"

print(harry.setmail)
print(harry.name)
print(harry.salary)

del harry.setmail
print(harry.setmail)
print(harry.name)
print(harry.salary)