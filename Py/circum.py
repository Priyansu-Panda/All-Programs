import math

rad = int (input("Enter radiius: "))

area = math.pi * (rad ** 2)
# area = math.pi * pow(rad, 2)

cirum = 2*(math.pi) *rad

print(area)
print(f"The circumference is : {round(cirum, 2)}")
print(f"The area is : {int(area)}")


# HYPOTENUSE
a = int (input("Enter a: "))
b = int (input("Enter b: "))
c = math.sqrt(pow(a,2) + pow(b,2))

print(f"The Hypo is : {round(c, 2)}")

