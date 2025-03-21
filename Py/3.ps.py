#
# a = input("Enter: ")
# print(a+"GoodAfternoon")

# print(f"Good Boy {a}")    #F-sting
# print("Good Boy {}".format(a))    #format


#
letter = '''Dear <|NAme|>,
            Congratulations U are Rejected!!
            <|DAte|>'''
            
print(letter.replace("<|NAme|>", "kanpri").replace('<|DAte|>',"@3r Jan"))


#
name = "kanpri is      "
print(name.count(" "))  # 3
print(name.count("  "))  # 1
print(name.find(" "))
print(name.find("  "))

print(name.replace("  ",'|'))

print(name)