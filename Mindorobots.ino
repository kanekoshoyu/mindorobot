/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
 
Servo molt;
Servo mort;

 
int pos = 180`;    // variable to store the servo position 
 
void setup() 
{ 
  molt.attach(5); 
  digitalWrite(6,LOW);
  digitalWrite(11,LOW);
  mort.attach(10); // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
  // in steps of 1 degree 


    molt.write(pos);
    mort.write(pos); // tell servo to go to position in variable 'pos' 
   
} 

