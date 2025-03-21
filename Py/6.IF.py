name = input ("Enter ur name ")

if name == "":
    print("Name cannot be empty")
else:
    print("Hello, " + name)
    print(f"Hello {name}")



a1 = int(input("Enter The no. : "))
a2 = int(input("Enter The no. : "))
a3 = int(input("Enter The no. : "))
a4 = int(input("Enter The no. : "))

if(a1>a2 and a1>a3 and a1>a4):
    print("The largest no. is ",a1)
elif(a4>a2 and a4>a3 and a4>a1):
    print("The largest no. is ",a4)
elif(a3>a2 and a3>a1 and a3>a4):
    print("The largest no. is ",a3)
elif(a2>a1 and a2>a3 and a2>a4):
    print("The largest no. is ",a2)
    
    
#
m1 = int(input("Enter mArks: "))    
m2 = int(input("Enter mArks: "))    
m3 = int(input("Enter mArks: "))    

per = (m1+m2+m3)/300*100


if(per>40 ):
    print("You are pass: ",per)

# elif(per < 40):
else:
    print("You are failed: ",per)
    
    
#
msg = input("Enter teh msg: ")

if(msg== "Make A Lot Money " or msg == "buy now" or msg == "subscribe this" or msg == "click now"):
    print("Spam msg")
else:
    print("Not Spam")
    
    
# OR
p1 = "Make A Lot Money "
p2 = "buy now"
p3 = "click now"
p4 = "subscribe this"

msg = input("Enter teh msg: ")

if((p1 in msg) or (p2 in msg) or(p3 in msg) or(p4 in msg)):
    print("Spam msg")
else:
    print("Not spam")
    
# OR

# Input from user
msg = input("Enter the msg: ")

# List of spam keywords
spam_keywords = ["Make A Lot Money", "buy now", "subscribe this", "click now"]

# Check if the message is spam
if msg in spam_keywords:
    print("Spam msg")
else:
    print("Not Spam")


# 
naam = input("Enter ur name : ")
if(len(naam) >= 10):
    print("Your name is long: ",len(naam))
else:
    print("Your name is short: ",len(naam))
    

# 
li = ["Kan", "Kanpri", "Kanha","Pri"]
naam = input("Enter ur name : ")

if(naam in li):
    print("Name in list")
else:
    print("name not in list")
    
    
# 
marks = int(input("Enter ur marks: "))

if(marks <= 100 and marks>= 90):
    grade = "EEXC"
elif(marks <= 90 and marks>= 80):
    grade = "A"
elif(marks <= 80 and marks>= 70):
    grade = "B"
elif(marks <= 70 and marks>= 60):
    grade = "C"
elif(marks <=  60 and marks>= 50):
    grade = "D"
elif(marks<50):
    grade = "F"

print("UR grade is: ",grade)
    
    
    
    
# 
post = input("Enter the post: ")

if("Kan".lower() in post.lower()):
    print("Present inpost ")     
else:
    print("Nor Present")


