# module - A module is a file containing code that u want to include in ur program... use the word import to include ... its useful for to break up a large program into a separable file 



# print (help("modules"))
# print (help("math"))

import math
# print(math.pi)

# from math import pi
# print(pi)

import math as m

from math import e

a,b,c,d,e = 1,2,3,4,5

# e as 5
print(e**a)
print(e**b)
print(e**c)
print(e**d)
print(e**e)

print()

# e as expo
print(math.e**a)
print(math.e**b)
print(math.e**c)
print(math.e**d)
print(math.e**e)

print(m.pi)

# -------------------------------------------

# print(mod)      # <module 'B18_Ur_Module' from 'c:\\Users\\DELL\\Desktop\\Programs\\Py\\B18_Ur_Module.py'>

# print(help(mod))
'''
Help on module B18_Ur_Module:

NAME
    B18_Ur_Module

FUNCTIONS
    area(rad)

    circum(rad)

    cube(x)

    square(x)

DATA
    pi = 3.14159

FILE
    c:\users\dell\desktop\programs\py\b18_ur_module.py       
'''
# ----------------------------------------

import B18_Ur_Module as mod

# print(B18_Ur_Module)
result = mod.pi
result = mod.square(9)
result = mod.circum(9)
print(result)