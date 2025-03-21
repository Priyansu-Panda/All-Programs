class Student:
    
    # CLAss Variables -- all the objects will share this common variable data 
    #                    It is shared by all  the instances of a class 
    #                    it is defined outside a constructor 
    class_year = 2024   
    num_Students = 0
    def __init__(self,name,age):
        # Instance variables --> Each diff Obj will have a different Instance variable
        self.age = age  
        self.name = name 
        # self.num_Students +=1
        Student.num_Students +=1    # Every time an object will be created this contructor will be called as a result it will then icreament the num_studnet by 1 


# student1 = Student()  # Works until the cconstructor is being called 
student1 = Student("Kanha",69)    
student2 = Student("Kanpri",96)    
print(Student.num_Students)     # 2
# print(student1.num_Students)      #2
student3 = Student("Pri", 88)
print(Student.num_Students)     # 3

print(f"My Graduting Class of {Student} of {Student.class_year} has {Student.num_Students} Studnets")

# My Graduting Class of <class '__main__.Student'> of 2024 has 3 Studnets


# print(student1.class_year)
# print(student2.class_year)
# print(Student.class_year)   # ADVISED