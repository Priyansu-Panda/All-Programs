

def show_balance(balance):
    # pass
    print(f"Tera Ballance hai : $ {balance:.2f}")

def deposit(balance):
    # pass
    amount = float(input("Enter the Amount "))
    
    if(amount < 0):
        print("Abey OYE Chutiye Bhikari ")
        return 0
    else:
        return amount

def withdraw(balance):
    # pass
    amount = float(input("Enter the Amount To Steal: "))

    if(amount > balance):
        print("Abey OYE Chutiye Bhikari ...\nBANK TERE BAAP KA HAI KYA ??? ")
        return 0
    elif(amount < 0):
        print("Abey OYE Chutiye -ve Bhikari ")    
        return 0         
    else:
        return amount   # yahan pe return use kiya hai to upar bhi karna padega
        
    


def main():
    balance = 0

    isRunning = True

    # lodu = "kan"

    # while(isRunning == True)

    while(isRunning):   # False hoga toh apne aap bahar aa jayega 
        print("\n")
        print("1. Show Balance")
        print("2. Make Deposit")
        print("3. Withdraw Money")
        print("4. Exit")

        # choice = input("Enter ur Choice (1-4): ", end = " ")     # WRONG --> TypeError: input() takes no keyword arguments
        choice = int(input("Enter ur Choice (1-4): "))
        print()

        if (choice == 1):
            show_balance(balance)

        elif(choice == 2):
            # deposit()
            # balance += amount     # WRONG --> amount not defined -- OUT OF SCOPE
            balance += deposit(balance)

        elif(choice == 3):
            balance -= withdraw(balance)

        elif(choice == 4):
            # print("Exitting " + {lodu} "... BAAD MEIN AUR NAA AAANA")
            print("Exitting " +  "... BAAD MEIN AUR NAA AAANA")
            isRunning = False
        else:
            print("ABEY Thik THik Type Kar")

if __name__ == '__main__':
    main()

