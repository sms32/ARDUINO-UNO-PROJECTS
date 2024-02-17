//THIS CODE IS USED TO MAKE A GARBAGE COLLECTION SYSTEM BY USING ULTRASONIC SONIC SENSOR TO DETECT THE GARBAGE AND A SERVO MOTOR TO OPEN THE GARBAGE BIN AND CLOSE IT WHEN NO GARBAGE IS DETECTED .

#include<Servo.h>

const int trigPin = 7;
const int echoPin = 6;
long duration;
int distance;
int servoPin = 3;
int LED =13;
Servo Servo1;
void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(LED,OUTPUT);
Servo1.attach(servoPin);
}
void loop()
{
  digitalWrite(trigPin,HIGH);
delayMicroseconds(2);
  digitalWrite(trigPin,LOW);
delayMicroseconds(10);
duration = pulseIn(echoPin,HIGH);
distance = duration * 0.034 / 2;
Serial.println(distance);
Serial.print("\n");
delay(1000);

if (distance > 10)
{
Servo1.write(180);
digitalWrite(LED,HIGH);
delay(1000);
}
else
{
Servo1.write(0);
digitalWrite(LED,LOW);
delay(1000);
}
}
