# 6099ef7ffa5a48b6b29f7b42dc894bf1 API KEY
# habr8@hGcrBJqVZ APINEWS PASSWORD
import requests 
import json

def speak(str):
    from win32com.client import Dispatch
    speak=Dispatch("SAPI.SpVoice")
    speak.speak(str)

url ="https://newsapi.org/v2/top-headlines?language=en&country=in&apiKey=6099ef7ffa5a48b6b29f7b42dc894bf1"
response = requests.get(url).text

speak("Top ten news for today")
myjson=json.loads(response)
mycontents=myjson["articles"]
i=1
for element in mycontents:
    if i<=10:
        speak("Listen carefully............ news is")
        print(f"{i}.",element["title"],"\n")
        speak(element["title"])
        i=i+1

speak("news is completed. come back later")