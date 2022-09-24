class employee:
    noofleaves=10

    @staticmethod
    def myprint(string):
        print("this is "+ string)
        return 84

harry=employee()
rohan=employee()

harry.myprint("you")
rohan.myprint("him")

print(employee.myprint("us"))