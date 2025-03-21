import random


def spin_row():
    # pass
    symbols = ['🍓', '🍋', '🍉', '🔔', '🌟']

    result = []

    # for i in range(3):
    #     result.append(random.choice(symbols))
    
    # return result
    
    # return [result.append(random.choice(symbols)) for _ in range(3)]
    return [random.choice(symbols) for _ in range(3)]

def print_row(row):
    # pass
    
    print(row)
# # OR
#     print(" | ".join(row))
# # OR
#     for i in range(3):
#         # print(row[i])
#         print(row[i], end = " | ")
#     print()

    

def get_payout(row, bet):
    # pass 
    if row[0] == row[1] == row[2]:
        if row[0] == '🍓':
            return bet * 10
        elif row[0] == '🍋':
            return bet*20
        elif row[0] == '🍉':
            return bet * 50
        elif row[0] == '🔔':
            print("DING DING DING !!!")
            return bet * 100
        elif row[0] == '🌟':
            print("!!! HABIBI JACKPOT !!!")
            return bet * 200
    print("CHiiiiii......")
    return 0        
    

def main():
    balance = 100 

    print("**********************************")
    print("  WELCOME to PYTHON SLOTS\t")
    print("SYAMBOLS: 🍓 🍋 🍉 🔔 🌟")
    print("*********************************")


    while(balance > 0):
        print(f"UR Current Balnce : ${balance}")
        # bet = float(input("Enter ur BET: "))

        bet = input("ENter the BET: ")

        if not bet.isdigit():
            print("BHAI kuch Dhang ka type karle !!")
            continue
        
        # agar malum chala.. he entered a valid no. then
        bet = int(bet)
        
        if bet<0:
            print("Casino tere baap ka hai kya ???")
            continue
        

        balance -= bet         

        # row apne aap mein sab rakhega
        row = spin_row()    
        print("Spinning ... \n")

        # print(row)

        print_row(row)
        
        payout = get_payout(row,bet)

        if payout>0:
            print(f"Wala habibi u WON ${payout}")
        else:
            print("AAA thuu chii kuch nahi mila bheek manga")
        print()
        balance += payout



        # print(f"No u are left with : {balance}")
    print("Khatam taata bye bye ")
    print(f"NOw ur balnce is ${balance}")

if __name__ == "__main__":
    main()

    


















































# import random


# def spin_row():
#     # pass
#     symbols = ['🍓', '🍋', '🍉', '🔔', '🌟']
#     results = []    # for storing the values    
    
#     # for sybol in range(3):
#     #     results.append(random.choice(symbols))
#     # return results
    
# # OR via LIST COMPREHENSION

#     # return[random.choice(symbols) for i in range(3)]
#     return[random.choice(symbols) for _ in range(3)]       # _ -> for every iteration in the range x to y

# def print_row(symbol):
#     # pass
#     print(" | ".join(symbol))
# # OR
#     # for i in range(3):
#     #     print(symbol[i], end = " ")
#     # print()


# def get_payout(row, bet):
#     # pass

#     if row[0] == row[1] == row[2]:
#         if row[0] == '🍓':
#             return bet * 10
#         elif row[0] == '🍋':
#             return bet*20
#         elif row[0] == '🍉':
#             return bet * 50
#         elif row[0] == '🔔':
#             print("DING DING DING !!!")
#             return bet * 100
#         elif row[0] == '🌟':
#             print("!!! HABIBI JACKPOT !!!")
#             return bet * 200
#         # else:
#         #     return bet

#     print("HA hA Ha")
#     return 0


# def main():
#     balance = 100
    
#     print("**********************************")
#     print("  WELCOME to PYTHON SLOTS\t")
#     print("SYAMBOLS: 🍓 🍋 🍉 🔔 🌟")
#     print("*********************************")

#     while(balance > 0):
#         print(f"UR Current Balnce : ${balance}")
#         # bet = float(input("Enter ur BET: "))

#         bet = input("Enter ur BET: ")

#         if not bet.isdigit():
#             print("NOT VALID")
#             continue    # Will skip the current iteration of the loop and start from begining    
        
#         # after checking that its a no. then typecast it
#         bet = int(bet)
        
#         if (bet>balance):
#             print("Inssuficient balance")
#             continue    # Will skip the current iteration of the loop and start from begining

#         if(bet<=0):
#             print("BEt Must be greater than 0")
#             continue    # Will skip the current iteration of the loop and start from begining

#         balance -= bet
        
#         row = spin_row() # row will be treated as a list which would store all the values returned by the result above    
#         # print(row)
#         print("Spinning ...\n")
        
#         print_row(row)
        
#         payout = get_payout(row,bet)

#         if(payout > 0):
#             print(f"Wala HABIBI u won {payout}")
#         else:
#             print("UUU HAAA HAAAA chiiiii")

#         balance += payout
#     print(f"\n HABiBI BAHAUT KHEL LIYE YEH BACHO KA KHEL NAHI \n NOW u have = ${balance}\n \nMUMMY ISILIYE KEHETI thi JUA MEIN PAISE NAA UDAO ")
        
            
    
# if __name__ == "__main__":
#     main()