# Strings Are IMMUTABLE --- Doesnt affect the original String

name = input("Enter UR full name: ")


result = len(name)
result = name.find('K')     # 0
result = name.find('K', 5)  # 6
result = name.rfind("K")
name = name.upper()
name = name.capitalize()    #  Capitalize the first letter of the string
name = name.title()          # Capitalize the first letter of each word
name = name.lower()
result = name.isdigit()     

ph = input("Enter UR full no. : ")
result = ph.count("-")

ph = ph.replace("-", " ")
ph = ph.replace("-", "")




print(ph)

print(name)

print(result)



name = """KAnpri"""
print(name)
print("LEngth: ",len(name)) # 6
print("part: ",name[1:3])   # INclude:Exclude An
print("part: ",name[3])     # Exact Value p
print("part: ",name[-2])    # Exact Value p
print("part: ",name[-1])    
print("part: ",name[-len(name)])    # K
print("part: ",name[-(len(name)-1)]) # A
# print("part: ",name[len(name)])    # string index out of range

print(name[-4:-1])
print(name[1:4])
print(name[-1:-4])

print(name[1:6:2])

print(name.endswith('pri'))
print(name.startswith('kAn'))   #false

a = " Kanpri Loves \"Evryoen\""
a = " Kanpri \n\tLoves \'Evryoen\""
a = " Kanpri \\Loves \'Evryoen\""
print(a)
