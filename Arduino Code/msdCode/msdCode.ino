#include <LiquidCrystal.h>
#include <Servo.h>
const int buzzer = 13; 
int incomingByte;      
const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12; 
 LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int pos = 0;   
int val;
Servo myservo;
int countH=0;
int countL=0;

  
void setup() {
  Serial.begin(9600);
  myservo.attach(6); 
  pinMode(buzzer, OUTPUT);
  lcd.begin(16, 2);                       
}

void loop() {
  
  if (Serial.available() > 0) {   
    incomingByte = Serial.read();
    if (incomingByte == 'H') { 
     noTone(buzzer);
     lcd.clear();
     lcd.setCursor(0, 0);    
     lcd.print("Mask Detected");      
    }
    if (incomingByte == 'L') {
      tone(buzzer,450);
      lcd.clear();
      lcd.setCursor(0, 0);    
     lcd.print("Please Wear Mask");
    }
    
    if (incomingByte == 'H') { 
         if(pos!=0 && countH==0){
           myservo.write(0);
           delay(15);
           countH=1;
         } 
         
      for (pos = 0; pos <= 180; pos += 10) { 
          myservo.write(pos);              
          delay(2);  
          //currentPos=pos;          
      }
       
    }
    else if (incomingByte == 'L') {
       if(pos!=180 && countL==0){
           myservo.write(180);
           delay(15);
           countL=1;
         } 
          
          for (pos = 180; pos >= 0; pos -= 10) { 
           myservo.write(pos);             
           delay(2);                      
        }

    }
  }
  
}

  
