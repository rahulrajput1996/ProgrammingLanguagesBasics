class employee:
    noofleaves=10

    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary

    def details(self):
        return f"details are {self.name} and {self.salary}"

harry=employee("harry",1000)
rohan=employee("rohan",2000)

# harry.name="harry"
# rohan.name="rohan"

# harry.salary=1000
# rohan.salary=2000

print(harry.details())
print(rohan.details())
print(harry.name)
print(rohan.salary)
