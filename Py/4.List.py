'''LIST ARE MUTABLE --- Jo bhi fuctions or methods apply karoge it will the change the original List itself'''


# ONLY INDEX AND COUNT ARE THERE IN TUPLE

# print(fruits.index("Apple"))
# print(fruits.count("kela"))

fruits = ["apple","ornage","bannana","Pomegranate"]

# print(fruits[0])

print(fruits[::-1])   #reversed order  # prints 4 3 2 1
print(fruits[::2])   # prints 0 2 4

for fruit in fruits:   
    print(fruit)  # prints each fruit on a new line

# print(dir(fruits))
# print(help(fruits))

print(len(fruits))

print("apple" in fruits)    # true / false

fruits[1] ="Kela"

fruits.append("tomato")
fruits.remove("kela")
fruits.insert(0,"pine")
fruits.sort()
fruits.reverse()

print(fruits)  # prints the list of fruits
fruits.clear()
print(fruits.index("kela"))

print(fruits.count("pine"))     #dyplicates







Kan= ["Kanpri", "KAnha",True, 3,True, False]
print(Kan)
print(Kan[0])
Kan[0] = "kan"  # Unlike Strings 
print(Kan[0])
# print(Kan.sort())
print(len(Kan))   # 4

# print(Kan.insert(3,True))     # None
Kan.insert(3,True)
print(Kan)


# Kan.remove(3)
Kan.remove(True)
Kan.remove(True)
print(Kan)
