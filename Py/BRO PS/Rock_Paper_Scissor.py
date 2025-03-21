print("Rock Papper Scissor")

import random


options = ("rock","paper", "scissor")
player = None
computer = random.choice(options)

running = True

# if u ware using while True then if the while loop contains long code then it woul be difficult to find the break statement
while running:      # For REpeted playing
    # player = input(f"Enter THe Choice(R S P) {options[1]}, {options[2]}, {options[3]}")

    if player not in options:
        player = input(f"Enter THe Choice(R S P): ")

    print(f"COmputer -> {computer}")
    print(f"Player -> {player}")

    if player == computer:
        print("ITS a TIE")
    elif player == "rock" and computer == "scissor":
        print("U WIN")
    elif player == "scissor" and computer == "paper":
        print("U WIN")
    elif player == "paper" and computer == "rock":
        print("U WIN")
    else:
        print("U LOSE")

    play_again = input("Wanna Play Again (y/n)? ").lower()
    
    if not play_again == 'y':
        running = False


print("BHaad Mein jaoo")
        
    















