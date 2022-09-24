class employee:
    noofleaves=10

    def __init__(self,aname,asalry):
        self.name=aname
        self.salary=asalry

    @classmethod
    def fromdash(cls,string):
        # params=string.split("-")
        # print(params)
        # return cls(params[0],params[1])
        return cls(*string.split("-"))

harry=employee("harry",1000)
rohan=employee("rohan",2000)
karan=employee.fromdash("rohan-3000")

print(harry.noofleaves)
print(harry.name)
print(rohan.salary)
print(karan.salary)