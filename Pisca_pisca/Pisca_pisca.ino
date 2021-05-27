int G = 11;
int R = 12;
int Y = 13;

void setup() 
{
  pinMode(G,OUTPUT);
  pinMode(R,OUTPUT);
  pinMode(Y,OUTPUT);
}

void loop() 
{
  digitalWrite(G,HIGH);
  delay(100);
  digitalWrite(R,HIGH);
  delay(100);
  digitalWrite(Y,HIGH);
  delay(500);
  digitalWrite(G,LOW);
  delay(100);
  digitalWrite(R,LOW);
  delay(60);
  digitalWrite(Y,LOW); 
  delay(500); 
}
