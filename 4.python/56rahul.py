class employee:
    noofleaves=10

    @classmethod
    def changeleaves(cls,nowleaves):
        cls.noofleaves=nowleaves

harry=employee()
rohan=employee()

harry.changeleaves(20)
employee.changeleaves(30)

print(harry.noofleaves)
print(rohan.noofleaves)
print(employee.noofleaves)

print(harry.__dict__)
print(rohan.__dict__)
print(employee.__dict__)