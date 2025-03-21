# Ek cheez KO baar baar na likhna pade 

# It Allows a Class to inherit attributes  and methods from another class 
# HElps in code reusability and readabiliry

# class Child(Parent)
#       OR
# class Sub(Super)

#  Its a lot Easiaer to write the code ONce and reuse it 
# Evenif the CHildren CLass is Empty STill it will work As it takes all its data from the parent calss ANimal 


class Animal:
    def __init__(self,name):
        self.name = name
        # is_Dead = True
        self.is_Alive = True
    def eat(self):
        print(f"{self.name} is eating")
    def sleep(self):
        print(f"{self.name} is sleeping")

class Dog(Animal):      # Inherited all the traites from the Animal CLass
    # pass
    def speak(self):
        print("Woof!!")

class Mouse(Animal):
    # pass
    # def speak():      #WRONG -- NEED TO GIVE ARGUMENT 
    def speak(self):
        print("Meow !!")

class Cat(Animal):
    pass

d1 = Dog("Bo bo")

print(f"di name is {d1.name}")
# print(f"di is {d1.is_Dead}")   # Wont Work

d1.eat()

d1.speak()

m1 = Mouse("Musa")
m1.speak()
