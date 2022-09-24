import pygame
import time
import datetime
# pygame.mixer.music.pause()     
# pygame.mixer.music.unpause()

drinkwatertime=time.time()
eyeexercisetime=time.time()
physicalexercisetime=time.time()

def mysong():
    pygame.mixer.init() 
    pygame.mixer.music.load("song.mp3")
    pygame.mixer.music.set_volume(0.2)
    pygame.mixer.music.play(-1)
    while True:
        userinput=input("enter keyword to stop music\n")
        if userinput=="done":
            pygame.mixer.music.stop()
            break
            
def mylog(task):   
    with open ("output.txt","a") as myfile:
        myfile.write(f"{task} is done at {datetime.datetime.now()}\n")

while True:
    if time.time()-drinkwatertime>(40*60):
        print("Drink the water")
        mysong()
        mylog("drinkwater")
        drinkwatertime=time.time()

    elif time.time()-eyeexercisetime>(50*60):
        print("Do eye exercise")
        mysong()
        mylog("eyeexercise")
        eyeexercisetime=time.time()
    
    elif time.time()-physicalexercisetime>(60*60):
        print("Do some physical activity")
        mysong()
        mylog("physicalactivity")
        physicalexercisetime=time.time()

        
        


