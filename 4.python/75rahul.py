import time
from functools import lru_cache

@lru_cache(maxsize=3)
def myfun(n):
    time.sleep(n)
    print("i am in loop")
    return n

if __name__=="__main__":
    print("yesssss")
    myfun(3)
    myfun(5)
    myfun(2)
    myfun(4)
    print("nooooo")
    myfun(3)
    print("hmmmm")

