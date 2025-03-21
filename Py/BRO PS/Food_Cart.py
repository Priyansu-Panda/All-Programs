foods = []
prices = []
total = 0

while True:
    food = input("Enter the Food To Buy (q==\"Quit\"): ")
    if food.lower() == "q":
        break
    else:
        foods.append(food)
        price = float(input(f"Enter the price of {food}: $"))
        # price = input(f"Enter the price of {food}: ")
        prices.append(price)

print("----CART----")

# for x in foods:
    # print(x)
for food in foods:
    print(food, end = " ")
print()
for rupay in prices:
    print(rupay , end= " ") 
    total += rupay 
print(f"\nUr total : ${total}")
