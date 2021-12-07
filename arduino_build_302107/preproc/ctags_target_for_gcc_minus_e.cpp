# 1 "G:\\UNS\\Semester 3\\tugas\\Pratikum Internet Of things\\pratikum Iot 14\\tugas14\\tugas14.ino"
const int trigger=7;
const int echo =6;
long duration;
int distanceCM;

void setup() {
 // put your setup code here, to run once: 
pinMode(trigger, 0x1);
pinMode(echo, 0x0);
Serial.begin(9600);
}

void loop() {
 // put your main code here, to run repeatedly: 
digitalWrite(trigger, 0x0);
delayMicroseconds(2);
digitalWrite(trigger, 0x1);
delayMicroseconds (5);

duration=pulseIn(echo, 0x1);
distanceCM=duration*0.0342/2;

Serial.print(distanceCM);
Serial.print("cm");
Serial.println();

delay(100);
}
