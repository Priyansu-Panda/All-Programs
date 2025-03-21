import random
# num = random.rands(1,6)
# print(num)
# print(help(random))

# num = random.randint(1,6)
low = 2
high = 6
# num = random.randint(low,high)
num = random.random()   # generates a random number between 0-1
print(num)

options = ("rock", "scissor", "paper")
rsp = random.choice(options)
print(rsp)

cards = ["2","3","4","5","6","7","8","9","10","J","Q","K","A"]
print(cards)
random.shuffle(cards)
print(cards)




