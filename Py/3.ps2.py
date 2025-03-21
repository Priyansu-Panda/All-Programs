name = input("Enter Name: ")


if len(name) > 12:
    print("Name too long")
elif not name.find(" ") == -1:  # . If a space is found, it returns its index (which will be 0 or a positive integer). If no space is found, it returns -1.
    print("It has space , Name should not have spaces")
elif not name.isalpha():
    print("cant contain name ")
else:
    print(f"Welcome {name}")



if len(name) > 12 or " " in name or name.isdigit():
    print("Name is too Invalid")
else:
    print("Name is valid")