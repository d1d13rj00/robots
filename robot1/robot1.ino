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
  servo2.attach(9);
  pinMode(buzzPin, OUTPUT);      
} 

/* Defining robots functions
 * 
 * 
 */
 
void move_fwd(){
 servo1.write(180);
 servo2.write(0);  
}

void move_bkwd(){
 servo1.write(0);
 servo2.write(180);   
}

void rotate_left(){
 servo1.write(180);
 servo2.write(180);   
}

void rotate_right(){
 servo1.write(0);
 servo2.write(0);     
}
void brake(){
 servo1.write(90);
 servo2.write(90);     
}


void loop()                      
{ 
  int DLY = 3000;
  
  move_fwd();
  delay(DLY); 
  brake();
  delay(DLY); 
  rotate_left(); 
  delay(DLY);
  rotate_right(); 
  delay(DLY); 
}
