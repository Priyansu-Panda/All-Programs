# Class Methods = Allows opearations related to class itself 
#                 Take (cls) as the first parameter, {instead of self} which represents the class itself.

# Instance methods = Best for operations on instances of the class (objects)
# Static methods = Best for utility functions that do not need access to class data
# Class methods = Best for class-level data or require access to class itself  

class Student:
    
    count = 0
    total_gpa = 0

# Constructor of Student  
    def __init__(self,name,gpa):
        self.name = name 
        self.gpa = gpa 
        
        Student.count += 1      # Jitni bari call hoga utni bari increament hoga  
        Student.total_gpa += 1

    # INSTACE METHOD 
    def get_info(self):
        return f"{self.name} {self.gpa}"

    @classmethod
    def get_count(cls):
        return f"Total # of students: {cls.count}"

    @classmethod
    def get_average_gpa(cls):
        if cls.count == 0:
            return 0
        else:
            return f"Avg GPA : {cls.total_gpa / cls.count:.2f}"

        

student1 = Student("Spongebob", 3.2)
student2 = Student("Patraick", 2.0)
student3 = Student("Sandy", 4.0)

print(Student.get_count())
# print(Student.get_average_gpa)      # <bound method Student.get_average_gpa of <class '__main__.Student'>>
print(Student.get_average_gpa())

