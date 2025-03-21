import datetime

date = datetime.date(2025,1,25)
print(date)

today = datetime.date.today()
print(today)

time = datetime.time(12,4,6)
print(time)

now = datetime.datetime.now()
print(now)

now = now.strftime("%H-%M : %S  %m %d %Y")
print(now)

target_datetime = datetime.datetime(2030,12,2,12,59,2)
current_datetime = datetime.datetime.now()

if target_datetime < current_datetime:
    print("Target Date has passed ")
else:
    print("Target Date has NOT passed ")