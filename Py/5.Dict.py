marks = {
    "HA": 29,
    "kan" : 96,
    "Kanpri":33,
    3:"69",   
    4: 69   
}

print(marks, type(marks))

print(marks["kan"])

print(marks.items())    #output in tuple

print(marks.keys())
print(marks.values())
marks.update({"HA":69, "Kanp": 33})
print(marks)

print(marks.get("kan"))
print(marks["kan"])

d = {}
print(type(d))  # dict ~ empty dict



s = {1,12,3}    #set
e = set()   # empty set 
# e = {}    empty dict

s1 = {1,56,79}
s2 = {89.6,1,65.36,23}
print(s1.union(s2))
print(s1.intersection(s2))
