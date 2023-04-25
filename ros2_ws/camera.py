#!/usr/bin/env python3

# ------------ cv2 --------------

# import cv2

# cap = cv2.VideoCapture(0)
# # Capture frame
# ret, frame = cap.read()
# if ret:
# 	cv2.imwrite('image.jpg', frame)
# cap.release()

import cv2

cap = cv2.VideoCapture(0)
if not cap.isOpened():
    print("Cannot open camera")
    exit()

#cv2.namedWindow("live", cv2.WINDOW_AUTOSIZE); # 命名一個視窗，可不寫
while(True):
    # 擷取影像
    ret, frame = cap.read()
    if not ret:
        print("Can't receive frame (stream end?). Exiting ...")
        break

    # 彩色轉灰階
    # gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # 顯示圖片
    cv2.imshow('live', frame)
    #cv2.imshow('live', gray)

    # 按下 q 鍵離開迴圈
    if cv2.waitKey(1) == ord('Q'):
        break

# 釋放該攝影機裝置
cap.release()
cv2.destroyAllWindows()

# ------------- picamera -------------

# import picamera
# from time import sleep
 
# #create object for PiCamera class
# camera = picamera.PiCamera()
# #set resolution
# camera.resolution = (1024, 768)
# camera.brightness = 60
# camera.start_preview()
# #add text on image
# camera.annotate_text = 'Hi Pi User'
# sleep(5)
# #store image
# camera.capture('image1.jpeg')
# camera.stop_preview()