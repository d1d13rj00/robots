/* Robot 1 
 * Autonomous robot avoiding obstacles
 * Terrain : Flat, indoor
 * 
 */

#include <Servo.h>

Servo servo1;
Servo servo2;
int buzzPin =  2;    //Connect Buzzer on Digital Pin2 

const int trigPin = 10;
const int echoPin = 11;

long duration;
int distance;

void setup()   
{
  servo1.attach(8);
  servo2.attach(9);
  pinMode(buzzPin, OUTPUT);  
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);  
} 

/* Defining robots functions
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

void loop() { 

// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

if (distance < 10) {
  tone(buzzPin,400,1500);
  rotate_left();
} else {
  move_fwd();
}
delay(500);
  /*
  int DLY = 3000;
  
  move_fwd();
  delay(DLY); 
  brake();
  delay(DLY); 
  rotate_left(); 
  delay(DLY);
  rotate_right(); 
  delay(DLY); 
*/
}
