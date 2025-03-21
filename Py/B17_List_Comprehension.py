# it is an concise way to create lists in python 
# its a compact and an easier way to read than traditional loops

# [{expression} for {value} in {iterable} if {condition}]



doubles = []
for x in range(1,11):
    doubles.append(x*2)
print(doubles)

#           OR

doubles = [x*2 for x in range(1,11)]
# for evry x in the range from 1 to 11 i.e not 11 return x*2
print(doubles)


triples = [x*3 for x in range(1,11)]
# for evry x in the range from 1 to 11 i.e not 11 return x*2
print(triples)

squares = [x*x for x in range(1,11)]
# for evry x in the range from 1 to 11 i.e not 11 return x*2
print(squares)

fruits = ["apple", "orange", "bannana", "coconut"]
fruits = [fruit.upper() for fruit in fruits]
# fruits = [fruit for fruit in fruits]

fruits = [fruit[0] for fruit in fruits]
# for every fruit in the fruits return the first character of every fruit

print(fruits)


numbers = [1,-2,-3,4,-5]

positive_nums = [num for num in numbers if num >=0]
# for every num in numbers if num is >= 0 , then return num
print(positive_nums)

neg_nums = [num for num in numbers if num <=0]
# for every num in numbers if num is <= 0 , then return num
print(neg_nums)

even_nums = [num for num in numbers if num%2 == 0]
print(even_nums)    #   [-2, 4]


grades = [69,86,67,90,85,20,21,30]

passing_grades = [grade for grade in grades if grade >=65]

print(type(passing_grades))
# <class 'list'> 
print((passing_grades))
# [69, 86, 67, 90, 85]
