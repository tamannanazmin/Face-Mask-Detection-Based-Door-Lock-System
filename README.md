# Project Title: 
Face Mask Detection Based Door Lock System.

# Project Description: 
For building face mask based door system, I used machine learning model using Keras, Tensorflow library in python language. After building model I used OpenCV to detect whether a person is wearing a mask or not in real time. This system contains mainly four devices. They are: servo, camera(webcam), buzzer, LCD and Arduino Uno. I used arduino Uno to control servo, camera, LCD and buzzer. If someone appears in front of the entrance wearing a mask properly, covering both their mouth and nose, then they will be let in. At the same time my display will show “Mask Detected”. But if someone appears without a mask then they will be denied entry, at the same time the system would display “Please wear mask” while the buzzer would alarm the person. This versatile system could be used with variety of entrances with different locking system. the image of demo working project is given below:



![image](https://user-images.githubusercontent.com/42768952/136710014-dbc416f6-fb1a-4d56-86ea-39deeefe1cfc.png)



# How to run the project

#### Step 1
You have to run 'train_mask_detector.py' file in spyder or Jupyter Notebook to create a model named 'mask_detector.model' or you can use my previous trained model which I have provided in GitHub.
For training 'train_mask_detector.py' file you need a dataset having two folders: 1. withMask 2. Withoutmask. I also provided the dataset in GitHub.

#### Step 2
You have to run ‘myDetect.py’ file in spyder. For running this file you need 'res10_300x300_ssd_iter_140000.caffemodel',  'deploy.prototxt' and 'mask_detector.model' file which I have provided in the Github and you must connect your webcam with your PC but if you are using Laptop then you don't need any webcam.
If you run everything successfully then your camera will be opened and you can test if it works with the mask or not.

#### Step 3
Finally, you will add Serial Command to the facemask detection algorithm that will order the Arduino to send commands to the servo, buzzer, and LCD based on the state of detection. I have commented on the Arduino code in the myDetect.py file. If you want to use Arduino then first, you have to run and compile 'msdCode.ino' file on the Arduino board using Arduino Software. Next,  you have to connect your Arduino with your pc or laptop using a USB cable and then you have to comment out the Arduino code from  'myDetect.py' file and run the file. 

Remember you have to connect your Arduino with LCD, servo, and buzzer before running the code. 
the connection is given below:

#### For LCD 
###### you have to connect the RS pin with Arduino digital pin 7
###### you have to connect the EN pin with Arduino digital pin 8
###### you have to connect the D4 pin with Arduino digital pin 9
###### you have to connect the D5 pin with Arduino digital pin 10
###### you have to connect the D6 pin with Arduino digital pin 11
###### you have to connect the D7 pin with Arduino digital pin 12

#### For Servo 
###### you have to connect the servo with Arduino digital pin 6

#### For Buzzer
###### you have to connect the Buzzer with Arduino digital pin 13
## Diagram

![168356358_471577070698108_6773213453901222133_n](https://user-images.githubusercontent.com/42768952/156630123-83648407-114e-445d-a410-9d34470bba4e.png)

#### The demo of this Project
https://youtu.be/d0eqqvyw9vE
# Language: 
Python and Arduino.
# Library:
tensorflow, keras, imutils, cv2, numpy, time, os, serial
# Hardware:
Arduino Uno, servo, buzzer, LCD, webcam.
# IDE: 
Spyder, Arduino Software.
