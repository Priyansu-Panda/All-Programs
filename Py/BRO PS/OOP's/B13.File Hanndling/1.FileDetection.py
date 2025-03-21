# Python File Detection

import os   # Import so that it can communicate with the operating system

file_pth = "1.test.txt"     # it is a relative file path its loction will be in th esame place where this py file is 


if os.path.exists(file_pth):
    print(f"The file {file_pth} exist")
    
    if os.path.isfile(file_pth):
        print("it i s a simple file not any directory")
    elif os.path.isdir(file_pth):
        print("it i s a simple  directory")

else:
    print("That Locaation doessnt exist")


