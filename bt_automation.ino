#include <SoftwareSerial.h>
 
SoftwareSerial mySerial(2, 3);
 
void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("coded by harshit jindal");
  
}
 
void loop() 
{
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());
  if(mySerial == '1')            //Checks whether value of data is equal to 1 
   digitalWrite(12, HIGH);  //If value is 1 then LED turns ON
 else if(mySerial == '0')       //Checks whether value of data is equal to 0
   digitalWrite(12, LOW);   //If value is 0 then LED turns OFF
    if(mySerial == '2')            //Checks whether value of data is equal to 2 
   digitalWrite(12, HIGH);  //If value is 2 then fan turns ON
 else if(mySerial == '3')       //Checks whether value of data is equal to 3
   digitalWrite(12, LOW);   //If value is 3 then fan turns OFF
    if(mySerial == '4')            //Checks whether value of data is equal to 4 
   digitalWrite(12, HIGH);  //If value is 4 then tv turns ON
 else if(mySerial == '5')       //Checks whether value of data is equal to 5
   digitalWrite(12, LOW);   //If value is 5 then tv turns OFF
   
}
