# Iterables = An object or collection that can return its elements one at a time allowing it to be iterated over in a loop


numbers = [1,2,3,4,5]
tu_numbers = (1,2,3,4,5)

for num in numbers:
    print(num, end = " ")
print()

for num in reversed(numbers):
    print(num, end = "-")
print()

for num in (tu_numbers):    # 1-2-3-4-5-
    print(num, end = "-")
print()
for num in reversed(tu_numbers):    # 5-4-3-2-1-
    print(num, end = "-")


print()
set_fruits = {"aaple", "banna", "Orange","pomegrande"}

for num in set_fruits:
# for num in reversed(set_fruits):  # ERROR
        print(num, end = " ")


print()
str_name = "PRiyansu Panda "

for character in str_name:
    print(character, end = " ")


print()
my_dict = {"A": 1, "B": 3, 'c': 2}

for key, value in my_dict.items():
    print(key,value)