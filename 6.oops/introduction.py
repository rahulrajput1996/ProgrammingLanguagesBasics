class Employee():
    noofleaves=10

    def __init__(self):
        self.name="harry"
        self.salary=1000

    def myfun(self):
        return f"i am here"

student1=Employee()
print(student1.myfun())

