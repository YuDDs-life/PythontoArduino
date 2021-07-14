import serial
import time


arduino = serial.Serial(port='COM5', baudrate=9600)
time.sleep(2)
inp = input("(int) | >> ") #tra ve dang chuoi
arduino.write(bytes(inp, 'utf-8')) #gui gia tri xuong Arduino
time.sleep(1)

print (arduino.readline().decode('utf-8').rstrip()) #Nhan gia tri tu Arduino gui len dang so nguyen (int)

arduino.close()