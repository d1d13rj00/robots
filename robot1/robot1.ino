/* Robot 1 
 * Autonomous robot avoiding obstacles
 * Terrain : Flat, indoor
 * 
 */

#include <Servo.h>

Servo servo1;
Servo servo2;
int buzzPin =  2;    //Connect Buzzer on Digital Pin2 

void setup()   
{
  servo1.attach(8);
  servo1.attach(9);
  pinMode(buzzPin, OUTPUT);      
} 

void move_fwd(){
 servo1.write(0);  
}

void move_bkwd(){
  
}

void rotate_left(){
  
}

void rotate_right(){
  
}


 void loop()                      
{ 
  move_fwd();  
}
