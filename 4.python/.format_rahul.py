myusers=[1,2,3,4]
mylaptop=['a','b','c','d']

for i in range(0,len(mylaptop)):
    # template="laptop used by {1} {0}".format(myusers[i],mylaptop[i])
    template="laptop used by {1} {0}"
    print(template.format(myusers[i],mylaptop[i]))