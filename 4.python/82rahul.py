import json

#.load
with open("myjsonfile.json","r") as myfile:
    mycontent=json.load(myfile)

print(type(mycontent))
print(mycontent)

#.loads
x='{"userId": 1, "id": 1}'
y=json.loads(x)
print(type(x))
print(type(y))
print(y)
print(y["id"])

#.dumps
x={
    "name":"rahul",
    "age":34,
    "channel":["cwh","pubg"],
    "langauge":("c++","java"),
    "male":True,
    "female":False,
    "handicapped":None
}
y=json.dumps(x,indent=3,sort_keys=True)
print(type(x))
print(type(y))
print(y)

