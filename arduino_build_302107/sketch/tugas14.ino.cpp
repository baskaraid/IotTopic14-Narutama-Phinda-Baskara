#include <Arduino.h>
#line 1 "G:\\UNS\\Semester 3\\tugas\\Pratikum Internet Of things\\pratikum Iot 14\\tugas14\\tugas14.ino"
const int trigger=7; 
const int echo =6;
long duration;
int distanceCM; 

#line 6 "G:\\UNS\\Semester 3\\tugas\\Pratikum Internet Of things\\pratikum Iot 14\\tugas14\\tugas14.ino"
void setup();
#line 13 "G:\\UNS\\Semester 3\\tugas\\Pratikum Internet Of things\\pratikum Iot 14\\tugas14\\tugas14.ino"
void loop();
#line 6 "G:\\UNS\\Semester 3\\tugas\\Pratikum Internet Of things\\pratikum Iot 14\\tugas14\\tugas14.ino"
void setup() { 
 // put your setup code here, to run once: 
pinMode(trigger, OUTPUT); 
pinMode(echo, INPUT); 
Serial.begin(9600);
} 

void loop() { 
 // put your main code here, to run repeatedly: 
digitalWrite(trigger, LOW); 
delayMicroseconds(2); 
digitalWrite(trigger, HIGH); 
delayMicroseconds (5); 

duration=pulseIn(echo, HIGH); 
distanceCM=duration*0.0342/2;
 
Serial.print(distanceCM); 
Serial.print("cm"); 
Serial.println(); 

delay(100); 
} 

