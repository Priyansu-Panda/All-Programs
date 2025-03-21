

try:
    number = int(input("ENter a Number: "))
    print(1/number)
except ZeroDivisionError:
    print("ITS ZeroDivisionError")

except ValueError:
    print("ITS ValueError")

except Exception:
    print("Something went wrong")

finally:
    ("Ur conde is complete")


