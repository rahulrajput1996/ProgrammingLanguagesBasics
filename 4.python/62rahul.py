class Dad:
    basketball=1
    dance=2

class son(Dad):
    basketball=3
    dance=4
    def isdance(self):
        return f"yes {self.dance} number of times"
    
class grandson(son):
    dance=5
    basketball=6
    # def isdance(self):
    #     return f"no {self.dance} number of times"

harry=Dad()
larry=son()
jerry=grandson()

print(jerry.isdance())
print(jerry.dance)
print(jerry.basketball)






