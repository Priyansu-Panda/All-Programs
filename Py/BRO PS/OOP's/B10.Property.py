# @property = Decoratoe used to define a method as a property (it can be accessed like an attribute )
#            Benefit : adds additiional logic when read, write or deleting attributes 
#            Gives You getter, setter and deleter method

class Rectangle:
    def __init__(self, width, height):
        # self.width = width 
# Private -->{COnsider them RAW} only meant to be accessed inside this cllass only not outside of it 
        self._width = width 
        self._height = height

    @property
#  like here if we want to change the  output and want to print it with additional 2 decimal places 
    def width(self):
        return f"{self._width:.1f}cm"

    @property
#  like here if we want to change the  output and want to print it with additional 2 decimal places 
    def height(self):
        return f"{self._height:.1f}cm"

    
    @width.setter
    def width(self, new_width):
        if new_width > 0:
            self._width = new_width
        else:
            print("Width must be greater than 0")
    
#  U have to create a GETTER method {@property} in order to use the SETTER method 
#  otherwise --> NameError: name 'height' is not defined 
    @height.setter      
    def height(self, new_height):
        if new_height > 0:
            self._height = new_height
        else:
            print("Width must be greater than 0")

# HEIGHT.SETTER    .... WONT WORK 
# ----> Getter must be defined before setter

#     @property
# #  like here if we want to change the  output and want to print it with additional 2 decimal places 
#     def height(self):
#         return f"{self._height:.1f}cm"

    @width.deleter
    def width(self):
        del self._width
        print("Width has been deleted")

    @height.deleter
    def height(self):

    # WRONG
        # del self.height       

        del self._height  
        print("Height has been deleted")

rectangle = Rectangle(3,4)

# will be printing using the getter and sette methods  
print(rectangle.width)       # 3.0cm
print(rectangle.height)     # 4.0cm

# will work ... but will show a warning  
print(rectangle._width)     # 3

rectangle.width = 100
print(rectangle.width)      # 100.0cm
rectangle.height = 10
print(rectangle.height)     # 10.0cm

# After deleting it wll auto matically give the confirmation 
del rectangle.width
del rectangle.height

# print(rectangle.height) 
# print(rectangle.width) 
