pr1 = 3.1452
pr2 = -9480.5
pr3 = 12.58

print(f"P1 is ${pr1}")
print(f"P2 is ${pr2}")
print(f"P3 is ${pr3}")


print(f"P1 is ${pr1:,}")
print(f"P2 is ${pr2:,}")
print(f"P3 is ${pr3:,}")

print(f"P1 is ${pr1:+,.2f}")
print(f"P2 is ${pr2:+,.2f}")
print(f"P3 is ${pr3:+,.2f}")


print(f"P1 is ${pr1:+}")    # + wale ke age + lagega
print(f"P2 is ${pr2:+}")    # - wale ke age - lagega
print(f"P3 is ${pr3:+}")    # + wale ke age + lagega


print(f"P1 is ${pr1:^10}")  # center align
print(f"P2 is ${pr2:^10}")  # center align
print(f"P3 is ${pr3:^10}")  # center align


print(f"P1 is ${pr1:>10}")  #  right align and pad with spaces to a width of 10
print(f"P2 is ${pr2:>10}")  #  right align and pad with spaces to a width of 10
print(f"P3 is ${pr3:>10}")  #  right align and pad with spaces to a width of 10



print(f"P1 is ${pr1:010}")
print(f"P2 is ${pr2:010}")
print(f"P3 is ${pr3:010}")


print(f"P1 is ${pr1:10}")   # $ ke baad 10 places mein sab likha hoga 
print(f"P2 is ${pr2:10}")   # $ ke baad 10 places mein sab likha hoga 
print(f"P3 is ${pr3:10}")   # $ ke baad 10 places mein sab likha hoga 


print(f"P1 is ${pr1:.2f}")      # . ke baad 2 deci places
print(f"P2 is ${pr2:.2f}")      # . ke baad 2 deci places
print(f"P3 is ${pr3:.2f}")      # . ke baad 2 deci places

