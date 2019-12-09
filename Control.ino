#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  // at
} 
 
 
void loop() 
{ 
                      
    myservo.write(30);              // tell servo to go to position in variable 'pos' 
    delay(2000); 
    myservo.write(90);
    delay(2000); // waits 15ms for the servo to reach the position 

} 
