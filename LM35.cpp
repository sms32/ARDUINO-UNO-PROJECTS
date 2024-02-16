int temp = A1 ; 

void setup()
{
  pinMode(temp,INPUT);
pinMode(12,output);
Serial.begin(9600);
}

void loop()
{
  int LM35 = analogRead(temp);
int celsius = (LM35 * 500)/1024;
Serial.print(celsius);
if (celsius >= 25)
{
digitalWrite(12,HIGH);
}
else
{
digitalWrite(12,LOW)
  }
}
