# Concession Stand Program

menu = {
    "chips" : 10,
    "soda" : 21,
    "popcorn": 69,
    "chixken" :96
}

cart = []

print("-----------Ur Menu------------")
# for food in menu:
#     print(food)
'''Chips
Soda
Popcorn
Chixken'''

for food, price in menu.items():
    print(f"{food:10}:{price:.2f}")
'''Chips     :10.00
Soda      :21.00
Popcorn   :69.00
Chixken   :96.00'''

print("----------------------------")


# item = input("Enter the Item u want (q == quit): ").lower()
# while(item is not 'q'):

while True:
    item = input("Enter the Item u want (q == quit): ").lower()
    if(item == 'q' ):
        print("Thansk")
        break
    elif(menu.get(item) is not None):   # Agar nahi hoga then will be false / NONE
        cart.append(item)
        print(f"{item} ADDED")
    else:
        print("Plzz Enter Correct Item")

total = 0
i = 1
print("\n------UR ORDER-----")
for item in cart:
# for item, price in cart.items():  #cart is an array not an object
    # print(f"{item} : {price}")
    total += menu.get(item)
    print(f"{i}. {item}")
    i += 1
print("----------------")

print(f"Ur Total AMMOUNT IS : ${total:.2f}")

print("AB DOBARA MAT ANA BHEEKMANGA")
#   Ur Total AMMOUNT IS : 52


# print("Ur Total AMMOUNT IS : ", total)
#   Ur Total AMMOUNT IS :  52
    
