fruits = ["Apple", "bannana", "Kela"]
vege = ["Aloo", "Tmatar","Baingan","Bhujia"]
meat = ["FIsh","CHicken"]

groceries = [fruits,vege,meat]

fruits[1] = "Emu"
for x in fruits:
    print(x)

for collec in groceries:
    print(collec)

print(groceries[1])
print(groceries[1][2])

for collec in groceries:
    for food in collec:
        print(food, end = " ")
    print()