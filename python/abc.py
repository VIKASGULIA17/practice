class Dog:
    def __init__(self, breed, age):
        self.breed = breed
        self.age = age

    def bark(self):
        print(f"{self.breed} dog says woof!")

# Creating two dog instances
pug_dog = Dog(breed="Pug", age=7)
labrador_dog = Dog(breed="Labrador", age=5)

# Accessing attributes and calling methods
print(pug_dog.breed,pug_dog.age)  # Output: "Pug"
pug_dog.bark()        # Output: "Pug dog says woof!"
