//contorlar motor com Potenciomtro

#include<Servo.h>

Servo servo;
float pot = A5;
float valP;

void setup()
{
 servo.attach(10);//usa o pino 10 para enviar informações ao servo
}

void loop()
{
 valP = analogRead(pot);//le o valor do potenciometro e armazena na variavel "valP"
 valP = map(valP,0,1023,0,180);//mapeia os valores do potenciometro (entre 0 e 1023) e os do servo (entre 0 e 180)
 servo.write(valP);//manda o valor para o servo
 delay(15);
}
