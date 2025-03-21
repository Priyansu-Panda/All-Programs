import random

lowest = 1 
highest = 100

answer = random.randint(lowest, highest)

print(answer)
# input.pinmode(start)

guesses = 0
is_running = True

print("Python Guessing NUmber Game")
print(f"Select a number between {lowest} and {highest}")

while is_running:
    guess = input("ENter the Number")
    
    if guess.isdigit():
        # pass
        # NOw since we know that its a digit so type cast it to a number 
        guess = int(guess)
        guesses += 1

        if guess < lowest or guess > highest:
            print(f" PLease Select a number between {lowest} and {highest}")
        elif guess > answer:
            print("Guess TOO HIGH")
        elif guess < answer:
            print("GUess Too LOW")
        else:
            print("ABSOLUTELY COORECT!!")
            print (f"UR GUESS -> {guess} && COMP GUESS -> {answer}")
            print(f"U guessed in {guesses} no. of attempts")

            # TO Esscape the while Loop
            is_running = False
        
    else:
        print("INvalid guess")
        print(f"Select a number between {lowest} and {highest}")



# li = []
# ty = ()

# print(type(li))
# print(type(ty))

# ty = list(li)
# print(type(ty))

