# Function Defination
def avg():
    a = int(input("Enter A: "))
    b = int(input("Enter B: "))
    c = int(input("Enter C: "))

    avg = (a+b+c)/3
    
    print(avg)
    
# Function CAll 
avg()


def shout(name):
    print(f"HELLO {name.upper()}")
    print(name + " How are U")


shout(input("Enter the NAme: "))


def greet(naam):
    gr = "Hello" + naam
    print(type(gr))     # str
    # gr = "Hello" , naam
    # print(type(gr))   #tuple
    return gr

a = greet("Kan")
print(a)


def greet(naam,end):
    gr = "Hello" + naam
    print(f"Good day, {naam}")
    print(end)
    return gr

a = greet("Kan","Thanks")
print(a)


def greet(naam,end = "Thanking"):
    gr = "Hello " + naam
    print(f"Good day, {naam}")
    print(end)
    return gr

a = greet("Kan")
print(a)

def greet(naam,end = "Thanking"):
    gr = "Hello " + naam
    print(f"Good day, {naam}")
    print(end)
    return gr

a = greet("Kan","Thanks")
print(a)


def  factorial(n):
    if(n == 1 or n == 0):
        return 1
    return n * factorial(n-1)

n = int(input("Enter the nUmber: "))
print(f" Factorial of {n} is {factorial(n)}")