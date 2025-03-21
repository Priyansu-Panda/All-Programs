# Collection of key : value pairs 
# they are ordered and chanagble


capitals = {
    "USA" : "DC",
    "MAth" : 1,
    "India": "New Delhi",
    "China" : "Beijing"
}

# print(dir(capitals))
# print(help(capitals))

print(capitals.get("USA"))

if capitals.get("Japan"):
    print("EXIST")
else:
    print("DOESNTT EXIST")

capitals.update({"Germany" : "Berlin"})
capitals.pop("China")
capitals.popitem()
capitals.clear()


keys = capitals.keys()

print(keys)

for key in capitals.keys():
    print(key)


values = capitals.values()
print(values)

for value in capitals.values():
    print(value)


items = capitals.items()    # Items resembles A dict object which resmbles a 2d list of tuples
# [(),(),()]

for key, value in capitals.items():
    print(f"{key}: {value}")