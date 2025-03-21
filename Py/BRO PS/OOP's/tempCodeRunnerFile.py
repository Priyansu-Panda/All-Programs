
def greet(fun):
    def wrapper(*args):
        print("Good Morning")
        fun(*args)
    return wrapper

@greet
def hello(*args):
    name = args[0]  # Assuming there's at least one argument
    print(f"Hello {name} MAdame Bonsieur")


hello("Kanpri")