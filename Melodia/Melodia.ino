//Doremi

//Aqui definimos a frequencia de cada nota essa frequencia na função tone cujo 
//precisamos da frequencia apos especificarmos o pino no qual sera enviada a frequencia
// tone(pino,frequencia);
#define DO  262
#define RE  294
#define MI  330
#define FA  349
#define SOL  392
#define LA  440
#define SI  494
#define DO_2  523

int buzz = 6;

int melodia[] = {
 // SI, LA, FA, SI, LA, FA, SI, LA, MI, RE, MI// =>Canção da cura(majoras mask) 11 NOTAS(numero que sera colocado apos o 1<X)
 RE, FA, LA, LA, SI, RE, FA, LA, LA, SI, LA, RE, FA, SOL, FA, MI, RE //=>Serenata da Água (ocarina of time) 17 NOTAS

};

void setup()
{
  pinMode(buzz,OUTPUT);//Define o buzzer como saida
}

void loop() 
{
  for(int i= 0; i<17; i++)//o numero apos o for(int i= 0; i<(numero de notas); i++)
  {
    tone(buzz,melodia[i]);//ele manda enviar uma frequecia para pino do buzzer que foi espesificada na varivel Melodia 
    delay(500);
  } 
  delay(1000);
}

//Sintaxe do comando "tone": https://www.arduino.cc/reference/pt/language/functions/advanced-io/tone/
