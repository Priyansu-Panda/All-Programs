# will return a boolean ... because it tests wherete a value or a variable is present or foudn in a sequence  

word = "Apple"
letter = input("GUess a letter in the secret word: ").capitalize()

if letter in word:
    print(f"THer eis a {letter}")
else:
    print(f"{letter} not found")

if letter not in word:
    print(f"{letter} not found")
else:
    print(f"THer eis a {letter}")



# List/set/tuple

students = {"Kan", "Pri", "kanpri","Priyansu"}

student = input("ENter the name of the student")

if student in students:
    print(f"{student} is a student")
else:
    print(f"{student} is not a student")


# Dictionary

grades = {"Kan":'A', 
          "Pri": "B",
          "kanpri":"c",
          "Priyansu":"E"}

student = input("ENter the name of the student:  ").capitalize()

if student in grades:
    print(f"{student}'s garde is {grades[student]}")
else:
    print(f"{student} not found")


# string

email = "kanpri03@gamil.com"

if "@" in email and '.' in email:
    print(f"{email} is Valid")
else:
    print(f"{email} is InValid")

