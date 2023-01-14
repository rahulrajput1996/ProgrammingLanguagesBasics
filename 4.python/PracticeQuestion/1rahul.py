while True:

    try:
        number=int(input("enter your birth year or current age: "))
        if number>=0 and number<=100:
            print(f"Your current age is {number} years")
            print(f"you will be 100 years old in next {100-number} years")
            year=int(input("enter a year in which you want to know your age: "))
            if year>2022:
                print(f"you will be {(year-2022)+number} years old in {year}")
            else:
                print("enter right year next time! greater than 2022 only")  

        elif number>100 and number<1000:
            print("You seem to be very old")

        elif len(str(number))==4 :
            if number>1922 and number<=2022:
                print(f"Your birth year is {number}")
                print(f"you will be 100 years old in next {100-(2022-number)} years")
                year=int(input("enter a year in which you want to know your age: "))
                if year>2022:
                    print(f"you will be {(year-number)} years old in {year}")
                else:
                    print("enter right year next time! greater than 2022 only")  
            elif number>2022:
                print("you are not born yet")
            else:
                print("you seem to be very old")
        
    except Exception as e:
        print("Please try again!Wrong input")

    myinput=input("press c for continue and q for quit: ")
    if myinput=='c':
        continue
    elif myinput=='q':
        break
    
