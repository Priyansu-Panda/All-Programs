# *args    = Allows to pass multiple non-key argumenst
# **kwargs    = Allows to pass multiple keyword argumenst

'''
def fun1():
    x = 9    # ENCLOSED SCOPE
    print(x)    # 9

    def fun2():
        x = 6   # LOCAL SCOPE
        print(x)    # 6
    fun2()

fun1()

def func1():
    print(x)    # 2

def func2():
    x = 3       
    print(x)    # 3

x = 2   # Global Scope 
'''


def add(a,b):
    return a+b

def add2(*args):    # or *nums ...anything
    print(type(args))   # <class 'tuple'>

    total = 0
    for arg in args:    # for x in nums:
        total += arg    # total += x
    return total


print(add(1,2)) 
# print(add(1,2,3))     #ERROR 

print(add2(1,2,3))


def display_name(*args): 
    for arg in args:
        print(arg, end = " ")
    print()

display_name("Kanpri", "Priyansu")
display_name("Kanpri", "Priyansu", "Panda")


def print_address(**kwargs):
    print(type(kwargs))     # <class 'dict'>
    print(kwargs)       # {'street': 'MAdhupatna', 'city': 'CUttack', 'state': 'Odisha', 'pin': '753010'}
    print("\nVAlues" + "\n")
    print(kwargs.values())       # dict_values(['MAdhupatna', 'CUttack', 'Odisha', '753010'])

    for values in kwargs.values():
        print(values) 


    print("\nKEYS" + "\n")
    print(kwargs.keys())        # dict_keys(['street', 'city', 'state', 'pin'])

    for keys in kwargs.keys():
        print(keys)


    for keys , values in kwargs.items():
        # print(f"{keys:7} : {values:0.5}")     
        print(f"{keys:7} : {values}")

    # pass

print_address(street = "MAdhupatna",
              city = "CUttack",
              state = "Odisha",
              pin = 753010)


# def shipping_label(**kwargs,*args):

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