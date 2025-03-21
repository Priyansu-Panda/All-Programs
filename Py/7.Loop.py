for x in range(1,11):
    print(x)

for x in reversed(range(1,11)):
    print(x)

for x in range(1,11,2):
    print(x)

cred = "123-455-6789"
# cred = 123-455-6789   # wont work for this 

for x in cred:
    print(x)
    
    
    
rows = int(input("Enter ROws "))
cols = int(input("Enter Cols"))
symbols = input("Enter the symbol to use")

for x in range(rows):
    for y in range(cols):
        print(symbols, end="")



li = ["1", 1, "Kan",False]

i = 0
while(i<len(li)):
    print(li[i])
    i += 1
    
for i in li:
    # print(li[i])
    print(i)
    
t = (5,7,6,7,9,0)

for i in t:
    print(i)

s= "KAnpri"
for i in s:
    print(i)
    
for i in range(0,101,4):
# for i in range(100):
# for i in range(0,100):
    print(i)
else:
    print("Don")

print("BREAK")
for i in range(0,101,4):
    if(i == 35):
        break   # Exit loop
    if(i == 36):
        continue    # Skip this iteration
    print(i)


for i in range(0,101,4):
    pass    # Acts as Null


j = 1
while(j<6):
    print(j)