class animal:
    def speak(self):
        print("speaking")
class dog(animal):
    def bark(self):
        print("barking")
class dogpet(dog):
    def eat(self):
        print("eating")
d=dogpet()
d.eat()
d.bark()
