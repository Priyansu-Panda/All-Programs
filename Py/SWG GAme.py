import random

'''
1 - Snake
-1 - Water
0 - Gun
'''

youDict = {"s": 1, "w": -1, "g": 0}
revDict = {1: "Snake", -1: "Water", 0: "Gun"}


while(True):
    print("s - Snake")
    print("w - Water")
    print("g - Gun")
    print("4 - EXIT")

    youStr = input("Enter the Choice: ")

    if(youStr == "4"):
    # if(youStr == 4):      // WRONG 
        print("EXITING")
        break
    
    if youStr not in youDict:
        print("Invalid input. Please enter 's', 'w', 'g', or '4'.")
        continue

    you = youDict[youStr]
    
    comp = random.choice([1,-1,0])



    print(f"Your CHoice: {revDict[you]} \n Computer CHoice: {revDict[comp]} \n ")

    if (comp == you):
        print("Its is a Draw")
    else:
        if ((you == 1 and comp == -1) or(you == -1 and comp == 0) or (you == 0 and comp == 1) ):
            print("YOU Win")
        elif ((you == 1 and comp == 0) or(you == -1 and comp == 1) or (you == 0 and comp == -1) ):
            print("YOU Loose")
        else:
            print("Invalid Input")

        