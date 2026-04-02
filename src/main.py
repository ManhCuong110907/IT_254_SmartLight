import cv2
import serial
import time

# Connect to Arduino
ser = serial.Serial('COM9', 9600)

cap = cv2.VideoCapture(0)

# Pre-trained human detector
hog = cv2.HOGDescriptor()
hog.setSVMDetector(cv2.HOGDescriptor_getDefaultPeopleDetector())

while True:
    ret, frame = cap.read()
    if not ret:
        break

    # Detect humans
    boxes, _ = hog.detectMultiScale(frame)

    if len(boxes) > 0:
        print("Human detected!")
        ser.write(b'1')  # Human detected
    else:
        ser.write(b'0')  # No human detected  


    cv2.imshow("Frame", frame)

    if cv2.waitKey(1) == 27:
        break

cap.release()
cv2.destroyAllWindows()