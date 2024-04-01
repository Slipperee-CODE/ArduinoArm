from cvzone.SerialModule import SerialObject
from time import sleep

arduino = SerialObject()

while True:
    arduino.sendData([1]) #includes list of all numbers to send
    sleep(3)
    arduino.sendData([0])
    sleep(1)
