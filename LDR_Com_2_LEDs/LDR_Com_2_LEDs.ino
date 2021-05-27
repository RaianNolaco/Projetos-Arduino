int LedG = 13;
int LedR = 12;
int LDR  = A0;
int ValLuz = 0;

void setup()
{
  pinMode(LedG,OUTPUT);
  pinMode(LedR,OUTPUT);
}

void loop()
{
  ValLuz = analogRead(LDR);
  if(ValLuz>90)
  {
    digitalWrite(LedG, HIGH);
    digitalWrite(LedR, LOW);
  }
 else
  {
    digitalWrite(LedR, HIGH);
    digitalWrite(LedG, LOW);
  }
  

   delay(10);
}
