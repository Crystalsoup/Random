
import time
import subprocess
import os
from pygame import mixer

outrosound = os.path.join(os.getcwd(), 'outro.mp3')
mixer.init()
mixer.music.load(outrosound)
mixer.music.play()

time.sleep(0.1)
for zaky in range(10):
    print("Shutting down in: " + str(10 - zaky) + " Seconds")
    time.sleep(1)

print("Gotta go!")
time.sleep(1.25)


subprocess.call(["shutdown", "/s", "/t", "1"])