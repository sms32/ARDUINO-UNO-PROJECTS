//THIS CODE IS USED BY CONNECTING THREE 3 LED TO ARDUINO TO CREATE A TRAFFIC LIGHT SYSTEM WHERE THE DELAY IS SET AS REQUIRED TO MAKE THE LIGHTS WORK .

int red = 13;
int yellow = 8;
int green = 7;

void setup()
{
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
}
void loop()
{
  digitalWrite(red,HIGH);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);
delay(1000);
digitalWrite(red,LOW);
digitalWrite(yellow,HIGH);
digitalWrite(green,LOW);
delay(1000);
digitalWrite(red,LOW);
digitalWrite(yellow,LOW);
digitalWrite(green,HIGH);
delay(1000)
  }
