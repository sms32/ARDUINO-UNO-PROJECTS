// THIS CODE IS USED TO DETECT THE MOTION BY USING PIR SENSOR.

int sensor = 0 ;
int PIR = 13;
int LED = 7;

void setup()
{
  Serial.begin(9600);
pinMode(PIR,INPUT);
pinMode(LED,OUTPUT);
}

void loop()
{
  int sensor = digitalRead(PIR);
if (sensor == HIGH)
{
Serial.print("MOTION DETECTED");
digitalWrite(LED,LOW);
}
}
