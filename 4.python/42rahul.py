def fun(normal,*args,**kwargs):
    print(normal)
    print(args)
    print(kwargs)
    print(type(args))
    print(type(kwargs))
    for item in args:
        print(item)
    
    for key,value in kwargs.items():
        print(key,value)

a="i am a boy"
b=["harry","marry","larry"]
c={ "phyname" : "shyam","salary":30,"channel":"cwh"}

fun(a,*b,**c)

