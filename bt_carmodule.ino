#include "BluetoothSerial.h" 
BluetoothSerial ESP_BT; //Object for Bluetooth


#define RF 14
#define LB 27
#define LF 26
#define RB 12


int incoming;

void setup() {
  Serial.begin(9600); //Start Serial monitor in 9600
  ESP_BT.begin("Car1");
 
  Serial.println("Bluetooth Device is Ready to Pair");


pinMode(RF,OUTPUT);
pinMode(LF,OUTPUT);
pinMode(LB,OUTPUT);
pinMode(RB,OUTPUT);
digitalWrite(RF,LOW);
        digitalWrite(LB,LOW);
        digitalWrite(LF,LOW);
        digitalWrite(RB,LOW);                       
        
}

void loop() {
  
  if (ESP_BT.available()) //Check if we receive anything from Bluetooth
  {
    incoming = ESP_BT.read(); //Read what we recevive 
    Serial.print("Received:"); Serial.println(incoming);

    if (incoming == 83)
        {
        digitalWrite(RF,LOW);
        digitalWrite(LB,LOW);
        digitalWrite(LF,LOW);
        digitalWrite(RB,LOW);                       
                            
        }
        
          if (incoming == 66)
        {
        digitalWrite(RF,HIGH);
        digitalWrite(LB,LOW);
        digitalWrite(LF,HIGH);
        digitalWrite(RB,LOW);                       
                            
        }

            if (incoming == 70)
        {
        digitalWrite(RF,LOW);
        digitalWrite(LB,HIGH);
        digitalWrite(LF,LOW);
        digitalWrite(RB,HIGH);                       
                            
        }

            if (incoming == 76)
        {
        digitalWrite(RF,HIGH);
        digitalWrite(LB,HIGH);
        digitalWrite(LF,LOW);
        digitalWrite(RB,LOW);                       
                            
        }

            if (incoming == 82)
        {
        digitalWrite(RF,LOW);
        digitalWrite(LB,LOW);
        digitalWrite(LF,HIGH);
        digitalWrite(RB,HIGH);                       
                            
        }
                    if (incoming == 68)
        {
        digitalWrite(RF,LOW);
        digitalWrite(LB,LOW);
        digitalWrite(LF,LOW);
        digitalWrite(RB,LOW);                       
                            
        }

                           if (incoming == 6)
        {

        digitalWrite(RF,HIGH);
        digitalWrite(LB,HIGH);
        digitalWrite(LF,LOW);
        digitalWrite(RB,LOW); 
          delay(300);
        digitalWrite(RF,LOW);
        digitalWrite(LB,LOW);
        digitalWrite(LF,LOW);
        digitalWrite(RB,LOW);                       
                            
        }

                           if (incoming == 5)
        {

      digitalWrite(RF,LOW);
        digitalWrite(LB,LOW);
        digitalWrite(LF,HIGH);
        digitalWrite(RB,HIGH);
           delay(300);
        digitalWrite(RF,LOW);
        digitalWrite(LB,LOW);
        digitalWrite(LF,LOW);
        digitalWrite(RB,LOW);                       
                            
        }

                           if (incoming == 4)
        {
   digitalWrite(RF,HIGH);
        digitalWrite(LB,LOW);
        digitalWrite(LF,HIGH);
        digitalWrite(RB,LOW); 
           delay(400);
        digitalWrite(RF,LOW);
        digitalWrite(LB,LOW);
        digitalWrite(LF,LOW);
        digitalWrite(RB,LOW);                       
                            
        }

                           if (incoming == 3)
        {

                 digitalWrite(RF,LOW);
        digitalWrite(LB,HIGH);
        digitalWrite(LF,LOW);
        digitalWrite(RB,HIGH);  

        delay(400);
        digitalWrite(RF,LOW);
        digitalWrite(LB,LOW);
        digitalWrite(LF,LOW);
        digitalWrite(RB,LOW);                       
                            
        }
  }
  delay(20);
}