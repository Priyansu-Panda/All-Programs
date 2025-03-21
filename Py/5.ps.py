lang = {
    "Kya" : "How Are tu",
    "bole": "tell"
}

print(lang["Kya"])

# word = input("Enter the word u want meaning: ")
# print(lang[word])


#
# s= set()
# n = input("Enter teh num: ")
# s.add(int(n))
# n = input("Enter teh num: ")
# s.add(int(n))
# n = input("Enter teh num: ")
# s.add(int(n))
# print(s)


#
s= set()
n = input("Ente the value")
s.add(int(n))
n = input("Ente the value")
s.add(n)

s.add(9)
s.add(9.0)  #9 == 9.0
s.add('90')

print(s,type(s))
print(len(s))   # 4


#
s = {}
print(type(s))  # Dict


#
l= {
    "Harry" : input("Enter Ur FAv LAng"),
    "Pri" : input("Enter Ur FAv LAng"),
    "KAnpri" : input("Enter Ur FAv LAng"),
    "KAn" : input("Enter Ur FAv LAng")
}
print(l)


l = {}
name = input("Enter Ur FAv LAng: ")
lang = input("Enter ur name: ")

l.update({name : lang})

name = input("Enter Ur FAv LAng: ")
lang = input("Enter ur name: ")

l.update({name : lang})

name = input("Enter Ur FAv LAng: ")
lang = input("Enter ur name: ")

l.update({name : lang})

print(l)

# Update usually overites the Keys not the values


#
# Values in the set cant be updated

s= {1,2,3,"KAn", (9,10)}
print(s) 