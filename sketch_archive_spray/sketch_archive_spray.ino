
#define echoPin 2 
#define tringPin 3 
#include "Servo.h" 
  
Servo myservo; 

 
void setup() { 

Serial.begin( 9600 ); 

pinMode(tringPin, OUTPUT); 

pinMode(echoPin, INPUT ); 

  

myservo.attach(10,500,2400); 

} 

  

void loop() { 

  float duration, distance; 

  digitalWrite(tringPin, LOW); 

  delayMicroseconds(2); 

   

  digitalWrite(tringPin, HIGH); 

  delayMicroseconds( 10 ); 

  digitalWrite(tringPin, LOW); 

  

  duration = pulseIn( echoPin, HIGH); 

  distance = (duration/2) *0.0344; 

   

  if (distance>= 10||distance<=2) { 

    myservo.write(0); 

  

  } 

  else{ 

  

  myservo.write(0); 

  delay(400); 

  myservo.write(360); 

  delay(400); 

  } 

} 

 
