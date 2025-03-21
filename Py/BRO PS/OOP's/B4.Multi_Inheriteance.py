
class Animal: 
    # Jab tak kisi class ya obj ko initialise karne ki zarurat naa ho tab tak CONSTRUCTOR USE naaa karo
    def __init__ (self,name):
        self.name = name 
        
    def eat(self):
        print(f"{self.name} is eathing ")
    
    def sleep(self):     # Has to write self 
        print(f"{self.name} is sleeping")    

# a1 = Animal()
# a1.eat()      # Works!!!


class Prey(Animal):
    def flee(self):
        print(f"{self.name} is Fleeing")

class Predator(Animal):
    def hunt(self):
        print(f"{self.name} is Hunting ")

class Rabbit(Prey):
    pass

class Hawk(Predator):
    pass

class Fish(Predator,Prey):
    pass

rabbit = Rabbit("Bunny")
hawk = Hawk("Cheel")
fish = Fish("FIghter") 

rabbit.flee()   # Wroks
# rabbit.hunt()     # WONT WORK

fish.flee()     # Works     
fish.hunt()     # Works
fish.sleep()