/for_slave

#include<Wire.h> 

int val_L=0; 

float V_L=0.0; 

  

  

void setup() { 

  pinMode(13,INPUT); 

  pinMode(11,INPUT); 

  pinMode(9,INPUT); 

  pinMode(7,INPUT); 

  pinMode(5,INPUT); 

  pinMode(A0, INPUT); 

  

  Serial.begin(9600); 

  

  Wire.begin(); 

   

} 

  

  

void loop() { 

  int a=digitalRead(13); 

  int b=digitalRead(11); 

  int c=digitalRead(9); 

  int d=digitalRead(7); 

  int e=digitalRead(5); 

  

while(Wire.available()) 

    {  

        byte num = Wire.read(); // 1バイト受信 

        Serial.println(num); 

    } 

  

  

  if (a==1){ 

   Serial.println("a-blue"); 

   Wire.beginTransmission(8);  

   Wire.write(1);        

   Wire.endTransmission(); 

  }else if(b==1){ 

   Serial.println("b-red"); 

   Wire.beginTransmission(8);  

   Wire.write(4);        

   Wire.endTransmission(); 

  }else if(c==1){ 

   Serial.println("c-green"); 

   Wire.beginTransmission(8);  

   Wire.write(3);        

   Wire.endTransmission(); 

  }else if(d==1){ 

   Serial.println("d-white"); 

   Wire.beginTransmission(8);  

   Wire.write(6);        

   Wire.endTransmission(); 

  }else if(e==1){ 

   Serial.println("e-yellow"); 

    

   Wire.beginTransmission(8);  

   Wire.write(5);        

   Wire.endTransmission();  

  } 

  delay(200); 

  val_L=analogRead(0); 

  V_L=(float)val_L/1023.0*5.0; 

  if (V_L>1.0){ 

   Serial.println("a-blue"); 

   Wire.beginTransmission(8);  

   Wire.write(0 

   );        

   Wire.endTransmission(); 

  } 

  } 
