import time     # we will update our time every second

import datetime     # allows us to work with string representation of time

import pygame


def set_alarm(alarm_time):
    print(f"Alarm Set for {alarm_time} done")
    # sound_file = "mixkit-retro-game-emergency-alarm-1000.wav"
    # sound_file = "C:\Users\DELL\Desktop\Programs\Py\BRO PS\mixkit-retro-game-emergency-alarm-1000.wav"
    sound_file = "oversimplified-alarm-clock-113180.mp3"

    is_running = True 

    # while is_running == True:
    while is_running:
        current_time = datetime.datetime.now().strftime("%H:%M:%S")

        print(current_time)
        # i = 1

        if(current_time > alarm_time):
            print("WAAKEEEEE UPPP !!! BASTART")
            
            pygame.mixer.init()
            pygame.mixer.music.load(sound_file)
            pygame.mixer.music.play()

            # print("WAAKEEEEE UPPP !!! BASTART")
            

            while pygame.mixer.music.get_busy():   # will return a boolean  # jab tak gana chal ra hai tab tak chalega
                # i+=1
                # print(i)
                time.sleep(1)

            is_running = False

        time.sleep(1)   # Har ek second mein next chez print hoga 


if __name__ == "__main__":
    alarm_time = input ("Enter the Alaram for (HH:MM::SS) - ")
    set_alarm(alarm_time)