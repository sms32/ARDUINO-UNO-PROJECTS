//THIS CODE IS USED FOR THE  SOIL MOISTURE SENSOR TO CHECK THE MOISTURE PRESENT IN SOIL AND IF THE MOISTURE IS MORE THEN THE  LED WILLL GLOW .
#include<Servo.h>

int sensor = 0 ;
int PIR = 12;
const int trigPin = 7;
const int echoPin = 6;
long duration;
int distance;
int servoPin = 3;
const int sen = A1;
int temp = A2 ; 
Servo Servo1;
void setup()
{
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(13,OUTPUT);
  pinMode(temp,INPUT);
  pinMode(PIR,INPUT);
  Servo1.attach(servoPin);
}
void loop()
{
  float moisture_percentage;
int sensor_analog;
sensor_analog = analogRead(sen);
moisture_percentage = (100 - ((sensor_analog/1023.00)*100));
  digitalWrite(trigPin,HIGH);
delayMicroseconds(2);
  digitalWrite(trigPin,LOW);
delayMicroseconds(10);
duration = pulseIn(echoPin,HIGH);
distance = duration * 0.034 / 2;
 int LM35 = analogRead(temp);
int celsius = (LM35 * 500)/1024;
 int sensor = digitalRead(PIR);
 Serial.print("\n");
Serial.print("Surrounding Temperature = ");
Serial.print(celsius);
delay(1000);
Serial.print("\n");
Serial.print("Distance = ");
Serial.println(distance);

delay(1000);
Serial.print("Moisture = ");
Serial.print(moisture_percentage);
Serial.print("%\n");
delay(1000);

if ((moisture_percentage > 10) && (sensor == HIGH) &&(distance > 10) && (celsius >= 15))
{
Serial.print("MOTION DETECTED");
Serial.print("\n ");
delay(1000);
  Servo1.write(180);
  digitalWrite(13,HIGH);
  delay(1000);
  }
else
{
  Servo1.write(0);
digitalWrite(13,LOW);
delay(1000);
 Serial.print("MOTION NOT DETECTED");
  Serial.print("\n ");
  delay(1000);
}
}
