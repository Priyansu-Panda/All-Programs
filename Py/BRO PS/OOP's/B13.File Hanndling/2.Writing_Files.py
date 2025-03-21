
# open function  WIll return a file object 
# x will also write if th efile doesnt exist 
# a- apend 
# w - write
# x - write
# r - read


txt_data = " I LOve Kanpri!"

file_path = "outpt.txt"

employees = ["KAn", "KAnpri", "PRiyansu", "Kanha"]

try :
    # with open(file_tpe = file_path, mode = "w") as file :
# file is the name of file object  
    # with open(file_path, "x") as file :     # when the open function returns an object tom us ... we use the as keyword  to name the file  {file = File()}

    # with open(file_path, "a") as file :     # when the open function returns an object tom us ... we use the as keyword  to name the file  {file = File()}


    with open(file_path, "w") as file :     # when the open function returns an object tom us ... we use the as keyword  to name the file  {file = File()}
        # pass

        file.write(txt_data)
        print(f"Text FIle '{file_path}' was created ")


    with open(file_path, "a") as file :     # when the open function returns an object tom us ... we use the as keyword  to name the file  {file = File()}
        # pass
        file.write("\n" + txt_data)
        print(f"Text FIle '{file_path}' was created ")

        # file.write(employee + "\n")


except FileExistsError:     # when ur mode is x 
    print("File Already exist")



try :
    # with open(file_tpe = file_path, mode = "w") as file :
# file is the name of file object  
    # with open(file_path, "x") as file :     # when the open function returns an object tom us ... we use the as keyword  to name the file  {file = File()}

    # with open(file_path, "a") as file :     # when the open function returns an object tom us ... we use the as keyword  to name the file  {file = File()}

    with open(file_path, "w") as file :     # when the open function returns an object tom us ... we use the as keyword  to name the file  {file = File()}
        # pass

        # file.write(txt_data)
        # print(f"Text FIle '{file_path}' was created ")

        # file.write("\n" + txt_data)
        # print(f"Text FIle '{file_path}' was created ")

        for employee in employees:      # u can directly put th entire list in a file .. using "Write " mode ... it has to be str
            file.write(employee + "\n")

        print(f"Text FIle '{file_path}' was created ")

except FileExistsError:     # when ur mode is x 
    print("File Already exist")


# jso file is  made up of key value pairs 
import json

employee = {
    "name" : "KAnpri",
    "age" : 69,
    "job" : "sex"
}

file_ph = "output1.json"

try:
    with open(file_ph , "w") as file:
        # json.dump(employee , file)     # dump method will convert the dictionary to a json string 
        json.dump(employee , file, indent = 4)     # correcting the indentation.. indent the each key value pair by 4 spaces # dump method will convert the dictionary to a json string 
        print(f"JSON file {file_ph} is created")
except FileExistsError:
        print("File Already exist")
