f = open("9.ps")
content = f.read()

print(content)

if("twinkle" in content.lower()):
    print("Twinkle is PResent")
else:
    print("Twinkle is not present")

f.close()
