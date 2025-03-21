# Static Methods = A method that belong to a class, rather than any object belonging to that Class (instance)
#                they are Usually used for general utility functions 

# Instance Methods = Best for operations ofn isntances of that class (obejcts)
#                    have self as the first parameter 
#                   (self) ->  object created of that class 
# Static methods = Best for utility functions that do not need access to class  data

class Employee:

# Instance Method

    def __init__(self,name,position):
        self.name = name 
        self.position = position

# get_info is an instance method ... wach object that we create of this class will have a get_info method 
    def get_info(self):
        return f"{self.name} = {self.position}"

    @staticmethod
    # I dont have to use the self ... as its not working for any object 
    def is_valid_position(position):
        valid_positions = ["Manager", "Cook", "Janito"]
        return position in valid_positions      # membership operator

# FOr static method I dont  have to specifically create a separate object 
#  ijust have to use the name of the class rather than creting an object for this class 
        # emp1 = Employee( )        # NO need in doing that 

        
# for static method --> className.staticMethod() 
print(Employee.is_valid_position("Cook"))       # True
print(Employee.is_valid_position("Scientist"))  # False
        

#  to call the instance method i have to use the object crate an object and acces using it  
# for instance method ---> objectName.instanceMethod()

employee1 = Employee("SquidWard", "Cashier")
print(employee1.get_info())     # SquidWard = Cashier
