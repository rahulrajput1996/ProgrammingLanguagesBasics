import requests
import pickle
mydata=requests.get("https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data")
with open("myfilecontent.txt","w+") as myfile:
    myfile.write(mydata.text)

with open("myfilecontent.txt","r+") as myfile:
    mytext=myfile.read()

mylist=[]
mylist1=mytext.split("\n")
for element in mylist1:
    mylist2=[]
    mylist2.append(element)
    mylist.append(mylist2)

with open ("mypklfile.pkl","wb") as myfile:
    pickle.dump(mylist,myfile)

with open ("mypklfile.pkl","rb") as myfile:
    mycontent=pickle.load(myfile)
    print(mycontent)



