import pickle
mylist=["rahul","ganesh","harish","rohit","ravikant"]
mybytedata=pickle.dumps(mylist)
print(mybytedata)

with open("mypicklefile.pkl","wb") as myfile:
    pickle.dump(mylist,myfile)

with open("mypicklefile.pkl","rb") as myfile:
    mycontent=pickle.load(myfile)
    print(mycontent)

myobj=pickle.loads(mybytedata)
print(myobj)