class animal:
    def speak(self):
        print("speaking")
class dog:
    def bark(self):
        print("barking")
class dogpet(animal,dog):
    def eat(self):
        print("eating")
d=dogpet()
d.bark()
d.eat()
