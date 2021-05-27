int led_R = 7;
int led_G = 6;
int led_B = 5;
int pot = A0;
int valPot;

void setup()
{
 pinMode(led_R,OUTPUT);
 pinMode(led_G,OUTPUT);
 pinMode(led_B,OUTPUT);
 off_Led();
}

void loop() 
{
  valPot = analogRead(pot);
  if(valPot >= 0 && valPot <= 256)
  {
    off_Led();
  }
  if(valPot > 256 && valPot <= 512)
  {
   On_R();    
  }
  if(valPot > 512 && valPot <= 768)
  {
    On_G();
  }
  if(valPot > 768 && valPot <= 1023)
  {
    On_B();
  }
}

void On_R()
{
  digitalWrite(led_R,LOW); 
  digitalWrite(led_G,HIGH);
  digitalWrite(led_B,HIGH);
}

void On_G()
{
  digitalWrite(led_R,HIGH);
  digitalWrite(led_G,LOW);
  digitalWrite(led_B,HIGH);  
}

void On_B()
{
 digitalWrite(led_R,HIGH);
 digitalWrite(led_G,HIGH);
 digitalWrite(led_B,LOW); 
}

void off_Led()
{
 digitalWrite(led_R,HIGH);
 digitalWrite(led_G,HIGH);
 digitalWrite(led_B,HIGH); 
}
