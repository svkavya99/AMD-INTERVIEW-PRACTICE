class animal:
    def speak(self):
        print("animal speak")
class dog(animal):
    def bark(self):
        print("dog barks")

d=dog()
d.bark()
d.speak()
