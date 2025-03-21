# super() -> It is a function used in a child class to  call methods from the parent or super class 
            # it allows us to extend the functionality  of inherited methods 

# ² alt + 0178 
class Shape:
    def __init__(self,color,is_filled):
        self.color = color
        self.is_filled = is_filled

    def describe(self):
        print(f"It is {self.color} and  {'filled' if self.is_filled else 'not filled'}")

# class Circle:
class Circle(Shape):
    # pass
    def __init__(self, color, is_filled, radius):       #Reason behind bring constructor here:- When Craeting a Circle .. what sort of attributes a circle must have
        # Shape.__init__(color,is_filled)       # super(). === Shape.       # means the same .. but wont work

        # self.color = color
        # self.is_filled = is_filled
    #               OR
        super.__init__(color,is_filled)     # Calling Constructor of the parent class

        self.radius = radius

    def describe(self):
        print(f"It is a Circle  and  {'filled' if self.is_filled else 'not filled'} with area {3.14 * self.radius **2}")
        # if i want to also inclue the describe function of Shape 
        super().describe()

class Triangle(Shape):
    # pass
    def __init__(self, color, is_filled, width, height):

        self.color = color
        self.is_filled = is_filled
    #       OR
        # super.__init__(color,is_filled)

        self.width = width
        self.height = height
class Square(Shape):
    # pass
    def __init__(self, color, is_filled, width):
        super().__init__(color,is_filled)       # Will be inheriting from its parent class
        self.width = width

# circle = Circle("red", True, 5)
#           OR
circle = Circle(color="red", is_filled = True, radius = 5)
square = Square(color="red", is_filled = True, width = 5)
traingle = Triangle(color="red", is_filled = False, width = 5, height = 6)

circle.describe()
square.describe()
traingle.describe()

print(circle.color)
print(circle.is_filled)
print(f"{circle.radius}cm")


# Now there is a lot of repetitions
# To solve this we use inheritance and super()
# class Circle:
#     # pass
#     def __init__(self, color, is_filled, radius):
#         self.color = color
#         self.is_filled = is_filled
#         self.radius = radius
# class Triangle:
#     # pass
#     def __init__(self, color, is_filled, width, height):
#         self.color = color
#         self.is_filled = is_filled
#         self.width = width
#         self.height = height
# class Square:
#     # pass
#     def __init__(self, color, is_filled, width):
#         self.color = color
#         self.is_filled = is_filled
#         self.width = width

