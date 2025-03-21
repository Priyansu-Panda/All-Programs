num_pad = (
    (1, 2, 3),
    (4, 5, 6),
    (7, 8, 9),
    ('*', 0, '#')
)

for row in num_pad:
        for num in row:
            # print(num)
            # print(num, end = " ")
            print(num, end = " ")
        print()

    # print(row)
        '''(1, 2, 3)
            (4, 5, 6)
            (7, 8, 9)
            ('*', 0, '#')'''
    



num_pad = []

for num in range(1,10):
    num_pad.append(num)

# for num in num_pad:
#     for x in range(1,4):
#         print(num, end = " ")
#     print()

for i in range (0,9,3):     # The for loop iterates over indices 0, 3, and 6.
    print(num_pad[i],num_pad[i+1],num_pad[i+2])
    
print("*", 0, "#")

