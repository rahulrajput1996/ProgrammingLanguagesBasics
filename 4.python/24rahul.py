num1 = (input("enter first number "))
num2 = (input("enter second number "))

try:
    num3 = print("the sum of both is",int(num1)+int(num2))
except Exception as error:
    print(error)
else:
    print("i m else loop")
finally:
    print("i will run every time")

print("this line is very important")
