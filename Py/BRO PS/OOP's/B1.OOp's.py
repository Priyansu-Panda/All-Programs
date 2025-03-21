# Object = A "Bundle of related attributes (variables) and methods(functions)"
#           Ex. phone, cup, book
#            You need a class to create many objects 
#  Here Car is the class 
# car1 and car2 are abjects 
# model, year , color are the attributes    or specifications of the objects

# SELF -> refers to the object we are currently Working with










class Car:
    def __init__(self, model, year,color,for_sale):     # CONSTRUCTOR
        self.model = model
        self.year = year
        self.color = color 
        self.for_sale = for_sale
        
    def drive(self):
        print(f"U ddrive the {self.model}")
    def stop(self):
        print(f"U crashed teh car")

    def describe(self):
        print(f"{self} {self.color} {self.model} {self.year}")
    # <__main__.Car object at 0x00000276A9CE7620> red Mustang 2024 

car1 = Car("Mustang", 2024, "red", False)
car2 = Car("Bentley", 2026, "Black", True)

# car3 = Car()      # object = Class_Name()  to invoke the constructor 
# print(car3)

print(f"Memory Address of car1 : {car1}")  # MEMORY ADDRESS -> <__main__.Car object at 0x0000028521746E10>

print(car1.year)

car2.stop()
car2.drive()
car1.describe()
car2.describe()
