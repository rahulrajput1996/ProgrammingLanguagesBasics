import requests

mydata=requests.get("https://jsonplaceholder.typicode.com/posts/1")
print(mydata.text)
print(mydata.status_code)

myurl="https://jsonplaceholder.typicode.com/posts"
mydata2={
    'name':"rahul kumar singh",
    "salary":1000
}
print(type(mydata2))
myans=requests.post(url=myurl,data=mydata2)
print(myans.text)
print(myans.status_code)