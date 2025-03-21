
def shipping_label(*args,**kwargs):
    for arg in args:
        print(arg, end = " ")

    print()

    if 'apt' in kwargs:
        print(f"{kwargs.get('street')}")
        print(f"apt = {kwargs.get('apt')}")
        # print(f"{kwargs.get('city')}, {kwargs.get('pin')}")
    else:
        print(f"{kwargs.get('street')}")
    print(f"{kwargs.get('city')}, {kwargs.get('pin')}")

        

    # pass


shipping_label("Kanpri", "Priyansu", "Panda", 
                     street = "MAdhupatna",
                    city = "CUttack",
                    state = "Odisha",
                    apt = "Build",
                    pin = "753010")


# print(shipping_label("Kanpri", "Priyansu", "Panda",       # would return None
#                      street = "MAdhupatna",
#                     city = "CUttack",
#                     state = "Odisha",
#                     apt = "Build",
#                     pin = "753010"))