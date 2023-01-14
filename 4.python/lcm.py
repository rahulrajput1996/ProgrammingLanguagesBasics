a=[2,4,6,8]
maxterm=max(a)

i=maxterm
while(True):    
    count=0
    for element in a:
        if(i%element==0):
            count=count+1
            
    if(count==len(a)):
        print(f"lcm is {i}")
        break
    else:
        i=i+1
        continue
