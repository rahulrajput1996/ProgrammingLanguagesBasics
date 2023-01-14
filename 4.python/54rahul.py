class employee:
    noofleaves=10


harry=employee()
rohan=employee()

harry.name="harry"
rohan.name="rohan"

harry.salary=1000
rohan.salary=2000

print(harry.noofleaves)
print(rohan.noofleaves)
print(employee.noofleaves)
print(harry.__dict__)
print(rohan.__dict__)
print(employee.__dict__)

harry.noofleaves=15
employee.noofleaves=20

print(harry.noofleaves)
print(rohan.noofleaves)
print(employee.noofleaves)
print(harry.__dict__)
print(rohan.__dict__)
print(employee.__dict__)