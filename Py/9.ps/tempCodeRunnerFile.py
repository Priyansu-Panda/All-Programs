f = open("9.txt")
content = f.read()

if("twinkle" in content.lower()):
    print("Twinkle is PResent")
else:
    print("Twinkle is not present")

f.close()
