import time

initial=time.time()
print(initial)
for i in range(5):
    # time.sleep(2)
    print("for loop")



initial=time.time()
print(initial)
i=0
while(i<5):
    print("while loop")
    i=i+1
print(time.time()-initial)

A=time.asctime(time.localtime(time.time()))
print(A)
B=time.localtime(time.time())
print(B)
print(time.localtime(10))