# print ('''Twinkle twinkle little star.
# How I wonder what you are.
# Up above the world so high.
# Like a diamond in the sky.
# Twinkle twinkle little star.
# How I wonder what you are.

# Twinkle twinkle little star.
# How I wonder what you are.
# Up above the world so high.
# Like a diamond in the sky.
# Twinkle twinkle little star.
# How I wonder what you are.''') 


# import pyttsx3
# engine = pyttsx3.init()
# engine.say("I will speak this text, and tell that Ur name is Kanpri")
# engine.runAndWait()


import os

def list_directory_contents(path='.'):
    try:
        # List all files and directories in the specified path
        contents = os.listdir(path)
        print(f"Contents of '{path}':")
        for item in contents:
            print(item)
    except FileNotFoundError:
        print(f"The directory '{path}' does not exist.")
    except PermissionError:
        print(f"Permission denied for accessing '{path}'.")

# Specify the path of the directory
directory_path = '.'  # Current directory
list_directory_contents(directory_path)
