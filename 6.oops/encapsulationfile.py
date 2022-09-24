class Employee:
    noofleaves=10
    _book=5
    __image=3

    def __init__(self):
        self.name="harry"
        self.salary=1000

student1=Employee()

print(student1.noofleaves)
print(student1._book)
print(student1._Employee__image)