questions = ("How Many Elements?",
            "Animal lags Egss",
            "Abundant Gas",
            "Bones in HUman Body",
            "Hottest Planet")

options = (("A. 110","B. 116", "C. 256", "D. 789"),
           ("A. Cat","B. Dog", "C. Whae", "D. Crocs"),
           ("A. Hydrogen","B. Co2", "C. Oxyegen", "D. Nitrogen"),
           ("A. 2110","B. 2064", "C. 2004", "D. 2007"),("A. Earth","B. MArs", "C. Pluto", "D. Venus\n")) 

answers = ("C","D", "A","A","C")

guesses = []
score = 0
question_num = 0


for question in questions:
    print ("----------------")
    # PRINTING Questions
    print (question)
    # Printing Options 
    # for option in options:
    for option in options[question_num]:
        print(option)
    # enter the choice 
    guess = input("Enter the CHoice (A,B,C,D): \n").upper()

    # Storing Guessed Vlaues 
    # guesses[question] = guess
    guesses.append(guess)

    if (guess == answers[question_num]):
    # if (guess == answers):
        score += 1
        print(f"Yes {answers[question_num]} is Correct")
    else:
        # print(f"No, Wrong, {answers} is the correct answer")    # No, Wrong, ('C', 'D', 'A', 'A', 'C') is the correct answer
        print(f"No, Wrong, {answers[question_num]} is the correct answer")    
    question_num += 1
    
print("---------------------")
print("      RESULT     ")
print("---------------------")    

print("\n UR ANSWERS")
for guess in guesses:
    print(guess + "|", end = "")

print("\n Correct ANSWERS")
for answer in answers:
    # print(answer)
    print(answer + "|", end = "|")

score = score/len(questions)



# guesses = []    # we have to append the 
# score = 0
# question_num = 0

## print(options)
##  print(options[1])
## for option in options[1]:
##     print (option)
'''A. Cat
B. Dog
C. Whae
D. Crocs'''

##for option in options:
##    print (option)

'''('A. 110', 'B. 116', 'C. 256', 'D. 789')
('A. Cat', 'B. Dog', 'C. Whae', 'D. Crocs')
('A. Hydrogen', 'B. Co2', 'C. Oxyegen', 'D. Nitrogen')
('A. 2110', 'B. 2064', 'C. 2004', 'D. 2007')
('A. Earth', 'B. MArs', 'C. Pluto', 'D. Venus')'''


# for quetion in questions:
#     print("---------------------")
#     print(quetion)  # U printed the Question 
#     # NOW PRint the Options
#     for option in options[question_num]:  
#         print(option)
#     guess = input("Enter ur ans (A, B, C, D): ").upper()
#     guesses.append(guess)

#     if guess == answers[question_num]:
#         print("Correct!")
#         score += 1
#     else:
#         print("WRONG!")
#         print(f"{answers[question_num]} is the correct answer")

#     question_num += 1
    
# print("---------------------")
# print("      RESULT     ")
# print("---------------------")

# print ("answers : ", end= " ")
# for ans in answers:
#     print(ans, end = " ")
# print()
# print ("guesses : ", end= " ")
# for guess in guesses:
#     print(guess, end = " ")
# print()


# score = int(score/len(questions)*100)
# print(f"Ur score is {score}%")








