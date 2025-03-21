#
# n = (input("Enter THe Number: "))
n = int(input("Enter THe Number: "))
# n = 2

for i in range(1,11):
    # print('''{n} X {i} = ''',(n*i))
    # print(f"{n} X {i} = ",(n*i))
    print(f"{n} X {i} = {n*i} ")
'''
# When n is string 
5 X 1 =  5
5 X 2 =  55
5 X 3 =  555
5 X 4 =  5555
5 X 5 =  55555
5 X 6 =  555555
5 X 7 =  5555555
5 X 8 =  55555555
5 X 9 =  555555555
5 X 10 =  5555555555
'''


# 

l = ["Kan", "Kanpri", "Kanha","Pri"]

for name in l:
    if(name.lower().startswith("k")):
        print(f"hellu {name}")
        

# 
n = 2
i = 0
while(i<11):
    print(f"{n} X {i} = {n*i}")
    i += 1

    
# 
n = int(input("Enter Prime NUMber: "))

for i in range(2,n): 
    if(n%i == 0):
        print(f"{n} is not a Prime")
    else:
        print(f"{n} is a Prime")


# 
n = int(input("Enter Sum Number: "))

i = 0
sum = 0
while(i<=n):
    sum += i
    # i++
    i+=1
print("Sum is ",sum)


# 
n = int(input("Enter The Factorial Number: "))

mul = 1
# for i in range (n,1):
for i in range (1,n+1):
    # n *= i
    mul *= i 
# print("Factorial is : ",mul)
print(f"Factorial of {n} is {mul}")


# 
n = 5

for i in range(1,n+1):
    for j in range (1,2*i):
        # print(" ",end= "")
        print("* ",end="")
        
    print("\n",end="")

print('\n')

for i in range(1,n+1):
        print(" " * (n-i), end = "")
        print("*" * (2*i-1), end="")
        print("")


# 
n= 6
for i in range(1,n+1):
    print(" "*(n-i), end = "")
    print("*" * i, end="")
    print("")


# 
n= 7
for i in range(n):
    print("*" , end="")  # 1st Line
print() # Move to the next line after the top border
for i in range(1,n):
    print("*" + " " * (n-2) + "*")  # Lines
for i in range(1,n+1):
# for i in range(n):
    print("*", end="")  #Last Line
print()  # Move to the next line after the bottom border

# OR
n=7
for i in range(1,n+1):
    if(i == 1 or i == n):
        print("*"*n, end="")  # Top and bottom border
    else:
        print("*",end="")
        print(" "*(n-2),end="")
        print("*",end="")
    print("")

# 
n = 5
for i in range(1,11):
    print(f"{11-i} X {n} = {(11-i)*n}")