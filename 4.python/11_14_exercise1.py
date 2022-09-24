print("enter a word")
word=input()
meaning={
    "mutable":"can be changed",
    "immutable":"can not be changed",
     "late":"der s",
     "good night":"soja bhai",
     "good morning":"uthja bhai",
}
ans=meaning[word]
print(ans)
ans2=meaning.get(word)
print(ans2)