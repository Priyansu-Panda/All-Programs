
p = 0
t = 0
r = 0

while p<=0:
    p = float(input("Enter the Principal"))
    if p <= 0:
        print("Please enter a positive number")
        
    # Ab wapas jayega 

while r<=0:
    r = float(input("Enter the RATE"))
    if r <= 0:
        print("Please enter a positive number")
        
    # Ab wapas jayega 

while t<=0:
    t = int(input("Enter the time"))
    if t <= 0:
        print("Please enter a positive number")

    # Ab wapas jayega 

total = p*pow((1 + r/100),t)
print(f"Ur Total value after {t} year/s is {total:,.2f}")