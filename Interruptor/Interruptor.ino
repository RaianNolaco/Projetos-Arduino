//interruptor 5

int botao = 7;
int led = 13;
bool stl = 0;

void setup()
{
 pinMode(botao,INPUT_PULLUP);//define o botão como entrada
 pinMode(led,OUTPUT);  
}

void loop()
{
 if(digitalRead(botao)== LOW) //se o botão for pressionada
 {
  stl = !stl; // troca oestado do Led
  digitalWrite(led,stl);
  while(digitalRead(botao)== LOW);
  delay(100);
 } 
}
