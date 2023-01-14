number=int(input("enter the number"))

number2=str(number)

reverse=number2[::-1]

if(reverse==number2):
    print("number is palindrome")
else:
    print("number is not palindrome")
