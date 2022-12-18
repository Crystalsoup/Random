import sys
import cv2
import os
from pygame import mixer

boomsound= os.path.join(os.getcwd(), 'vine-boom.mp3')
mixer.init()
mixer.music.load(boomsound)
mixer.music.play()

img = cv2.imread("maxresdefault.jpg", cv2.IMREAD_ANYCOLOR)

while True:
    cv2.imshow("s k y e", img)
    cv2.waitKey(0)
    sys.exit()

cv2.destroyAllWindows()