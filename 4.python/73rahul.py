#list comprehension
number1=[i for i in range(0,10) if i%2==0]
print(type(number1))
print(number1)

number2={i:f"item{i}" for i in range (1,11) if i%5==0}
print(type(number2))
print(number2)

number2={value:key  for key,value in number2.items()}
print(type(number2))
print(number2)

number3={i for i in [1,2,3,1,2,3]}
print(type(number3))
print(number3)

number4=(i for i in range(2,11) if i%3==0)
print(type(number4))
print(number4)
print(number4.__next__())

for items in number4:
    print(items)
