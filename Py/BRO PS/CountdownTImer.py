import time

my_time = int(input("Enter the time in secs: "))

for x in range(my_time,0,-1):
    
    # 121 -> 121%60 = 1
    # 121 -> 121/60 = 2 -> 2%60 = 2
    # 121 -> 121/3600 =... -> ...%60 = ...

    seconds = x % 60    # 60 ho jaye to sec will be 0 min will be 1
    minutes =  int(x/60) % 60
    hour =  int(x/3600) % 24
    days = int(x/86400)
    print(f"({days:03}days) {hour:02}:{minutes:02}:{seconds:02}")
    time.sleep(1)

print("time's up ")