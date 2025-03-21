from Hangman_wordsList import words
import random

# words = ("apple", "banana", "orange","watermelon")

# Dictionary of  key : ()   # for incorect guesses
hangman_art = { 0: ("  ",
                    "  ",
                    "  "),
                1: (" O ",
                    "   ",
                    "   "),
                2: (" O ",
                    " | ",
                    "   "),
                3: (" O ",
                    "/| ",
                    "   "),
                4: (" O ",
                    "/|\\",
                    "   "),
                5: (" O ",
                    "/|\\",
                    "/  "),
                6: (" O ",
                    "/|\\",
                    "/ \\"),
                }

def display_man(wrong):
    # pass
    print("***********************")
    for line in hangman_art[wrong]:
        print(line)
    print("***********************")

def display_hint(hint):
    # pass
    # print(hint)
    print(" ".join(hint))

def display_answer(answer):
    # pass
    print(" ".join(answer))

def main():
    answer = random.choice(words)        
    hint = ['_'] * len(answer)
    # print(hint)
    wrong_guesses = 0   # will show the no. of wrong  guesses we made 
    guessed_letters = set()     # store it in an empty set

    is_running = True

    while is_running:
        print(f"Attempt No. : {wrong_guesses}")
        display_man(wrong_guesses)

        display_hint(hint)

        # display_answer(answer)
        
        guess = input("Enter a letter based on the hint given: ").lower()

        if len(guess) != 1 or not guess.isalpha():
            print("Bhai ek letter hi toh type karna hai !!! ")
            continue        # will skip this iteration and begin 
            
        if guess in guessed_letters:
            print(f"{guess} already made")
            continue
        guessed_letters.add(guess)


        if guess in answer:
            for i in range(len(answer)):
                if guess == answer[i]:
                    hint[i] = guess
        else:
            wrong_guesses += 1

        if '_' not in hint:
            display_man(wrong_guesses)
            display_answer(answer)
            print("WALAA HABIBI you won !!!")
            is_running = False
        elif wrong_guesses >= len(hangman_art) - 1:
            display_man(wrong_guesses)
            display_answer(answer)
            print("CHiiiiiii")
            is_running= False



if __name__ == "__main__":
    main()


























































# for line in hangman_art[6]:
#     print(line)

# print(hangman_art)   # {0: ('  ', '  ', '  '), 1: (' O ', '   ', '   '), 2: (' O ', ' | ', '   '), 3: (' O ', '/| ', '   '), 4: (' O ', '/|\\', '   '), 5: (' O ', '/|\\', '/  '), 6: (' O ', '/|\\', '/ \\')}
# print(hangman_art[6])   # (' O ', '/|\\', '/ \\')

# for line in hangman_art:    
#     print(line)       # 0-6

# for line in hangman_art.values():    
#     for l in line :
#         print(l)       
    # print()
#  O


#  O
#  |

#  O
# /|

#  O
# /|\

#  O
# /|\
# /
#  O
# /|\
# / \

# for line in hangman_art.values():    
#     print(line)   
# ('  ', '  ', '  ')
# (' O ', '   ', '   ')
# (' O ', ' | ', '   ')
# (' O ', '/| ', '   ')
# (' O ', '/|\\', '   ')
# (' O ', '/|\\', '/  ')
# (' O ', '/|\\', '/ \\')
