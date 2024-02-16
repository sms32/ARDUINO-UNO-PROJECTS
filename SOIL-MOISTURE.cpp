//THIS CODE IS USED FOR THE  SOIL MOISTURE SENSOR TO CHECK THE MOISTURE PRESENT IN SOIL AND IF THE MOISTURE IS MORE THEN THE  LED WILLL GLOW .

const int sen = A1;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
void loop()
{
  float moisture_percentage;
int sensor_analog;
sensor_analog = analogRead(sen);
moisture_percentage = (100 - ((sensor_analog/1023.00)*100));
Serial.print("Moisture = ");
Serial.print(moisture_percentage);
Serial.print("%\n\n");
delay(1000);

if (moisture_percentage > 10)
{
  digitalWrite(13,HIGH);
  }
else
{
digitalWrite(13,LOW);
}
}
