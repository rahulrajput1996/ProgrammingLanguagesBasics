import math
me="rahul"
you="shyam"
him=5

# we="this is %s %s %u"%(me,you,him)

a="this is {2} {0} {1}"
we=a.format(me,you,him)
print(we)

we=f"this is {me} {him} {you} {math.pow(2,3)}"
print(we)