# Decoartor = A function that extends the behaviour of another function 
#             w/o modifying the behaviour of another function (base function) 
#            pass the base function as an argument to the decorator


# Decorator -> Adding something to the base function withpout changing the base function




# Creation of function inside the decorator is important  --- otherwise evernif u dont call the base function still it will be printed due to the decorator on it 


def add_fudge(func):
    def wrapp(*args, **kwargs):
        print("**U added Fudge ** ")
        func(*args, **kwargs)
    return wrapp

def add_sprikles(func):
    # def wrapper():      # Will show error ... as get_ice_cream takes an argument 

    def wrapper(*args, **kwargs):      
        print("* YOU add SPRINKELS 🎊 *")
        func(*args,**kwargs)
    return wrapper

@add_sprikles
# def get_ice_cream():
    # print("Here is ur favourite  🍦")
def get_ice_cream(flavour):
    print(f"Here is ur favourite {flavour} 🍦")

get_ice_cream('vanilla')
# get_ice_cream()

# add_sprikles(get_ice_cream('vanila'))


def greet(fun):
    def wrapper():
        print("Good Morning")
        fun()
    return wrapper

@greet
def hello():
    print("Hello MAdame Bonsieur")


hello()
greet(hello)
#               OR
# greet(hello())


# hello()  # This will print "Good Morning" and then "Hello MAdame Bonseiur
# greet(hello)  # This will print "Good Morning" and then "Hello MAdame Bonsiuer


def greet(fun):
    def wrapper(*args):
        print("Good Morning")
        fun(*args)
    return wrapper

@greet
def hello(*args):
    name = args[0]  # Assuming there's at least one argument
    # print(f"Hello {args} MAdame Bonsieur")    # Hello ('Kanpri',) MAdame Bonsieur
    print(f"Hello {name} MAdame Bonsieur")


hello("Kanpri")
greet(hello("KAnpri"))