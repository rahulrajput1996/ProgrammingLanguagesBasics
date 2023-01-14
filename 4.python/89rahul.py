# a=input("enter your name")
# if a.isnumeric():
#     raise Exception ("numbers are not allowed")

# b=input("enter a number")
# if int(b)==0:
#     raise ZeroDivisionError ("we can not divide by zero")

c=input("enter a name")
try:
    print(d)
    # raise Exception(" need to define")
except Exception as e:
    print(e)
    print("yes")
    if c=="harry":
        raise ValueError("harry not allowed")
    print("exception handeled")

