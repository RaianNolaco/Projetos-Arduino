/*int Led = 12;
int Sensor = 3;
int estadoSensor;

void setup() 
{
  pinMode(Sensor,INPUT);
  pinMode(Led,INPUT);
}

void loop()
{
 if(digitalRead(Sensor)==LOW)
 {
  estadoSensor = digitalRead(Led);
  digitalWrite(Led,!estadoSensor);
  delay(250); 
 }
}*/



int pinoLed = 7; //PINO DIGITAL UTILIZADO PELO LED
int pinoSensor = 4; //PINO DIGITAL UTILIZADO PELO SENSOR
bool estadoSensor; //VARIÁVEL QUE ARMAZENA O ESTADO DA SAÍDA DO SENSOR (HIGH / LOW)
 
void setup(){
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
}
 
void loop()
{
  if (digitalRead(pinoSensor) == HIGH)
     {
      estadoSensor = digitalRead(pinoLed); //LÊ O ESTADO ATUAL DO PINO E ARMAZENA NA VARIÁVEL
      digitalWrite(pinoLed,!estadoSensor); //MUDA O ESTADO ATUAL DO LED COMPARANDO COM O ESTADO
      //ARMAZENADO NA VARIÁVEL estadoSensor
      delay(1000); //INTERVALO DE 500 MILISSEGUNDOS 
      }

}
