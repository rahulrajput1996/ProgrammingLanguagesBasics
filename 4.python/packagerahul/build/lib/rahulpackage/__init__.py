class Employee:
    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
        print("constructor ban gya")

    def myfun(self,number):
        print("this is given number")
        print(self.name)
        print(self.salary)
        return number
