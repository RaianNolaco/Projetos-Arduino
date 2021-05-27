#include "DHT.h"
#include <Adafruit_Sensor.h>

#define DHTPIN A0 //pono que o sensor esta conectado
#define DHTTYPE DHT11 // DHT 11

// (// = Comenta uma linha  /*....*/= Comenta um trecho)
/*pino 1 do sensor(vcc) vai no 5V
pino 2 vai na pino de dados
pino 4(meu caso 3) ira no gnd*/

DHT dht(DHTPIN,DHTTYPE);

void setup()
{

 Serial.begin(9600); // Ela configura a taxa de comunicação em bits por segundo (baud rate)
 Serial.println("HELLO WORD"); 
 /*Serial.println():Funciona praticamente igual a função Serial.print(), a única diferença 
 é que esta função acrescenta ao fim da mensagem o caractere de retorno 
 de carro (ASCII 13 ou ‘\r’) e o caractere de nova linha(ASCII 10 ou ‘\n’)*/
 dht.begin();

}

void loop() 
{ 
  //A leitura da temperatura e umidade pode levar 250ms
  //o atraso do sensor pode ser de 2 Seg

  float h = dht.readHumidity();//Declara a variavel que ira receber a informação da umidade
  float t = dht.readTemperature();//Declara a variavel que ira receber a temperatura
  /*float =Representa números fracionários e números reais (o que inclui os números inteiros). 
  A faixa de valores varia de 1,2e-38 até 3,4e+38.*/
  
  if(isnan(t)||isnan(h))
  {
    Serial.println("Falha ao ler DHT"); 
  }
  else
  {
    /*Serial.print():Escreve na serial texto em formato  ASCII. Essa função tem muitas possibilidades. Números inteiros são escritos usando um
    caractere ASCII para cada dígito. O mesmo ocorre para números flutuante e, por padrão, são escrito duas casas decimais. Bytes
    são enviados como caracteres únicos e strings e caracteres são enviados como escritos.*/
    Serial.print("Umidade: ");
    Serial.print(h);
    Serial.print("%t");  
    Serial.print("Temperatura: ");
    Serial.print(t);
    Serial.println("°C");  
  }  
  
}
