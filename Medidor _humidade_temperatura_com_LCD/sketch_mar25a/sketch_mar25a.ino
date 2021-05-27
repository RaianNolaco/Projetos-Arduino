#include <DHT.h>
#include <LiquidCrystal.h>
#define DHTPIN A0
#define DHTTYPE DHT11 
LiquidCrystal lcd(1,3,4,5,6,7);
DHT dht (DHTPIN,DHTTYPE);

byte grau[8]=
{
 B00001100,    //Montagem do simbolo "grau" 
 B00010010,    //Montagem do simbolo "grau"
 B00010010,    //Montagem do simbolo "grau"
 B00001100,    //Montagem do simbolo "grau"
 B00000000,    //Montagem do simbolo "grau"
 B00000000,    //Montagem do simbolo "grau"
 B00000000,    //Montagem do simbolo "grau"
 B00000000,    //Montagem do simbolo "grau"
};


void setup()
{
  lcd.begin(16,2);
  lcd.clear();
  lcd.createChar(0,grau);
  dht.begin();
}

void loop()
{
  float t = dht.readTemperature(); 
  float h = dht.readHumidity();
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(" ");
  lcd.setCursor(7,0);
  lcd.print(t,1);
  lcd.setCursor(12,0);
  lcd.write((byte)0);
  lcd.print("C");

  lcd.setCursor(0,1);
  lcd.print("Umid: ");
  lcd.print("");
  lcd.setCursor(7,1);
  lcd.print(h,1);
  lcd.setCursor(12,1);
  lcd.print("%");

  delay(1000);
}
