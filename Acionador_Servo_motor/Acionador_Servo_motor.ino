//acionador Servo Motor

#include<Servo.h>

int btn = 8;
Servo servo;

void setup()
{
  pinMode(btn,INPUT_PULLUP);//define o botão como saida
}

void loop() 
{
  servo.attach(10);
  if(digitalRead(btn)==LOW)
  {
   for(int angulo =0; angulo<= 180; angulo++ )//aumenta o angulo do servo ate 180 graus
   {
    servo.write(angulo);
    delay(10);  
   }
   for(int angulo=180; angulo>=0; angulo--)//diminuo o angulo do servo
   {
    servo.write(angulo);
    delay(10);
   }
  }
  servo.detach();
}
