//Codifo morse de S.O.S

int G = 11; 
int R = 12;

void setup() 
{
  pinMode(G,OUTPUT);
  pinMode(R,OUTPUT);
}

void loop() 
{ 
  //... = S
  for(int x = 0;x<3;x++)
  { 
    digitalWrite(G,HIGH);
    delay(250);
    digitalWrite(G,LOW);
    delay(250);
  }
  
  delay(1000);

  //--- = O
  for (int x = 0;x<3;x++)
  {
    digitalWrite(R,HIGH);
    delay(700);
    digitalWrite(R,LOW);  
    delay(700);
  }

  delay(1000);

  //... = S
  for(int x= 0;x<3;x++)
  {
    digitalWrite(G,HIGH);
    delay(250);
    digitalWrite(G,LOW);
    delay(250);
  } 
  delay(1000);
   
}
