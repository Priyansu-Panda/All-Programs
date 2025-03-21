f = open("9.file.txt")
# f = open("9.file.txt","r")
data = f.read()
print(data)
f.close()


st = "Woow Kan now u updated the file"
f = open("9.file.txt_1", "w")   # Will Create a New FIle
f.write(st)

f.close()



f = open("9.file.txt")

lines = f.readlines()     # Once its done it wont strat agin ...it has ended

# print(lines, type(lines))   # LIST

line = f.readline()     # Ek line padega bas 

# lines = f.readlines()
# print(lines, type(lines))

# line1 = f.readline()
# print(line1, type(line1))

# line2 = f.readline()
# print(line2, type(line2))

# line3 = f.readline()
# print(line3, type(line3))

# line4 = f.readline()
# print(line4, type(line4))

# line5 = f.readline()
# print(line5 =="")     # TRUE


# lines = f.readline()
# print(line,type(line))


# if(line == ""):
#     print ("Its EMpty")


line = f.readline()

while(line != ""):
    print(line, end="")
    line = f.readline() # Next line ko chalo 
     
f.close()


st = "Han Kan Ab KYa bolun tere barein mein "
e = open("9.file.txt_1")
f = open("9.file.txt_1", "a")

# Here is where the issue lies. The write method expects a string argument, but e is a file object. This will raise a TypeError because you cannot write a file object directly to another file. Instead, you need to read the contents of the file object and then write those contents
# f.write(e)    # will create a new file

contents = e.read()  # Read the contents of the file
f.write(contents)    # Write the contents to the file
f.close()
e.close()

st = "PAgal Kahinka Han Kan Ab KYa bolun tere barein mein "
f = open("9.file.txt", "a")
f.write(st)
f.close()


f = open("9.file.txt")

print(f.read())
f.close()




# The Same Can be written using statement 
with open("file.txt") as f:
    print(f.read())
# NOw U dont have to explicitly close the file 
