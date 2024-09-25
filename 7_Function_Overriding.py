# Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

class Animal:
    def speak(self):
        return "Animal Sound"
    def food(self):
        return "Animal Food"

class Dog(Animal):
    def speak(self):
        return "Woof!"
    def food(self):
        return "Eat Meat"
class Cat(Animal):
    def speak(self):
        return "Meow!"
    def food(self):
        return "Drink Milk"
def animals(animal):
    print(animal.speak())
    print(animal.food())
dog = Dog()
cat = Cat()
animals(dog)
animals(cat)