class AMD:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def work(self):
        print("working")
    def leave(self):
        print("on leave")
k=AMD("kavya",22)
print(k.name,k.age)
k.work()
k.leave()
