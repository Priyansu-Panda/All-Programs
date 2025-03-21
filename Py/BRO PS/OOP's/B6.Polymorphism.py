# Polymorphism = Greek word that means to "have many forms or faces" 
#                Poly = Many
#                Morphe = Form

#       Via INheritance = An object woulc be trarted as the same type as th eparent class 

import math

# from  abc import ABC, abstractmethod

# class Shape(ABC):
#     @abstractmethod
#     def area(self):
#         pass

class Shape:
    pass

class Circle(Shape):
    def __init__(self,radius):
        self.radius = radius
    def area(self):
        return math.pi * self.radius ** 2
    

class Square(Shape):
    # pass
    def __init__(self,side):
        self.side = side
    
    def area(self):
        return self.side * self.side

class Triangle(Shape):
    # pass
    def __init__(self,base,height):
        self.base = base
        self.height = height 
    
    def area(self):
        return self.base * self.height * 0.5

# class Pizza():
#     def __init__(self,topping, radius):
#         self.topping = topping
#         self.radius = radius
#     # While after writing if we ru ---> AttributeError: 'Pizza' object has no attribute 'area'

    

class Pizza(Circle):
    def __init__(self,topping, radius):
        self.topping = topping
        super().__init__(radius)    # ye naa bhi likho bas Circle ko inherist karlo same kaam karega 
    # While after writing if we ru ---> AttributeError: 'Pizza' object has no attribute 'area'

    

# circle = Circle()

# square = Square()

# triangle = Triangle()

# shapes = [Circle(5), Square(2), Triangle(3,5)]   # shapes is the collections of objects 
shapes = [Circle(5), Square(2), Triangle(3,5), Pizza("Pepperoni", 15)]   # shapes is the collections of objects 

for shape in shapes:
    # print(shape.area())
    print(f"{shape.area():.2f} cm²")

